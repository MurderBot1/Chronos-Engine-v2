// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Texture_H
#define Texture_H

// C++ imported files
#include <string>
#include <array>

// Program imported files
#include "VariableTypes.h"

// Definitions
class Texture {
    public:
        Texture();
        ~Texture();

        std::string FilePath;
        std::array<Vector::Vector3_f, 3> TextureCoordinates{};
};

#endif