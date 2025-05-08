// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Particles_H
#define Particles_H

// C++ imported files
#include <string>

// Program imported files
#include "LocationClass.h"
#include "RenderingStates.h"

// Definitions
class Particle : public LocationClass, public RenderingStates {
    public:
        // Constructer and deconstructer
        Particle();
        ~Particle();
};

class ParticleGenerator : public LocationClass, public RenderingStates {
    public:
        // Constructer and deconstructer
        ParticleGenerator();
        ~ParticleGenerator();

        
};

#endif