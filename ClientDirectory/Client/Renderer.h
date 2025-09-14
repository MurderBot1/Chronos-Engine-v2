#ifndef Renderer_H
#define Renderer_H

#include <vector>
#include <functional>
#include <array>

#include "Constants.h"
#include "Window.h"
#include "Settings.h"
#include "Vector.h"
#include "Log.h"

class Renderer {
    public:
        static void Render();
        static std::vector<ChronosPixel::Pixel> RenderPixels();
        static ChronosPixel::Pixel RenderPixel(int PIWID, const std::vector<Triangle> &Triangles);
        static void RecalculatePrecomputedRotation();
        static void PackChronosPixels(const std::vector<ChronosPixel::Pixel> &Data);
        
        static int GetPixelsX();
        static int GetPixelsY();
    public:
        static std::vector<ChronosPixel::Pixel> UnpackedOutput;
        #ifdef Windows
            static std::vector<DWORD> Output;
        #elif Linux
            static std::vector<> Output
        #elif Mac
            static std::vector<> Output
        #else
        #endif
    private:
        static int PixelsX, PixelsY;
        static float FOV;
        static std::vector<Vector::Vector3<float>> PrecomputedRotation;
};

#endif