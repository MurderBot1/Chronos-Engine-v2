// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Rendering_CPP
#define Rendering_CPP

// Include the C++'s .h file
#include "Rendering.h"

// Variable redefinitions


// Definitions
bool VideoRendering::RayIntersectsTriangle(Vector::Vector3_f TL1, Vector::Vector3_f TL2, Vector::Vector3_f TL3, Vector::Vector3_f Start, Vector::Vector3_f Direction) {

}

float VideoRendering::ApplyRotaitonToLocation(float Value, Object *Obj) {
    return 0.0f;
}

bool VideoRendering::CouldObjectBeHit(Object* Obj, Vector::Vector3_f Start, Vector::Vector3_f Direction) {
    // Caluclate 1/2 scale
    // Get half of the X, Y, and Z scale for finding the triangle attachment points
    const float XScale = Obj->Scale.X / 2;
    const float YScale = Obj->Scale.Y / 2;
    const float ZScale = Obj->Scale.Z / 2;

    // Calulate the location + and - the location
    // Find the location of the triangle attachment points using the objects scale and rotation (This does not have any rotation added)
    const float NRXPLocation = XScale + Obj->Location.X;
    const float NRYPLocation = YScale + Obj->Location.Y;
    const float NRZPLocation = ZScale + Obj->Location.Z;
    const float NRXMLocation = XScale - Obj->Location.X;
    const float NRYMLocation = YScale - Obj->Location.Y;
    const float NRZMLocation = ZScale - Obj->Location.Z;

    // Include the rotation of the location
    // Apply rotation to the prerotation location to get the location of checking points
    const float XPLocation = VideoRendering::ApplyRotaitonToLocation(NRXPLocation, Obj);
    const float YPLocation = VideoRendering::ApplyRotaitonToLocation(NRYPLocation, Obj);
    const float ZPLocation = VideoRendering::ApplyRotaitonToLocation(NRZPLocation, Obj);
    const float XMLocation = VideoRendering::ApplyRotaitonToLocation(NRXMLocation, Obj);
    const float YMLocation = VideoRendering::ApplyRotaitonToLocation(NRYMLocation, Obj);
    const float ZMLocation = VideoRendering::ApplyRotaitonToLocation(NRZMLocation, Obj);
    
    // Get the points by combining the positive and negitive floats
    const Vector::Vector3_f PointA = { XPLocation, YPLocation, ZPLocation };
    const Vector::Vector3_f PointB = { XPLocation, YPLocation, ZMLocation };
    const Vector::Vector3_f PointC = { XPLocation, YMLocation, ZPLocation };
    const Vector::Vector3_f PointD = { XPLocation, YMLocation, ZMLocation };
    const Vector::Vector3_f PointE = { XMLocation, YPLocation, ZPLocation };
    const Vector::Vector3_f PointF = { XMLocation, YPLocation, ZMLocation };
    const Vector::Vector3_f PointG = { XMLocation, YMLocation, ZPLocation };
    const Vector::Vector3_f PointH = { XMLocation, YMLocation, ZMLocation };

    // See if the ray passes through the box
    // Detect if the ray goes through the triangles
    if(RayIntersectsTriangle(PointB, PointA, PointC, Start, Direction)) { return true ; }
    if(RayIntersectsTriangle(PointB, PointD, PointC, Start, Direction)) { return true ; }
    if(RayIntersectsTriangle(PointB, PointF, PointH, Start, Direction)) { return true ; }
    if(RayIntersectsTriangle(PointB, PointD, PointH, Start, Direction)) { return true ; }
    if(RayIntersectsTriangle(PointA, PointE, PointF, Start, Direction)) { return true ; }
    if(RayIntersectsTriangle(PointA, PointB, PointF, Start, Direction)) { return true ; }
    if(RayIntersectsTriangle(PointC, PointA, PointE, Start, Direction)) { return true ; }
    if(RayIntersectsTriangle(PointC, PointG, PointE, Start, Direction)) { return true ; }
    if(RayIntersectsTriangle(PointH, PointF, PointE, Start, Direction)) { return true ; }
    if(RayIntersectsTriangle(PointH, PointG, PointE, Start, Direction)) { return true ; }
    if(RayIntersectsTriangle(PointD, PointC, PointG, Start, Direction)) { return true ; }
    if(RayIntersectsTriangle(PointD, PointH, PointG, Start, Direction)) { return true ; }
}


