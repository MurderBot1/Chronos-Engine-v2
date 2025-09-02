#ifndef Image_CPP
#define Image_CPP

#include "Image.h"

ChronosImage::ChronosImage()
    : HBitMap(nullptr), MemDC(nullptr), ImgWidth(0), ImgHeight(0) {}

ChronosImage::~ChronosImage() {
    Destroy();
}

bool ChronosImage::Create(int Width, int Height, const DWORD* PixelData) {
    Destroy();

    ImgWidth = Width;
    ImgHeight = Height;
    Pixels.assign(PixelData, PixelData + (Width * Height));

    HDC ScreenDC = GetDC(nullptr);
    HBitMap = CreateBitmap(Width, Height, 1, 32, Pixels.data());
    if (!HBitMap) {
        ReleaseDC(nullptr, ScreenDC);
        return false;
    }

    MemDC = CreateCompatibleDC(ScreenDC);
    SelectObject(MemDC, HBitMap);
    ReleaseDC(nullptr, ScreenDC);
    return true;
}

void ChronosImage::Edit(int X, int Y, DWORD Argb) {
    if (X < 0 || Y < 0 || X >= ImgWidth || Y >= ImgHeight) return;
    Pixels[Y * ImgWidth + X] = Argb;
    SetPixel(MemDC, X, Y,
             RGB((Argb >> 16) & 0xFF, (Argb >> 8) & 0xFF, Argb & 0xFF));
}

void ChronosImage::Draw(HDC hdc, int X, int Y, int Width, int Height) const {
    if (MemDC && HBitMap) {
        StretchBlt(hdc, X, Y, Width, Height,
                   MemDC, 0, 0, ImgWidth, ImgHeight, SRCCOPY);
    }
}

bool ChronosImage::Load(const std::wstring& FilePath) {
    Destroy();

    HBITMAP Loaded = (HBITMAP)LoadImageW(
        nullptr, FilePath.c_str(),
        IMAGE_BITMAP, 0, 0,
        LR_LOADFROMFILE | LR_CREATEDIBSECTION
    );
    if (!Loaded) return false;

    BITMAP BMP;
    if (!GetObject(Loaded, sizeof(BITMAP), &BMP)) return false;   

    ImgWidth = BMP.bmWidth;
    ImgHeight = BMP.bmHeight;

    BITMAPINFO BMI = {};
    BMI.bmiHeader.biSize        = sizeof(BITMAPINFOHEADER);
    BMI.bmiHeader.biWidth       = ImgWidth;
    BMI.bmiHeader.biHeight      = ImgHeight;
    BMI.bmiHeader.biPlanes      = 1;
    BMI.bmiHeader.biBitCount    = 32;
    BMI.bmiHeader.biCompression = BI_RGB;

    Pixels.resize(ImgWidth * ImgHeight);

    HDC hdc = GetDC(nullptr);
    GetDIBits(hdc, Loaded, 0, ImgHeight, Pixels.data(), &BMI, DIB_RGB_COLORS);
    ReleaseDC(nullptr, hdc);
    if (!Pixels.data()) return false;

    HDC ScreenDC = GetDC(nullptr);
    MemDC = CreateCompatibleDC(ScreenDC);
    SelectObject(MemDC, Loaded);
    ReleaseDC(nullptr, ScreenDC);
    HBitMap = Loaded;
    return true;
}

bool ChronosImage::Save(const std::wstring& FilePath) const {
    if (!HBitMap) return false;

    BITMAP BMP;
    GetObject(HBitMap, sizeof(BMP), &BMP);

    BITMAPFILEHEADER BFH = {};
    BITMAPINFOHEADER BIH = {};
    BIH.biSize = sizeof(BITMAPINFOHEADER);
    BIH.biWidth = BMP.bmWidth;
    BIH.biHeight = -BMP.bmHeight; 
    BIH.biPlanes = 1;
    BIH.biBitCount = 32;
    BIH.biCompression = BI_RGB;

    DWORD ImageSize = BMP.bmWidth * BMP.bmHeight * 4;
    BFH.bfType = 0x4D42; 
    BFH.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);
    BFH.bfSize = BFH.bfOffBits + ImageSize;

    std::ofstream File(FilePath.c_str(), std::ios::binary);
    if (!File) return false;

    File.write(reinterpret_cast<const char*>(&BFH), sizeof(BFH));
    File.write(reinterpret_cast<const char*>(&BIH), sizeof(BIH));
    File.write(reinterpret_cast<const char*>(Pixels.data()), ImageSize);

    return true;
}

void ChronosImage::Destroy() {
    if (MemDC) {
        DeleteDC(MemDC);
        MemDC = nullptr;
    }
    if (HBitMap) {
        DeleteObject(HBitMap);
        HBitMap = nullptr;
    }
    Pixels.clear();
    ImgWidth = ImgHeight = 0;
}

bool ChronosImage::SetAsWindowIcon(HWND hwnd) const {
    if (!hwnd || Pixels.empty() || ImgWidth <= 0 || ImgHeight <= 0)
        return false;

    ICONINFO II = {};
    II.fIcon = TRUE;  // TRUE for icon, FALSE for cursor
    II.xHotspot = 0;
    II.yHotspot = 0;
    II.hbmMask = HBitMap; // Windows will use this as transparency mask if monochrome
    II.hbmColor = HBitMap;

    HICON HIcon = CreateIconIndirect(&II);
    if (!HIcon)
        return false;

    SendMessageW(hwnd, WM_SETICON, ICON_BIG,   (LPARAM)HIcon);
    SendMessageW(hwnd, WM_SETICON, ICON_SMALL, (LPARAM)HIcon);

    // If you want to avoid leaks, store HICON and destroy later with DestroyIcon
    return true;
}

#endif