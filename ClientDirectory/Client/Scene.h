// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Scene_H
#define Scene_H

// C++ imported files
#include <vector>
#include <memory>
#include <string>
#include <fstream>

// Program imported files
#include "ClassIdentifier.h"

// Definitions
class Scene {
    public:
        Scene(std::string FilePath);
        ~Scene();
        
        // Unique identity
        IdentityToken Identity;
        
    private:
        // Basic objects
        std::vector<std::shared_ptr<int>> LoadedObjects;
        std::vector<std::shared_ptr<int>> LoadedCameras;
        std::vector<std::shared_ptr<int>> LoadedLights;

        // Loaded audio recivers and generators
        std::vector<std::shared_ptr<int>> LoadedAudioGenerators;
        std::vector<std::shared_ptr<int>> LoadedAudioRecivers;

        // Loaded particles and particle generators
        std::vector<std::shared_ptr<int>> LoadedParticleGenerators;
        std::vector<std::shared_ptr<int>> LoadedParticles;

        // Windzones for object movement
        std::vector<std::shared_ptr<int>> LoadedWindZones;

        // Non standard objects
        std::vector<std::shared_ptr<int>> LoadedImages;
        std::vector<std::shared_ptr<int>> LoadedVideos;
};

#endif