std::vector<Triangle*> VideoRendering::ListPossableObjects(Vector::Vector3_f Start, Vector::Vector3_f Direction) {
    // Create rough return list of the hit objects
    std::vector<Triangle*> RoughReturn;

    for(Object *Obj : Object::ObjectList) {
        if(VideoRendering::CouldObjectBeHit(Obj, Start, Direction)) {
            RoughReturn.reserve(Obj->Triangle.size() + RoughReturn.capacity());
            for(Triangle Tri : Obj->Triangle) {
                RoughReturn.emplace_back(&Tri);
            }
        }
    }

    // See which objects are hit
    std::vector<Triangle*> Return; // Add the capacity of the last to assign a max

    // Detect if any triangles are hit and then add them to the list
    for(Triangle *Tri : RoughReturn) {
        if(RayIntersectsTriangle(Tri->VectorCoordinates[0], Tri->VectorCoordinates[1], Tri->VectorCoordinates[2], Start, Direction)) {
            // Add the triangle to the output list
            Return.emplace_back(Tri);
        }
    }

    // Return the list
    return Return;
}


Triangle* VideoRendering::FindHitTriangle(std::vector<Triangle*>& TriList) {
    
}


VideoRendering::RenderingOutput VideoRendering::RetriveTriangleColorData(Triangle* Tri) {

}

Vector::Vector3_f VideoRendering::FindNewReflectionDirection(Vector::Vector3_f Start, Vector::Vector3_f Direction, Triangle *TrianglePtr) {

}

VideoRendering::RenderingOutput VideoRendering::CombineRayColors(VideoRendering::RenderingOutput *ThisRay, VideoRendering::RenderingOutput *ReflectionRay, VideoRendering::RenderingOutput *TransperencyRay) {
    /* This is not tested */
    VideoRendering::RenderingOutput Return;

    // Decode AA
    uint8_t DecodedAA = Settings::DecodeAA(Settings::AntiAllasing); 

    // Calculate the percentage of each color
    uint16_t FractionalSums = ThisRay->RefColor + ThisRay->TransColor + ThisRay->ThisColor;
    float RefPercentage = ThisRay->RefColor / FractionalSums;
    float TransPercentage = ThisRay->TransColor / FractionalSums;
    float ThisPercentage = ThisRay->ThisColor / FractionalSums;

    // Calculate the displayed color

    
    return Return;
}

VideoRendering::RenderingOutput VideoRendering::RenderPixel(int Bounces, Vector::Vector3_f Start, Vector::Vector3_f Direction) {
    std::vector<Triangle*> TriList = VideoRendering::ListPossableObjects(Start, Direction);
    Triangle* Tri = VideoRendering::FindHitTriangle(TriList);
    VideoRendering::RenderingOutput HitTrianglesData = VideoRendering::RetriveTriangleColorData(Tri); 
    Vector::Vector3_f NewDirection = VideoRendering::FindNewReflectionDirection(Start, Direction, HitTrianglesData.TrianglePtr);

    if(Bounces <= 0) { return HitTrianglesData; }
    
    // Find the data of the reflection triangle
    VideoRendering::RenderingOutput ReflectionData = VideoRendering::RenderPixel(Bounces--, HitTrianglesData.HitLocation, NewDirection);

    // Find the data of the triangle behind it
    VideoRendering::RenderingOutput TransparentData = VideoRendering::RenderPixel(Bounces--, HitTrianglesData.HitLocation, Direction);

    VideoRendering::RenderingOutput Return;
    Return = VideoRendering::CombineRayColors(&HitTrianglesData, &ReflectionData, &TransparentData);    
    return Return;
}

std::vector<Vector::Vector3_f> VideoRendering::RayDirection() {
    
}

std::vector<std::vector<VideoRendering::RenderingOutput>> VideoRendering::RenderTheScene() {

}

#endif