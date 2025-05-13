// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Game_H
#define Game_H

// C++ imported files
#include <vector>
#include <string>
#include <iostream>

// Program imported files
#include "Constants.h"
#include "Scene.h"

// Definitions
struct GameStorage {
    std::vector<std::weak_ptr<int>> GamesObjectList;
    std::vector<std::weak_ptr<int>> GamesLightList;
    std::vector<std::weak_ptr<int>> GamesCameraList;
    std::vector<std::weak_ptr<int>> GamesParticleGeneratorList;
    std::vector<std::weak_ptr<int>> GamesParticlesList;
    std::vector<std::weak_ptr<int>> GamesAudioGeneratorList;

    std::mutex GamesObjectList_MX;
    std::mutex GamesLightList_MX;
    std::mutex GamesCameraList_MX;
    std::mutex GamesParticleGeneratorList_MX;
    std::mutex GamesParticlesList_MX;
    std::mutex GamesAudioGeneratorList_MX;
};

struct LoadedGameStorage {
    std::vector<std::shared_ptr<int>> GamesObjectList;
    std::vector<std::shared_ptr<int>> GamesLightList;
    std::vector<std::shared_ptr<int>> GamesCameraList;
    std::vector<std::shared_ptr<int>> GamesParticleGeneratorList;
    std::vector<std::shared_ptr<int>> GamesParticlesList;
    std::vector<std::shared_ptr<int>> GamesAudioGeneratorList;
};

class Game {
    public: 
        Game(std::string FilePath);
        ~Game();

        static std::shared_ptr<Game> LoadedGame;
        
        std::vector<std::string> SceneNames;
        std::vector<Scene> LoadedScenes;

        GameStorage GameData;

        LoadedGameStorage LoadGameData();
        void LoadNewScene(std::string SceneName);
        static void LoadGame(std::string FilePath);
};

#endif