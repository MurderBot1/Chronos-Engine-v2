// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Game_CPP
#define Game_CPP

// Include the C++'s .h file
#include "Game.h"

// Variable redefinitions
std::shared_ptr<Game> Game::LoadedGame;

// Definitions
Game::Game(std::string FilePath) {
    FilePath.clear();
}

Game::~Game() {

}

LoadedGameStorage Game::LoadGameData() {
    LoadedGameStorage Return;

    // Define the size of vectors for clearer UI
    #define ObjectVecSize GameData.GamesObjectList.size()
    #define LightVecSize GameData.GamesLightList.size()
    #define CameraVecSize GameData.GamesCameraList.size()
    #define ParticleGenVecSize GameData.GamesParticleGeneratorList.size()
    #define ParticleVecSize GameData.GamesParticlesList.size()
    #define AudioGenVecSize GameData.GamesAudioGeneratorList.size()

    // Define the lock mutex function
    #define LockMutex(Mutex) std::lock_guard<std::mutex> Lock(Mutex);

    // Defines to reserve space
    #define Reserve(Vector, Amount) Vector.reserve(Amount);

    { // Load in the Objects to a shared ptr
        LockMutex(GameData.GamesObjectList_MX)
        Reserve(Return.GamesObjectList, ObjectVecSize)
        for(uint64_t Object = 0; Object < ObjectVecSize; Object++) {
            Return.GamesObjectList[Object] = GameData.GamesObjectList[Object].lock();
        }
    } // Release the mutex

    { // Load in the Lights to a shared ptr
        LockMutex(GameData.GamesLightList_MX)
        Reserve(Return.GamesLightList, LightVecSize)
        for(uint64_t Light = 0; Light < LightVecSize; Light++) {
            Return.GamesLightList[Light] = GameData.GamesLightList[Light].lock();
        }
    } // Release the mutex

    { // Load in the Cameras to a shared ptr
        LockMutex(GameData.GamesCameraList_MX)
        Reserve(Return.GamesCameraList, CameraVecSize)
        for(uint64_t Camera = 0; Camera < CameraVecSize; Camera++) {
            Return.GamesCameraList[Camera] = GameData.GamesCameraList[Camera].lock();
        }
    } // Release the mutex

    { // Load in the Particle Generators to a shared ptr
        LockMutex(GameData.GamesAudioGeneratorList_MX)
        Reserve(Return.GamesAudioGeneratorList, ParticleGenVecSize)
        for(uint64_t ParticleGen = 0; ParticleGen < ParticleGenVecSize; ParticleGen++) {
            Return.GamesAudioGeneratorList[ParticleGen] = GameData.GamesAudioGeneratorList[ParticleGen].lock();
        }
    } // Release the mutex

    { // Load Particles in to a shared ptr
        LockMutex(GameData.GamesParticlesList_MX)
        Reserve(Return.GamesParticlesList, ParticleVecSize);
        for(uint64_t Particle = 0; Particle < ParticleVecSize; Particle++) {
            Return.GamesParticlesList[Particle] = GameData.GamesParticlesList[Particle].lock();
        }
    } // Release the mutex

    { // Load Audio Generators in to a shared ptr
        LockMutex(GameData.GamesAudioGeneratorList_MX)
        Reserve(Return.GamesAudioGeneratorList, AudioGenVecSize);
        for(uint64_t AudioGen = 0; AudioGen < AudioGenVecSize; AudioGen++) {
            Return.GamesAudioGeneratorList[AudioGen] = GameData.GamesAudioGeneratorList[AudioGen].lock();
        }
    } // Release the mutex

    // Undef all #defines
    #undef ObjectVecSize // Undefine ObjectVecSize
    #undef LightVecSize // Undefine LightVecSize
    #undef CameraVecSize // Undefine CameraVecSize
    #undef ParticleGenVecSize // Undefine ParticleGenVecSize
    #undef ParticleVecSize // Undefine ParticleVecSize
    #undef AudioGenVecSize // Undefine AudioGenVecSize
    #undef LockMutex // Undefine LockMutex
    #undef Reserve // Undefine Reserve

    return Return;
}

void Game::LoadNewScene(std::string SceneName) {
    SceneName.clear();
}

void Game::LoadGame(std::string FilePath) {
    Game::LoadedGame = std::make_shared<Game>(FilePath);
}

#endif