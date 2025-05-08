// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Camera_H
#define Camera_H

// C++ imported files
#include <vector>

// Program imported files
#include "LocationClass.h"
#include "RotationClass.h"

// Definitions
class Camera : public LocationClass, public RotationClass{
    public:
        // Main camera
        static Camera* MainCamera;

        // Camera list
        static std::vector<Camera*> CameraList;
};

#endif