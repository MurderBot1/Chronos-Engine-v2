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

    HBITMAP loaded = (HBITMAP)LoadImageW(
        nullptr, FilePath.c_str(),
        IMAGE_BITMAP, 0, 0,
        LR_LOADFROMFILE | LR_CREATEDIBSECTION
    );
    if (!loaded) return false;

    BITMAP BMP;
    GetObject(loaded, sizeof(BMP), &BMP);
    ImgWidth = BMP.bmWidth;
    ImgHeight = BMP.bmHeight;
    Pixels.resize(ImgWidth * ImgHeight);

    memcpy(Pixels.data(), BMP.bmBits, ImgWidth * ImgHeight * 4);

    HDC ScreenDC = GetDC(nullptr);
    MemDC = CreateCompatibleDC(ScreenDC);
    SelectObject(MemDC, loaded);
    ReleaseDC(nullptr, ScreenDC);
    HBitMap = loaded;
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

    ICONINFO ii = {};
    ii.fIcon = TRUE;  // TRUE for icon, FALSE for cursor
    ii.xHotspot = 0;
    ii.yHotspot = 0;
    ii.hbmMask = HBitMap; // Windows will use this as transparency mask if monochrome
    ii.hbmColor = HBitMap;

    HICON hIcon = CreateIconIndirect(&ii);
    if (!hIcon)
        return false;

    SendMessageW(hwnd, WM_SETICON, ICON_BIG,   (LPARAM)hIcon);
    SendMessageW(hwnd, WM_SETICON, ICON_SMALL, (LPARAM)hIcon);

    // If you want to avoid leaks, store HICON and destroy later with DestroyIcon
    return true;
}

#endif