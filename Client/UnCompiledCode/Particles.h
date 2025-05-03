// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Particles_H
#define Particles_H

// C++ imported files


// Program imported files
#include "LocationClass.h"
#include "RenderingStates.h"
#include "RotationClass.h"
#include "ScaleClass.h"

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

class ConeParticleGenerator : public ParticleGenerator, public RotationClass {
    public:
        // Constructer and deconstructer
        ConeParticleGenerator();
        ~ConeParticleGenerator();
};

class SphereParticleGenerator : public ParticleGenerator, public ScaleClass {
    public:
        // Constructer and deconstructer
        SphereParticleGenerator();
        ~SphereParticleGenerator();
};

class SphereAreaParticleGenerator : public ParticleGenerator, public ScaleClass {
    public:
        // Constructer and deconstructer
        SphereAreaParticleGenerator();
        ~SphereAreaParticleGenerator();
};

class CircleAreaParticleGenerator : public ParticleGenerator, public ScaleClass {
    public:
        // Constructer and deconstructer
        CircleAreaParticleGenerator();
        ~CircleAreaParticleGenerator();
};

class CubeAreaParticleGenerator : public ParticleGenerator, public ScaleClass, public RotationClass {
    public:
        // Constructer and deconstructer
        CubeAreaParticleGenerator();
        ~CubeAreaParticleGenerator();
};

class RectangleAreaParticleGenerator : public ParticleGenerator, public ScaleClass, public RotationClass {
    public:
        // Constructer and deconstructer
        RectangleAreaParticleGenerator();
        ~RectangleAreaParticleGenerator();
};

#endif