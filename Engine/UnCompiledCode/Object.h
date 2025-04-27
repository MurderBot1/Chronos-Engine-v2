// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Object_H
#define Object_H

// C++ imported files
#include <vector>

// Program imported files
#include "VariableTypes.h"

// Function definitions
class Object {
    public:
        static std::vector<Object*> ListOfObjects;
        
        Vector::Vector3_f Location;
        Vector::Vector3_f Rotation;
        Vector::Vector3_f Scale;
};

#endif