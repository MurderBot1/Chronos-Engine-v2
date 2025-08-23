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
    UnpackedOutput.resize(TotalPixels, ChronosPixel::Pixel());

    // Get the pixel colors (CP = Current Pixel)
    for(int CP = 0; CP < TotalPixels; CP++) {
        UnpackedOutput[CP] = RenderPixel(CP);
    }
}

/// @param PIWID The Pixel in the rotation array (Pixel In Window ID)
ChronosPixel::Pixel Renderer::RenderPixel(int PIWID) {
    // Get all weak ptrs to the objects
    const std::vector<std::weak_ptr<Object>> LoadedObjectsWeak = Game::GetLoadedObjects();

    // Turn weak ptrs in to shared ptrs
    std::vector<std::shared_ptr<Object>> LoadedObjects;
    LoadedObjects.reserve(LoadedObjectsWeak.size());
    for(std::weak_ptr WeakObj : LoadedObjectsWeak) {
        LoadedObjects.emplace_back(WeakObj.lock());
    }

    // Turn the shared ptrs in to the actual triangles which get rendered
    std::vector<Triangle> TrianglesInScene;
    for(std::shared_ptr<Object> Obj : LoadedObjects) {
        for(Triangle Tri : Obj->Triangles) {
            Triangle TempTri = Triangle();
            // Set the triangles next to eachother
            TempTri.Points = Tri.Points;

            // Rotate the points of the triangle
            TempTri.RotateX(Obj->GetRotation().X());
            TempTri.RotateY(Obj->GetRotation().Y());
            TempTri.RotateZ(Obj->GetRotation().Z());

            // Update with the new location
            TempTri.Points.X += Obj->GetLocation();
            TempTri.Points.Y += Obj->GetLocation();
            TempTri.Points.Z += Obj->GetLocation();
            TrianglesInScene.push_back(TempTri);
        }
    }

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
    std::vector<Vector::Vector3<float>> RayDirection; // Derection of the rays
    RayDirection.reserve(PixelsX * PixelsY);
    
    // Find derection of rays
    const double IncX = (160 * FOV) / (PixelsX - 1);
	const double IncY = (100 * FOV) / (PixelsY - 1);

	const double ForLoopMaxX = (80 * FOV); // Find max X
	const double ForLoopMaxY = (50 * FOV); // Find max y
	
	const double SIN = sin(Game::GetCurrentCamera()->GetLocation().Z()); // Find the sin
	const double COS = cos(Game::GetCurrentCamera()->GetLocation().Z()); // Find the cos

    for (double PixelYDirection = (-50 * FOV); PixelYDirection < ForLoopMaxY; PixelYDirection += IncY) { // Get y
		for (double PixelXDirection = (-80 * FOV); PixelXDirection < ForLoopMaxX; PixelXDirection += IncX) { // Get x
			// Rotate for Z
            const double AddZX = PixelXDirection * COS - PixelYDirection * SIN;
            const double AddZY = PixelXDirection * SIN + PixelYDirection * COS;

            // Rotate to camera
            const double AddCameraX = AddZX + Game::GetCurrentCamera()->GetLocation().Y();
            const double AddCameraY = AddZY + Game::GetCurrentCamera()->GetLocation().X();
            
            // Compute slopes
            const double SlopeX = tan(AddCameraX);
            const double SlopeY = tan(AddCameraY);

            // Create unnormalized vector
            const double UnnormalizedX = 1;
            const double UnnormalizedY = SlopeX;
            const double UnnormalizedZ = SlopeY;

            // Compute normalization factor
            const double Magnitude = std::sqrt(UnnormalizedX * UnnormalizedX + UnnormalizedY * UnnormalizedY + UnnormalizedZ * UnnormalizedZ);
            const double Normalize = 1.0f / Magnitude;
            
            // Output
            RayDirection.emplace_back(UnnormalizedX * Normalize, UnnormalizedY * Normalize, UnnormalizedZ * Normalize); // Add Normalized vector to output
		}
	}

    for (Vector::Vector3<float> Dir : RayDirection){
        Log::AddInfoLog(std::to_string(Dir.X()) + " " + std::to_string(Dir.Y()) + " " + std::to_string(Dir.Z()) + " ");
    }
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