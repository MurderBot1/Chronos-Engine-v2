// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Lights_H
#define Lights_H

// C++ imported files


// Program imported files
#include "LocationClass.h"
#include "RenderingStates.h"

// Definitions
class Light : public LocationClass, public RenderingStates {
    public:
        // Constructer and deconstructer
        Light();
        ~Light();
};

#endif