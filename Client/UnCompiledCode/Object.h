// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Object_H
#define Object_H

// C++ imported files
#include <vector>

// Program imported files
#include "VariableTypes.h"
#include "LocationClass.h"
#include "RotationClass.h"
#include "ScaleClass.h"
#include "Triangles.h"
#include "RenderingStates.h"

// Definitions
class Object : public LocationClass, public RotationClass, public ScaleClass, public RenderingStates {
    public:
        // List of pointers to objects
        static std::vector<Object*> ObjectList;

        // Constructor and Destructor
        Object();
        ~Object();

        // List of triangles in the object
        std::vector<Triangle> Triangle;
};

#endif