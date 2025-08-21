// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Game_H
#define Game_H

// C++ imported files
#include <vector>
#include <string>
#include <memory>
#include <fstream>
#include <algorithm>
#include <iostream>

// Program imported files
#include "Scene.h"
#include "Exit.h"
#include "Args.h"
#include "Constants.h"
#include "ClassIdentifier.h"
#include "Camera.h"

// Definitions
class Game {
    public:    
        static void LoadGame();
        static void UnloadScene(std::shared_ptr<Scene> Scene);
        
        // Unique identity 
        static IdentityToken Identity;
    
        static std::mutex Game_MX;

        // Loaded scenes (mutex)
        static std::vector<std::shared_ptr<Scene>> GetLoadedScenes();
        static std::vector<std::shared_ptr<Scene>> GetLoadedScenes_NOLOCK();
        static std::vector<std::shared_ptr<Scene>> GetListOfLoadedAndUnloadedScenes();
        static std::vector<std::shared_ptr<Scene>> GetListOfLoadedAndUnloadedScenes_NOLOCK();

        // Basic objects (mutex)
        static std::vector<std::weak_ptr<int>> GetLoadedObjects();
        static std::vector<std::weak_ptr<int>> GetLoadedObjects_NOLOCK();
        static std::shared_ptr<Camera> GetCurrentCamera();
        static std::shared_ptr<Camera> GetCurrentCamera_NOLOCK();
        static std::vector<std::weak_ptr<Camera>> GetLoadedCameras();
        static std::vector<std::weak_ptr<Camera>> GetLoadedCameras_NOLOCK();
        static std::vector<std::weak_ptr<int>> GetLoadedLights();
        static std::vector<std::weak_ptr<int>> GetLoadedLights_NOLOCK();

        // Loaded audio recivers and generators (mutex)
        static std::vector<std::weak_ptr<int>> GetLoadedAudioGenerators();
        static std::vector<std::weak_ptr<int>> GetLoadedAudioGenerators_NOLOCK();
        static std::vector<std::weak_ptr<int>> GetLoadedAudioRecivers();
        static std::vector<std::weak_ptr<int>> GetLoadedAudioRecivers_NOLOCK();

        // Loaded particles and particle generators (mutex)
        static std::vector<std::weak_ptr<int>> GetLoadedParticleGenerators();
        static std::vector<std::weak_ptr<int>> GetLoadedParticleGenerators_NOLOCK();
        static std::vector<std::weak_ptr<int>> GetLoadedParticles();
        static std::vector<std::weak_ptr<int>> GetLoadedParticles_NOLOCK();

        // Windzones for object movement (mutex)
        static std::vector<std::weak_ptr<int>> GetLoadedWindZones();
        static std::vector<std::weak_ptr<int>> GetLoadedWindZones_NOLOCK();

        // Non standard objects (mutex)
        static std::vector<std::weak_ptr<int>> GetLoadedImages();
        static std::vector<std::weak_ptr<int>> GetLoadedImages_NOLOCK();
        static std::vector<std::weak_ptr<int>> GetLoadedVideos();
        static std::vector<std::weak_ptr<int>> GetLoadedVideos_NOLOCK();

    private:   
        // Main camera
        static std::shared_ptr<Camera> MainCamera;

        // Loaded scenes
        static std::vector<std::shared_ptr<Scene>> LoadedScenes;
        static std::vector<std::shared_ptr<Scene>> ListOfLoadedAndUnloadedScenes;

        // Basic objects
        static std::vector<std::weak_ptr<int>> LoadedObjects;
        static std::vector<std::weak_ptr<Camera>> LoadedCameras;
        static std::vector<std::weak_ptr<int>> LoadedLights;

        // Loaded audio recivers and generators
        static std::vector<std::weak_ptr<int>> LoadedAudioGenerators;
        static std::vector<std::weak_ptr<int>> LoadedAudioRecivers;

        // Loaded particles and particle generators
        static std::vector<std::weak_ptr<int>> LoadedParticleGenerators;
        static std::vector<std::weak_ptr<int>> LoadedParticles;

        // Windzones for object movement
        static std::vector<std::weak_ptr<int>> LoadedWindZones;

        // Non standard objects
        static std::vector<std::weak_ptr<int>> LoadedImages;
        static std::vector<std::weak_ptr<int>> LoadedVideos;
};

#endif