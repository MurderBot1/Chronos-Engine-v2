#ifndef Renderer_CPP
#define Renderer_CPP

#include "Renderer.h"

std::vector<ChronosPixel::Pixel> Renderer::UnpackedOutput;
std::vector<DWORD> Renderer::Output;
int Renderer::PixelsX;
int Renderer::PixelsY;
float Renderer::FOV;
std::vector<Vector::Vector3<float>> Renderer::PrecomputedRotation;

void Renderer::Render() {
    PackChronosPixels(
        RenderPixels()
    );
}

std::vector<ChronosPixel::Pixel> Renderer::RenderPixels() {
    // Lock the game mutex
    std::lock_guard<std::mutex> Lock(Game::Game_MX);

    // Recompute the precomputed rotation if needed (implementation of "if needed" is inside the recomputation function)
    RecalculatePrecomputedRotation();

    // Get window size
    int TotalPixels = PixelsX * PixelsY;

    // Get the Triangles location
    std::vector<Triangle> TriangleInput;
    for(const std::weak_ptr<Object>& WeakObj : Game::GetLoadedObjects_NOLOCK()) {
        if (auto Obj = WeakObj.lock()) {
            for(const Triangle& Tri : Obj->Triangles) {
                Triangle TempTri = Tri;

                // Scale the object to its size
                TempTri.Points.X = Tri.Points.X * Obj->GetScale();
                TempTri.Points.Y = Tri.Points.Y * Obj->GetScale();
                TempTri.Points.Z = Tri.Points.Z * Obj->GetScale();

                // Rotate the points of the triangle
                TempTri.RotateX(Obj->GetRotation().X());
                TempTri.RotateY(Obj->GetRotation().Y());
                TempTri.RotateZ(Obj->GetRotation().Z());

                // Update with the new location
                TempTri.Points.X += Obj->GetLocation();
                TempTri.Points.Y += Obj->GetLocation();
                TempTri.Points.Z += Obj->GetLocation();

                // Add color data and return
                TempTri.TriangleTexture = Tri.TriangleTexture;

                // Temp Var For Dev
                TempTri.Color = Tri.Color;

                // Return the triangle
                TriangleInput.emplace_back(TempTri);
            }
        }
    }
    
    std::vector<ChronosPixel::Pixel> Output;
    Output.reserve(TotalPixels);

    // Get the pixel colors (CP = Current Pixel)
    for(int CP = 0; CP < TotalPixels; CP++) {
        UnpackedOutput.emplace_back(RenderPixel(CP, TriangleInput));
    }

    return Output;
}

/// @param PIWID The Pixel in the rotation array (Pixel In Window ID)
ChronosPixel::Pixel Renderer::RenderPixel(int PIWID, const std::vector<Triangle> &Triangles) {
    // Add it to the triangles list
    for(Triangle Tri : Triangles) {
        if(Tri.Intersect(CurrentCameraLocation_NOLOCK, PrecomputedRotation[PIWID])) {
            return Tri.Color;
        }
    }
    
    return {0, 0, 0, 0};
}

void Renderer::RecalculatePrecomputedRotation() {
    // See if the Precomputed rotation needs to be recomputed 
    // Get new pixel width
    #define TempPixelsX WindowManager::GameWindow.GetScreenX()
    #define TempPixelsY WindowManager::GameWindow.GetScreenY()
    #define TempFOV Settings::FOV

    // (RPR = Recompute Precomputed Rotation)
    bool RPR = false;
    if(TempPixelsX != PixelsX) {RPR = true;}
    if(TempPixelsY != PixelsY) {RPR = true;}
    if(TempFOV != FOV) {RPR = true;}

    // Check if it is needed
    if(!RPR) {return;} else {
        // Set the new FOV for next frame if it is
        FOV = TempFOV;
        PixelsX = TempPixelsX;
        PixelsY = TempPixelsY;
    }

    #undef TempPixelsX
    #undef TempPixelsY
    #undef TempFOV

    // Recompute
    std::vector<Vector::Vector3<float>> RayDirection; // Derection of the rays
    RayDirection.reserve(PixelsX * PixelsY);
    
    // Find derection of rays
    const double IncX = (160 * FOV) / (PixelsX - 1);
	const double IncY = (100 * FOV) / (PixelsY - 1);

	const double ForLoopMaxX = (80 * FOV); // Find max X
	const double ForLoopMaxY = (50 * FOV); // Find max y
	
	const double SIN = sin(CurrentCameraLocation_NOLOCK.Z()); // Find the sin
	const double COS = cos(CurrentCameraLocation_NOLOCK.Z()); // Find the cos

    for (double PixelYDirection = (-50 * FOV); PixelYDirection < ForLoopMaxY; PixelYDirection += IncY) { // Get y
		for (double PixelXDirection = (-80 * FOV); PixelXDirection < ForLoopMaxX; PixelXDirection += IncX) { // Get x
			// Rotate for Z
            const double AddZX = PixelXDirection * COS - PixelYDirection * SIN;
            const double AddZY = PixelXDirection * SIN + PixelYDirection * COS;

            // Rotate to camera
            const double AddCameraX = AddZX + CurrentCameraLocation_NOLOCK.Y();
            const double AddCameraY = AddZY + CurrentCameraLocation_NOLOCK.X();
            
            // Compute slopes
            const double SlopeX = tan(AddCameraX);
            const double SlopeY = tan(AddCameraY);

            // Create unnormalized vector
            #define UnnormalizedX 1
            #define UnnormalizedY SlopeX
            #define UnnormalizedZ SlopeY

            // Compute normalization factor
            const double Magnitude = std::sqrt(UnnormalizedX * UnnormalizedX + UnnormalizedY * UnnormalizedY + UnnormalizedZ * UnnormalizedZ);
            const double Normalize = 1.0f / Magnitude;
            
            // Output
            RayDirection.emplace_back(UnnormalizedX * Normalize, UnnormalizedY * Normalize, UnnormalizedZ * Normalize); // Add Normalized vector to output

            #undef UnnormalizedX
            #undef UnnormalizedY
            #undef UnnormalizedZ
		}
	}

    PrecomputedRotation = std::move(RayDirection);
}


#ifdef Windows
    void Renderer::PackChronosPixels(const std::vector<ChronosPixel::Pixel> &Data) {
        std::vector<DWORD> Out;
        Out.reserve(PixelsX * PixelsY);

        for (const auto& Pixel : Data) {
            DWORD Color = static_cast<DWORD>(Pixel.Color.R | (Pixel.Color.G << 8) | (Pixel.Color.B << 16) | (Pixel.Brightness.Level << 24));
            Out.emplace_back(Color);
        }

        Output = std::move(Out);
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