#ifndef Renderer_CPP
#define Renderer_CPP

#include "Renderer.h"

std::vector<ChronosPixel::Pixel> Renderer::UnpackedOutput;
std::vector<DWORD> Renderer::Output;
int Renderer::PixelsX;
int Renderer::PixelsY;
float Renderer::FOV;
std::vector<std::array<float, 2>> Renderer::PrecomputedRotation;

void Renderer::Render() {
    RenderPixels();
    PackChronosPixels();
}

void Renderer::RenderPixels() {
    // Recompute the precomputed rotation if needed (implementation of "if needed" is inside the recomputation function)
    RecalculatePrecomputedRotation();

    // Get window size
    int TotalPixels = PixelsX * PixelsY;
    
    // Clear and resize the return vector
    UnpackedOutput.clear();
    UnpackedOutput.reserve(TotalPixels);

    // Get the pixel colors (CP = Current Pixel)
    for(int CP = 0; CP < TotalPixels; CP++) {
        UnpackedOutput.emplace_back(RenderPixel(CP));
    }
}

/// @param PIWID The Pixel in the rotation array (Pixel In Window ID)
ChronosPixel::Pixel Renderer::RenderPixel(int PIWID) {
    (void)PIWID;
    ChronosPixel::Pixel Return;
    Return.Color = {0, 0, 0};
    return Return;
}

void Renderer::RecalculatePrecomputedRotation() {
    // See if the Precomputed rotation needs to be recomputed 
    // Get new pixel width
    int TempPixelsX = WindowManager::GameWindow.GetScreenX();
    int TempPixelsY = WindowManager::GameWindow.GetScreenY();
    float TempFOV = Settings::FOV;

    // (RPR = Recompute Precomputed Rotation)
    bool RPR = false;
    if(TempPixelsX != PixelsX) {RPR = true;}
    if(TempPixelsY != PixelsY) {RPR = true;}
    if(TempFOV != FOV) {RPR = true;}
    
    // Set the new FOV for next frame
    FOV = TempFOV;
    PixelsX = TempPixelsX;
    PixelsY = TempPixelsY;

    // Check if it is needed
    if(!RPR) {return;}

    // Recompute

}


#ifdef Windows
    void Renderer::PackChronosPixels() {
        int TotalPixels = PixelsX * PixelsY;
        Output.clear();
        Output.reserve(TotalPixels);

        for (const auto& Pixel : UnpackedOutput) {
            const auto& RGB = Pixel.Color;
            DWORD Color = static_cast<DWORD>(RGB.R | (RGB.G << 8) | (RGB.B << 16));
            Output.emplace_back(Color);
        }
    }
#elif Linux
#elif Mac
#else
#endif

int Renderer::GetPixelsX() {
    return PixelsX;
}

int Renderer::GetPixelsY() {
    return PixelsY;
}

#endif