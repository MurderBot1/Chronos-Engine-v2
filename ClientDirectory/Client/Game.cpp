// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Game_CPP
#define Game_CPP

// Include the C++'s .h file
#include "Game.h"

// Variable redefinitions
std::vector<std::shared_ptr<Scene>> Game::LoadedScenes;
std::vector<std::weak_ptr<int>> Game::LoadedObjects;
std::vector<std::weak_ptr<int>> Game::LoadedCameras;
std::vector<std::weak_ptr<int>> Game::LoadedLights;
std::vector<std::weak_ptr<int>> Game::LoadedAudioGenerators;
std::vector<std::weak_ptr<int>> Game::LoadedAudioRecivers;
std::vector<std::weak_ptr<int>> Game::LoadedParticleGenerators;
std::vector<std::weak_ptr<int>> Game::LoadedParticles;
std::vector<std::weak_ptr<int>> Game::LoadedWindZones;
std::vector<std::weak_ptr<int>> Game::LoadedImages;
std::vector<std::weak_ptr<int>> Game::LoadedVideos;

// Definitions


#endif

void Game::LoadGame(std::string FilePath) {
    std::ifstream Scenes(FilePath + "/Scenes.ChrScenes");

    if(!Scenes) {
        Exit::ExitTheProgram();
    }

    Scenes.close();
}

void Game::UnloadScene(std::shared_ptr<Scene> Scene) {
    Game::LoadedScenes.erase(
        std::remove(Game::LoadedScenes.begin(), 
                    Game::LoadedScenes.end(), 
                    Scene), 
        Game::LoadedScenes.end()
    );
}
