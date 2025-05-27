// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Window_H
#define Window_H

// C++ imported files
#include <array>
#include <vector>

// Include OS window libs
#ifdef _WIN32
    #include <windows.h>
#elif __linux__
#elif __APPLE__
    #include "TargetConditionals.h"
    #if TARGET_OS_MAC
    #elif TARGET_OS_IPHONE
    #endif
#elif __ANDROID__
#else
#endif

// Program imported files
#include "Constants.h"
#include "Settings.h"

// Definitions
class ChronosEngineWindow {
    public:
        static void CalculateWindow();

        // Getters
        static bool GetWindowIsFullscreen();
        static bool GetWindowIsMinimized();
        static bool GetWindowChanged();
        static std::array<int, 2> GetAspectRatio();
        static std::array<int, 2> GetPixelLengths();
        static std::vector<ChronosPixel::Pixel> GetOutputBuffer();

        // Setters
        static void SetWindowIsFullscreen(bool Value); // Don't use this command unless very certain about what you want to do
        static void SetWindowIsMinimized(bool Value); // Don't use this command unless very certain about what you want to do
        static void SetWindowChanged(bool Value); // Don't use this command unless very certain about what you want to do
        static void SetAspectRatio(std::array<int, 2> PixelLengths); // Don't use this command unless very certain about what you want to do
        static void SetPixelLengths(std::array<int, 2> PixelLengths); // Don't use this command unless very certain about what you want to do
        static void SetOutputBuffer(std::vector<ChronosPixel::Pixel> Buffer); // Don't use this command unless very certain about what you want to do
    private:
        static void UpdateOutputVector(int Size);
        static bool WindowIsFullscreen;
        static bool WindowIsMinimized;
        static bool WindowChanged;
        static std::array<int, 2> AspectRatio;
        static std::array<int, 2> PixelLengths;
        static std::vector<ChronosPixel::Pixel> OutputBuffer;
};

class RendererWindowInfo {
    public:
        static void UpdateInfo();
        static void UpdateRayDirections();
        static void RectangleCreator(std::array<float, 12> &RectangleVertexs, std::array<int, 2> ScreenAspectRatio, std::array<float, 3> CameraLocation);
        static void RectangleRotator(std::array<float, 12> &RectangleVertexs, std::array<float, 3> RotationValues);
    private:
        static std::vector<RendererInfo::Direction> RayDirections;
};

#endif