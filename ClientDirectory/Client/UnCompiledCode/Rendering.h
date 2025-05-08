// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef RenderingClass_H
#define RenderingClass_H

// C++ imported files
#include <vector>
#include <array>
#include <cmath>

// Program imported files
#include "Object.h"
#include "Triangles.h"
#include "VariableTypes.h"
#include "Settings.h"
#include "Texture.h"

// Definitions
class VideoRendering {
    public:
        struct RenderingOutput {
            Triangle* TrianglePtr;
            Vector::Vector3_f HitLocation;
            Vector::Vector2_f TextureHitLocation;
            Texture* ReturnTexture;
            uint8_t R, G, B;
            uint8_t RefColor, TransColor, ThisColor; // Ref = Reflection, Trans = Transperency, This = This 
        };
        static bool RayIntersectsTriangle(Vector::Vector3_f TL1, Vector::Vector3_f TL2, Vector::Vector3_f TL3, Vector::Vector3_f Start, Vector::Vector3_f Direction);
        static float ApplyRotaitonToLocation(float Value, Object* Obj);
        static bool CouldObjectBeHit(Object* Obj, Vector::Vector3_f Start, Vector::Vector3_f Direction);
        static std::vector<Triangle*> ListPossableObjects(Vector::Vector3_f Start, Vector::Vector3_f Direction);
        static Triangle* FindHitTriangle(std::vector<Triangle*>& TriList);
        static VideoRendering::RenderingOutput RetriveTriangleColorData(Triangle* Tri);
        static Vector::Vector3_f FindNewReflectionDirection(Vector::Vector3_f Start, Vector::Vector3_f Direction, Triangle* TrianglePtr);
        static VideoRendering::RenderingOutput RenderPixel(int Bounces, Vector::Vector3_f Start, Vector::Vector3_f Direction);
        static std::vector<Vector::Vector3_f> RayDirection();
        static VideoRendering::RenderingOutput CombineRayColors(VideoRendering::RenderingOutput* ThisRay, VideoRendering::RenderingOutput* ReflectionRay, VideoRendering::RenderingOutput* TransperencyRay);
        static std::vector<std::vector<VideoRendering::RenderingOutput>> RenderTheScene();
};

#endif