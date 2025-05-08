// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Game_H
#define Game_H

// C++ imported files
#include <vector>

// Program imported files
#include "Constants.h"
#include "Scene.h"
#include "Particles.h"
#include "Lights.h"
#include "Object.h"
#include "Scripts.h"
#include "Camera.h"

// Definitions
class Game {
    public: 
        Game();
        ~Game();

        static Game* CurrentGame;

        void RunUserScripts();

        std::vector<Scene> ListOfAllScenes;
        std::vector<Scene*> LoadedScenes;

        std::vector<Script> ScriptsInGame;
        std::vector<Object> ObjectsInGame;
        std::vector<Light> LightsInGame;
        std::vector<ParticleGenerator> ParticleGeneratorsInGame;
        std::vector<Particle> ParticlesInGame;
        std::vector<Camera> CamerasInGame;
        
        void UpdateGame();
        void RunPlayerScripts();
        void UpdateObjects();
        void UpdateLights();
        void UpdateParticleGenerators();
        void UpdateParticles();
        void UpdateCameras();
};

#endif