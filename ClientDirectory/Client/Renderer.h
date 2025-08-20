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
        static void RenderPixels();
        static ChronosPixel::Pixel RenderPixel(int PIWID);
        static void RecalculatePrecomputedRotation();
        static void PackChronosPixels();

        static int GetPixelsX();
        static int GetPixelsY();
    public:
        static std::vector<ChronosPixel::Pixel> UnpackedOutput;
        #ifdef Windows
            static std::vector<DWORD> Output;
        #elif Linux
        #elif Mac
        #else
        #endif
    private:
        static int PixelsX, PixelsY;
        static float FOV;
        static std::vector<Vector::Vector3<float>> PrecomputedRotation;
};

#endif