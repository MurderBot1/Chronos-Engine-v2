#ifndef FrameManager_H
#define FrameManager_H

#include <mutex>

#include "Image.h"

class FrameManager {
    public:
        static void SwapAndDisplayImages();
    private:
        static ChronosImage DisplayImage;
        static ChronosImage RenderImage;

        static std::mutex DisplayImage_MX;
        static std::mutex RenderImage_MX;
};

#endif