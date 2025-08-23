#ifndef Object_H
#define Object_H

#include "Triangles.h"
#include "LocationClass.h"
#include "RotationClass.h"
#include "ScaleClass.h"

class Object : public LocationClass, public RotationClass, public ScaleClass {
    public:
        Object(/* args */);
        ~Object();
        std::vector<Triangle> Triangles;
    private:
};

#endif