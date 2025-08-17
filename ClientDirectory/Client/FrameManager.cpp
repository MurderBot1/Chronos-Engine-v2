#ifndef FrameManager_CPP
#define FrameManager_CPP

#include "FrameManager.h"

ChronosImage FrameManager::DisplayImage;
ChronosImage FrameManager::RenderImage;
std::mutex FrameManager::DisplayImage_MX;
std::mutex FrameManager::RenderImage_MX;

void FrameManager::SwapAndDisplayImages() {
    // Lock mutex
    std::lock_guard<std::mutex> LockRenderImage(RenderImage_MX);
    std::lock_guard<std::mutex> LockDisplayImage(DisplayImage_MX);

    // Swap Images
    DisplayImage = RenderImage;
    RenderImage = ChronosImage();
    Pixel Pix[480000];
    for (size_t i = 0; i < 480000; i++)
    {
        Pix[i] = 0xFFFF0000;
    }
    RenderImage.Create(800, 600, Pix);
    
    InvalidateRect(WindowManager::GameWindow.hwnd, nullptr, FALSE);
}

#endif