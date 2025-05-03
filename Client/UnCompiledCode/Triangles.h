// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Triangles_H
#define Triangles_H

// C++ imported files
#include <array>

// Program imported files
#include "VariableTypes.h"
#include "Texture.h"
#include "Object.h"

// Definitions
class Triangle {
    public:
        // Define a constructor and a deconstructor
        Triangle();
        ~Triangle();

        // A variable that holds the texture
        Texture LoadedTexture;

        // A pointer to the object
        Object* Obj;

        // The coordinates of the triangle
        std::array<Vector::Vector3_f, 3> VectorCoordinates{};
};

#endif