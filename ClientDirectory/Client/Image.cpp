#include "Image.h"

ChronosImage::ChronosImage()
    : HBitmap(nullptr), MemDC(nullptr), ImgWidth(0), ImgHeight(0) {}

ChronosImage::~ChronosImage() {
    Destroy();
}

bool ChronosImage::Create(int Width, int Height, const DWORD* PixelData) {
    Destroy();

    ImgWidth = Width;
    ImgHeight = Height;
    Pixels.assign(PixelData, PixelData + (Width * Height));

    HDC ScreenDC = GetDC(nullptr);
    HBitmap = CreateBitmap(Width, Height, 1, 32, Pixels.data());
    if (!HBitmap) {
        ReleaseDC(nullptr, ScreenDC);
        return false;
    }

    MemDC = CreateCompatibleDC(ScreenDC);
    SelectObject(MemDC, HBitmap);
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
    if (MemDC && HBitmap) {
        StretchBlt(hdc, X, Y, Width, Height,
                   MemDC, 0, 0, ImgWidth, ImgHeight, SRCCOPY);
    }
}

bool ChronosImage::Load(const std::wstring& FilePath) {
    Destroy();

    HBITMAP loaded = (HBITMAP)LoadImageW(nullptr, FilePath.c_str(),
                                         IMAGE_BITMAP, 0, 0,
                                         LR_LOADFROMFILE | LR_CREATEDIBSECTION);
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
    HBitmap = loaded;
    return true;
}

bool ChronosImage::Save(const std::wstring& FilePath) const {
    if (!HBitmap) return false;

    BITMAP BMP;
    GetObject(HBitmap, sizeof(BMP), &BMP);

    BITMAPFILEHEADER BFH = {};
    BITMAPINFOHEADER BIH = {};
    BIH.biSize = sizeof(BITMAPINFOHEADER);
    BIH.biWidth = BMP.bmWidth;
    BIH.biHeight = -BMP.bmHeight; // top-down DIB
    BIH.biPlanes = 1;
    BIH.biBitCount = 32;
    BIH.biCompression = BI_RGB;

    DWORD ImageSize = BMP.bmWidth * BMP.bmHeight * 4;
    BFH.bfType = 0x4D42; // 'BM'
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
    if (HBitmap) {
        DeleteObject(HBitmap);
        HBitmap = nullptr;
    }
    Pixels.clear();
    ImgWidth = ImgHeight = 0;
}
