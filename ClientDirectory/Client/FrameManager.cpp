#ifndef FrameManager_CPP
#define FrameManager_CPP

#include "FrameManager.h"

ChronosImage FrameManager::DisplayImage;
ChronosImage FrameManager::RenderImage;
std::mutex FrameManager::DisplayImage_MX;
std::mutex FrameManager::RenderImage_MX;

void FrameManager::DisplayImages() {
    // Lock mutex
    std::lock_guard<std::mutex> LockRenderImage(RenderImage_MX);
    std::lock_guard<std::mutex> LockDisplayImage(DisplayImage_MX);

    // Swap Images
    DisplayImage = RenderImage;
    RenderImage = ChronosImage();
    RenderImage.Create(Renderer::GetPixelsX(), Renderer::GetPixelsY(), Renderer::Output.data());
    
    InvalidateRect(WindowManager::GameWindow.hwnd, nullptr, FALSE);
}

#endif