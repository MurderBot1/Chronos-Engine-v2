// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Scene_H
#define Scene_H

// C++ imported files
#include <vector>

// Program imported files
#include "Particles.h"
#include "Lights.h"
#include "Object.h"
#include "Scripts.h"
#include "Camera.h"

// Definitions
class Scene {
    public:
        Scene();
        ~Scene();
        
        std::vector<Script*> ScriptsInScene;
        std::vector<Object*> ObjectsInScene;
        std::vector<Light*> LightsInScene;
        std::vector<ParticleGenerator*> ParticleGeneratorsInScene;
        std::vector<Particle*> ParticlesInScene;
        std::vector<Camera*> CamerasInScene;
        
        void CleanIpScene();
        void CleanUpnPlayerScripts();
        void CleanUpObjects();
        void CleanUpLights();
        void CleanUpParticleGenerators();
        void CleanUpParticles();
        void CleanUpCameras();
};

#endif