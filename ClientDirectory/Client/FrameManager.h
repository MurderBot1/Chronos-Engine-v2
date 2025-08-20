#ifndef FrameManager_H
#define FrameManager_H

#include <mutex>
#include <array>

#include "Image.h"
#include "Window.h"
#include "Renderer.h"

class FrameManager {
    public:
        static void DisplayImages();

        static ChronosImage DisplayImage;
        static ChronosImage RenderImage;

        static std::mutex DisplayImage_MX;
        static std::mutex RenderImage_MX;
};

#endif