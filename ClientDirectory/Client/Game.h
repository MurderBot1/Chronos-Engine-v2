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

// Definitions
class Game {
    public:
        static void LoadGame(std::string FilePath);
        static void UnloadScene(std::shared_ptr<Scene> Scene);

    private:
        // Loaded scenes
        static std::vector<std::shared_ptr<Scene>> LoadedScenes;
        static std::vector<std::string> ListOfLoadedAndUnloadedScenes;

        // Basic objects
        static std::vector<std::weak_ptr<int>> LoadedObjects;
        static std::vector<std::weak_ptr<int>> LoadedCameras;
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