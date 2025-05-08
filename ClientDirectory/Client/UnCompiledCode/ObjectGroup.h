// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef ObjectGroup_H
#define ObjectGroup_H

// C++ imported files
#include <vector>

// Program imported files
#include "Object.h"
#include "Camera.h"
#include "Particles.h"
#include "Lights.h"

// Definitions
class ObjectGroup {
    public:
        // Constructor and deconstructor
        ObjectGroup();
        ~ObjectGroup();
        
        // Objects contained in group 
        std::vector<Object*> ObjectsInGroup;
        std::vector<Camera*> CamerasInGroup;
        std::vector<Light*> LightsInGroup;
        std::vector<ParticleGenerator*> ParticleGeneratorsInGroups;
};

#endif