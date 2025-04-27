// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Rendering_H
#define Rendering_H

// C++ imported files
#include <vector>

// Program imported files
#include "Object.h"
#include "Triangles.h"
#include "VariableTypes.h"

// Function definitions
class VideoRendering {
    public:
        struct RenderingOutput {
            Triangle* TrianglePtr;
            Vector::Vector3_f HitLocation;
        };
        static bool RayIntersectsTriangle(Vector::Vector3_f TL1, Vector::Vector3_f TL2, Vector::Vector3_f TL3, Vector::Vector3_f Start, Vector::Vector3_f Direction);
        static bool IsObjectHit(Object* Obj, Vector::Vector3_f Start, Vector::Vector3_f Direction);
        static std::vector<Object*> ListPossableObjects(Vector::Vector3_f Start, Vector::Vector3_f Direction);
        static Object* FindHitObject(std::vector<Object*> ObjList);
        static VideoRendering::RenderingOutput RetriveObjectColorData(Object* Obj);
        static Vector::Vector3_f FindNewReflectionDirection(Vector::Vector3_f Start, Vector::Vector3_f Direction, Triangle* TrianglePtr);
        static VideoRendering::RenderingOutput RenderPixel(int Bounces, Vector::Vector3_f Start, Vector::Vector3_f Direction);
        static std::vector<std::vector<VideoRendering::RenderingOutput>> RenderTheScene();
};

#endif