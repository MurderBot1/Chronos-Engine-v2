// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Pixels_H
#define Pixels_H

// C++ imported files
#include <array>
#include <stdint.h>

// Program imported files


// Definitions
class Pixels {
    Pixels();
    ~Pixels();
    
    std::array<uint8_t, 3> Color;
};

#endif