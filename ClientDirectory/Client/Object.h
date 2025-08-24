#ifndef Object_H
#define Object_H

#include "Triangles.h"
#include "LocationClass.h"
#include "RotationClass.h"
#include "ScaleClass.h"
#include "ClassIdentifier.h"

class Object : public LocationClass, public RotationClass, public ScaleClass {
    public:
        // Unique identity 
        static IdentityToken Identity;
        
        Object();
        ~Object();

        void AddTriangle(
            float p1, float p2, float p3,
            float p4, float p5, float p6,
            float p7, float p8, float p9
        );

        std::vector<Triangle> Triangles;
};

class Cube : public Object {
    public:
        Cube();
        ~Cube();
};

#endif