// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Window_CPP
#define Window_CPP

// Include the C++'s .h file
#include "Window.h"

// Variable redefinitions
// ChronosEngineWindow
bool ChronosEngineWindow::WindowIsFullscreen;
bool ChronosEngineWindow::WindowIsMinimized;
bool ChronosEngineWindow::WindowChanged;
std::array<int, 2> ChronosEngineWindow::AspectRatio;
std::array<int, 2> ChronosEngineWindow::PixelLengths;
std::vector<ChronosPixel::Pixel> ChronosEngineWindow::OutputBuffer;
// RendererWindowInfo
std::vector<RendererInfo::Direction> RendererWindowInfo::RayDirections;

// Definitions
void ChronosEngineWindow::CalculateWindow() {
    // Check if the window has changed if not exit
    if(!ChronosEngineWindow::WindowChanged) {
        return;
    }

    // Check if the window is full screen
    if(ChronosEngineWindow::WindowIsFullscreen) {
        ChronosEngineWindow::UpdateOutputVector(
            Settings::ResolutionX * 
            Settings::ResolutionY 
        );
        return;
    }

    if(ChronosEngineWindow::WindowIsMinimized) {
        ChronosEngineWindow::UpdateOutputVector(0);
        return;
    }

    // Reserve new amount of memory after clearing data
    ChronosEngineWindow::UpdateOutputVector(
        ChronosEngineWindow::PixelLengths[0] *
        ChronosEngineWindow::PixelLengths[1]
    );

    // 
}

void ChronosEngineWindow::UpdateOutputVector(int Size) {
    ChronosEngineWindow::OutputBuffer.clear();
    ChronosEngineWindow::OutputBuffer.reserve(Size);
    RendererWindowInfo::UpdateInfo();
}

void RendererWindowInfo::UpdateInfo() {
    RendererWindowInfo::UpdateRayDirections();
}

void RendererWindowInfo::UpdateRayDirections() {
    // Crete temp variables
    auto ScreenPixelSize = ChronosEngineWindow::GetPixelLengths();
    auto ScreenAspectRatio = ChronosEngineWindow::GetAspectRatio();
    std::vector<RendererInfo::Direction> TempDirections;
    std::array<float, 12> RectangleVertexs; // 3 for each point in 3d space
    std::array<float, 3> CameraLocation;
    std::array<float, 3> CameraRoatation;

    // Create rectangle
    RendererWindowInfo::RectangleCreator(
        RectangleVertexs, 
        ScreenAspectRatio,
        CameraLocation
    );
    
    // Rotate rectangle
    RendererWindowInfo::RectangleRotator(
        RectangleVertexs, 
        CameraRoatation
    );

    // Find the slope to get the increment


    // Find the points on the rectangle
    
    
    // Convert in to slope
    
    
    // Resize and clear vector
    RendererWindowInfo::RayDirections.clear();
    RendererWindowInfo::RayDirections.resize(ScreenPixelSize[0] * ScreenPixelSize[1]);

    // Return the points
    RendererWindowInfo::RayDirections = TempDirections;
}

void RendererWindowInfo::RectangleCreator(std::array<float, 12> &RectangleVertexs, std::array<int, 2> ScreenAspectRatio, std::array<float, 3> CameraLocation) {
    /* CREATE RECTANGLE 
        The numbers that I decided on for LengthOfOpposite and HightOfOpposite is based on these measurements
        When I could see the edges of a 32 inch wide door while not moving my eyes I was 2.5 inches away
        LengthOfOpposite : 
            The default FOV is 100 and we only want one half of the opposite
            This lead me to the equation (100 / ? = 16)
            And the calculation is FOV / 6.25 = (opposite) / 2 
        HightOfOpposite : 
            The moniters aspect ratio is used to find HightOfOpposite
            We can get the LengthOfOpposite with the equation above
            With that we devide by the length and then multiply by the hight
            This gets us the scaled to the moniter result
        RectangleVertexs : 
            1---------------2
            |               |
            |       C       |
            |               |
            3---------------4
            C = Camera
            1 = (x, y, z) = (+, +, -) = (+2.5, +HightOfOpposite, -LengthOfOpposite)
            2 = (x, y, z) = (+, +, +) = (+2.5, +HightOfOpposite, +LengthOfOpposite)
            3 = (x, y, z) = (+, -, -) = (+2.5, -HightOfOpposite, -LengthOfOpposite)
            4 = (x, y, z) = (+, -, +) = (+2.5, -HightOfOpposite, +LengthOfOpposite)
    */
    float LengthOfOpposite = Settings::FOV / 6.25f; 
    float HightOfOpposite = LengthOfOpposite / ScreenAspectRatio[0] * ScreenAspectRatio[1]; 
    RectangleVertexs = {
        // Vertex 1
        CameraLocation[0] + 2.5f,
        CameraLocation[2] + HightOfOpposite,
        CameraLocation[1] - LengthOfOpposite,
        // Vertex 2
        CameraLocation[0] + 2.5f,
        CameraLocation[2] + HightOfOpposite,
        CameraLocation[1] + LengthOfOpposite,
        // Vertex 3
        CameraLocation[0] + 2.5f,
        CameraLocation[2] - HightOfOpposite,
        CameraLocation[1] - LengthOfOpposite,
        // Vertex 4
        CameraLocation[0] + 2.5f,
        CameraLocation[2] - HightOfOpposite,
        CameraLocation[1] + LengthOfOpposite
    };
}

void RendererWindowInfo::RectangleRotator(std::array<float, 12> &RectangleVertexs, std::array<float, 3> RotationValues) {
    /* ROTATE RECTANGLE
        Info about directions :
            For all objects with 0 rotation on the X, Y, and Z axies means that the object is 
                Facing north "(1, 0, 0) is the direction of north"
                Straight forward
            For all objects with 0 rotation on the Y, and Z axies and 90 on the x means that the object is 
                Facing east "(0, 1, 0) is the direction of east"
                Straight forward
            For all objects with 0 rotation on the Y, and Z axies and 180 on the x means that the object is 
                Facing south "(-1, 0, 0) is the direction of south"
                Straight forward
            For all objects with 0 rotation on the Y, and Z axies and 270 on the x means that the object is 
                Facing west "(0, -1, 0) is the direction of west"
                Straight forward
            For all objects with 0 rotation on the X, and Z axies with 90 on the Y means that the object is 
                Facing up "(0, 1, 0) is the direction of up"
                Straight forward
            For all objects with 0 rotation on the X, and Z axies with 180 on the Y means that the object is 
                Facing south "(-1, 0, 0) is the direction of south"
                Upside down
            For all objects with 0 rotation on the X, and Z axies with 270 on the Y means that the object is 
                Facing down "(0, -1, 0) is the direction of down"
                Straight forward
            For all objects with 0 rotation on the X, and Y axies with 90 on the Z means that the object is 
                Facing north "(1, 0, 0) is the direction of north"
                Straight forward but rotated 90 to the right
            For all objects with 0 rotation on the X, and Y axies with 180 on the Z means that the object is 
                Facing north "(1, 0, 0) is the direction of north"
                Upside down
            For all objects with 0 rotation on the X, and Y axies with 270 on the Z means that the object is 
                Facing north "(1, 0, 0) is the direction of north"
                Straight forward but 90 degrees to the left
        Equations and math : 
            
    */
}

#endif