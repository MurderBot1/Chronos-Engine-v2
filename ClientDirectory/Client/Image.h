#ifndef Image_H
#define Image_H

#include <windows.h>
#include <vector>
#include <string>
#include <fstream>


typedef unsigned __LONG32 Pixel;

class ChronosImage {
    public:
        ChronosImage();
        ~ChronosImage();

        virtual bool Create(int Width, int Height, const Pixel* PixelData);
        virtual void Edit(int X, int Y, Pixel Argb);
        virtual void Draw(HDC Hdc, int X, int Y, int Width, int Height) const;
        virtual bool Load(const std::wstring& FilePath);
        virtual bool Save(const std::wstring& FilePath) const;
        virtual void Destroy();

    protected:
        HBITMAP     HBitMap;
        HDC         MemDC;
        int         ImgWidth;
        int         ImgHeight;
        std::vector<Pixel> Pixels;
};

class BMP : public ChronosImage {
    public:
        BMP();
        ~BMP();
};

class JPG : public ChronosImage {
    public:
        JPG();
        ~JPG();

        bool Create(int Width, int Height, const Pixel* PixelData);
        void Edit(int X, int Y, Pixel Argb);
        void Draw(HDC Hdc, int X, int Y, int Width, int Height) const;
        bool Load(const std::wstring& FilePath) override;
        bool Save(const std::wstring& FilePath) const override;
        void Destroy();
};

class PNG : public ChronosImage {
    public:
        PNG();
        ~PNG();

        bool Create(int Width, int Height, const Pixel* PixelData);
        void Edit(int X, int Y, Pixel Argb);
        void Draw(HDC Hdc, int X, int Y, int Width, int Height) const;
        bool Load(const std::wstring& FilePath) override;
        bool Save(const std::wstring& FilePath) const override;
        void Destroy();
};

class WEBP : public ChronosImage {
    public:
        WEBP();
        ~WEBP();

        bool Create(int Width, int Height, const Pixel* PixelData);
        void Edit(int X, int Y, Pixel Argb);
        void Draw(HDC Hdc, int X, int Y, int Width, int Height) const;
        bool Load(const std::wstring& FilePath) override;
        bool Save(const std::wstring& FilePath) const override;
        void Destroy();
};

class TIFF : public ChronosImage {
    public:
        TIFF();
        ~TIFF();

        bool Create(int Width, int Height, const Pixel* PixelData);
        void Edit(int X, int Y, Pixel Argb);
        void Draw(HDC Hdc, int X, int Y, int Width, int Height) const;
        bool Load(const std::wstring& FilePath) override;
        bool Save(const std::wstring& FilePath) const override;
        void Destroy();
};

class PSD : public ChronosImage {
    public:
        PSD();
        ~PSD();

        bool Create(int Width, int Height, const Pixel* PixelData);
        void Edit(int X, int Y, Pixel Argb);
        void Draw(HDC Hdc, int X, int Y, int Width, int Height) const;
        bool Load(const std::wstring& FilePath) override;
        bool Save(const std::wstring& FilePath) const override;
        void Destroy();
};

class RAW : public ChronosImage {
    public:
        RAW();
        ~RAW();

        bool Create(int Width, int Height, const Pixel* PixelData);
        void Edit(int X, int Y, Pixel Argb);
        void Draw(HDC Hdc, int X, int Y, int Width, int Height) const;
        bool Load(const std::wstring& FilePath) override;
        bool Save(const std::wstring& FilePath) const override;
        void Destroy();
};

class HEIF : public ChronosImage {
    public:
        HEIF();
        ~HEIF();

        bool Create(int Width, int Height, const Pixel* PixelData);
        void Edit(int X, int Y, Pixel Argb);
        void Draw(HDC Hdc, int X, int Y, int Width, int Height) const;
        bool Load(const std::wstring& FilePath) override;
        bool Save(const std::wstring& FilePath) const override;
        void Destroy();
};

class INDD : public ChronosImage {
    public:
        INDD();
        ~INDD();

        bool Create(int Width, int Height, const Pixel* PixelData);
        void Edit(int X, int Y, Pixel Argb);
        void Draw(HDC Hdc, int X, int Y, int Width, int Height) const;
        bool Load(const std::wstring& FilePath) override;
        bool Save(const std::wstring& FilePath) const override;
        void Destroy();
};

class JPEG2000 : public ChronosImage {
    public:
        JPEG2000();
        ~JPEG2000();

        bool Create(int Width, int Height, const Pixel* PixelData);
        void Edit(int X, int Y, Pixel Argb);
        void Draw(HDC Hdc, int X, int Y, int Width, int Height) const;
        bool Load(const std::wstring& FilePath) override;
        bool Save(const std::wstring& FilePath) const override;
        void Destroy();
};

class SVG : public ChronosImage {
    public:
        SVG();
        ~SVG();

        bool Create(int Width, int Height, const Pixel* PixelData);
        void Edit(int X, int Y, Pixel Argb);
        void Draw(HDC Hdc, int X, int Y, int Width, int Height) const;
        bool Load(const std::wstring& FilePath) override;
        bool Save(const std::wstring& FilePath) const override;
        void Destroy();
};

class AI : public ChronosImage {
    public:
        AI();
        ~AI();

        bool Create(int Width, int Height, const Pixel* PixelData);
        void Edit(int X, int Y, Pixel Argb);
        void Draw(HDC Hdc, int X, int Y, int Width, int Height) const;
        bool Load(const std::wstring& FilePath) override;
        bool Save(const std::wstring& FilePath) const override;
        void Destroy();
};

class EPS : public ChronosImage {
    public:
        EPS();
        ~EPS();

        bool Create(int Width, int Height, const Pixel* PixelData);
        void Edit(int X, int Y, Pixel Argb);
        void Draw(HDC Hdc, int X, int Y, int Width, int Height) const;
        bool Load(const std::wstring& FilePath) override;
        bool Save(const std::wstring& FilePath) const override;
        void Destroy();
};

class PDF : public ChronosImage {
    public:
        PDF();
        ~PDF();

        bool Create(int Width, int Height, const Pixel* PixelData);
        void Edit(int X, int Y, Pixel Argb);
        void Draw(HDC Hdc, int X, int Y, int Width, int Height) const;
        bool Load(const std::wstring& FilePath) override;
        bool Save(const std::wstring& FilePath) const override;
        void Destroy();
};

class GIF : public ChronosImage {
    public:
        GIF();
        ~GIF();

        bool Create(int Width, int Height, const Pixel* PixelData) override;
        void Edit(int X, int Y, Pixel Argb) override;
        void Draw(HDC Hdc, int X, int Y, int Width, int Height) const override;
        bool Load(const std::wstring& FilePath) override;
        bool Save(const std::wstring& FilePath) const override;
        void Destroy() override;

        void FrameSelector(int Frame);
    private:
        int Frame;
};

#endif