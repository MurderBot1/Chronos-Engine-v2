// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Scene_H
#define Scene_H

// C++ imported files
#include <vector>
#include <memory>
#include <string>
#include <fstream>
#include <mutex>

// Program imported files
#include "ClassIdentifier.h"
#include "Camera.h"
#include "Object.h"

// Definitions
class Scene {
    public:
        Scene(std::string FilePath);
        ~Scene();
        
        // Unique identity
        IdentityToken Identity;

        // Lock
        std::mutex Scene_MX;

        // Getters
        std::vector<std::shared_ptr<Object>> GetLoadedObjects();
        std::vector<std::shared_ptr<Object>> GetLoadedObjects_NOLOCK();
        std::vector<std::shared_ptr<Camera>> GetLoadedCameras();
        std::vector<std::shared_ptr<Camera>> GetLoadedCameras_NOLOCK();
        std::vector<std::shared_ptr<int>> GetLoadedLights();
        std::vector<std::shared_ptr<int>> GetLoadedLights_NOLOCK();

        // Loaded audio recivers and generators
        std::vector<std::shared_ptr<int>> GetLoadedAudioGenerators();
        std::vector<std::shared_ptr<int>> GetLoadedAudioGenerators_NOLOCK();
        std::vector<std::shared_ptr<int>> GetLoadedAudioRecivers();
        std::vector<std::shared_ptr<int>> GetLoadedAudioRecivers_NOLOCK();

        // Loaded particles and particle generators
        std::vector<std::shared_ptr<int>> GetLoadedParticleGenerators();
        std::vector<std::shared_ptr<int>> GetLoadedParticleGenerators_NOLOCK();
        std::vector<std::shared_ptr<int>> GetLoadedParticles();
        std::vector<std::shared_ptr<int>> GetLoadedParticles_NOLOCK();

        // Windzones for object movement
        std::vector<std::shared_ptr<int>> GetLoadedWindZones();
        std::vector<std::shared_ptr<int>> GetLoadedWindZones_NOLOCK();

        // Non standard objects
        std::vector<std::shared_ptr<int>> GetLoadedImages();
        std::vector<std::shared_ptr<int>> GetLoadedImages_NOLOCK();
        std::vector<std::shared_ptr<int>> GetLoadedVideos();
        std::vector<std::shared_ptr<int>> GetLoadedVideos_NOLOCK();
        
    private:
        // Basic objects
        std::vector<std::shared_ptr<Object>> LoadedObjects;
        std::vector<std::shared_ptr<Camera>> LoadedCameras;
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