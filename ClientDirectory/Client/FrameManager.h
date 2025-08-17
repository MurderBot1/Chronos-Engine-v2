#ifndef FrameManager_H
#define FrameManager_H

#include <mutex>
#include <array>

#include "Image.h"
#include "Window.h"

class FrameManager {
    public:
        static void SwapAndDisplayImages();

        static ChronosImage DisplayImage;
        static ChronosImage RenderImage;

        static std::mutex DisplayImage_MX;
        static std::mutex RenderImage_MX;
};

#endif