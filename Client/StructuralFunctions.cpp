// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef StructuralFunctions_CPP
#define StructuralFunctions_CPP

// Include the C++'s .h file
#include "StructuralFunctions.h"

// Variable redefinitions


// Definitions
void TODO() {
    std::cout << "TODO : Finish function \"VideoRendering::RenderingOutput VideoRendering::CombineRayColors(VideoRendering::RenderingOutput *ThisRay, VideoRendering::RenderingOutput *ReflectionRay, VideoRendering::RenderingOutput *TransperencyRay)\" in Rendering.cpp\n";
    std::cout << "TODO : Create function to run the keyboard functions on a seperate thread\n";
    std::cout << "TODO : Write function \"bool VideoRendering::RayIntersectsTriangle(Vector::Vector3_f TL1, Vector::Vector3_f TL2, Vector::Vector3_f TL3, Vector::Vector3_f Start, Vector::Vector3_f Direction)\" in Rendering.cpp\n";
    std::cout << "TODO : Write function \"float VideoRendering::ApplyRotaitonToLocation(float Value, Object *Obj)\" in Rendering.cpp\n";
    std::cout << "TODO : Write function \"Triangle* VideoRendering::FindHitTriangle(std::vector<Triangle*>& TriList)\" in Rendering.cpp\n";
    std::cout << "TODO : Write function \"VideoRendering::RenderingOutput VideoRendering::RetriveTriangleColorData(Triangle* Tri)\" in Rendering.cpp\n";
    std::cout << "TODO : Write function \"Vector::Vector3_f VideoRendering::FindNewReflectionDirection(Vector::Vector3_f Start, Vector::Vector3_f Direction, Triangle *TrianglePtr)\" in Rendering.cpp\n";
    std::cout << "TODO : Write function \"std::vector<Vector::Vector3_f> VideoRendering::RayDirection()\" in Rendering.cpp\n";
    std::cout << "TODO : Write function \"std::vector<std::vector<VideoRendering::RenderingOutput>> VideoRendering::RenderTheScene()\" in Rendering.cpp\n";
}

void StartFunction() {
    Time::FillValuesForLoading();
    Log::SetupLog(CurrentPath.string() + "\\Settings\\Logs\\LogSettings.txt");
    Settings::LoadSettings(CurrentPath.string() + "\\Settings\\PathOfSettingsFiles.txt");
}

void LoopFunction() {
    Time::ComupteDeltaTime();
    LimitedFunction::ResetAllLimitedFunctions();
    Keyboard::CallAllKeyboardFunctionsIfKeyIsPressed();
    Log::UpdateCounters();
    Log::OutputDataToFile();
    Time::Sleep();
}

#endif