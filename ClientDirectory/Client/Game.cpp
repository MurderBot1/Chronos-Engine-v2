// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Game_CPP
#define Game_CPP

// Include the C++'s .h file
#include "Game.h"

// Variable redefinitions
std::mutex Game::Game_MX;
std::shared_ptr<Camera> Game::MainCamera;
std::vector<std::shared_ptr<Scene>> Game::LoadedScenes;
std::vector<std::shared_ptr<Scene>> Game::ListOfLoadedAndUnloadedScenes;
std::vector<std::weak_ptr<Object>> Game::LoadedObjects;
std::vector<std::weak_ptr<Camera>> Game::LoadedCameras;
std::vector<std::weak_ptr<int>> Game::LoadedLights;
std::vector<std::weak_ptr<int>> Game::LoadedAudioGenerators;
std::vector<std::weak_ptr<int>> Game::LoadedAudioRecivers;
std::vector<std::weak_ptr<int>> Game::LoadedParticleGenerators;
std::vector<std::weak_ptr<int>> Game::LoadedParticles;
std::vector<std::weak_ptr<int>> Game::LoadedWindZones;
std::vector<std::weak_ptr<int>> Game::LoadedImages;
std::vector<std::weak_ptr<int>> Game::LoadedVideos;
IdentityToken Game::Identity;

// Definitions
void Game::LoadGame() {
    // Load identity
    Identity.LoadIdentity();

    std::ifstream Scenes(CurrentPath.string() + "\\" + std::string{Args::Game} + "\\Scenes.ChrScenes");

    if(!Scenes.is_open()) {
        Exit::ExitTheProgram();
        Scenes.close();
        std::cout << "There are no scenes in to project\n";
        return;
    }

    std::string Line;

    while(std::getline(Scenes, Line)) {
        Game::ListOfLoadedAndUnloadedScenes.push_back(
            std::make_shared<Scene>(CurrentPath.string() + "\\" + std::string{Args::Game} + "\\Scenes\\" + Line + "\\")
        );
    }

    std::vector<std::shared_ptr<Scene>> ScenesToAdd = Game::GetListOfLoadedAndUnloadedScenes_NOLOCK();

    for(std::shared_ptr<Scene> Scn : ScenesToAdd) {
        Game::LoadedScenes.push_back(Scn);
    }
    
    for(std::shared_ptr<Scene> Scn : LoadedScenes) {
        for(std::shared_ptr<Object> Obj : Scn->GetLoadedObjects())
        Game::LoadedObjects.push_back(std::weak_ptr<Object>(Obj));
    }

    // Load in a camera to be the main camera if another is not loaded
    MainCamera = std::make_shared<Camera>();

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

std::vector<std::shared_ptr<Scene>> Game::GetLoadedScenes() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game_MX);
    
    // Return the variable
    return LoadedScenes;
}

/// @brief DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game_MX
/// @return
std::vector<std::shared_ptr<Scene>> Game::GetLoadedScenes_NOLOCK() {     
    // Return the variable
    return LoadedScenes;
}

std::vector<std::shared_ptr<Scene>> Game::GetListOfLoadedAndUnloadedScenes() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game_MX);
    
    // Return the variable
    return ListOfLoadedAndUnloadedScenes;
}

/// @brief DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game_MX
/// @return
std::vector<std::shared_ptr<Scene>> Game::GetListOfLoadedAndUnloadedScenes_NOLOCK() {     
    // Return the variable
    return ListOfLoadedAndUnloadedScenes;
}

std::vector<std::weak_ptr<Object>> Game::GetLoadedObjects() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game_MX);
    
    // Return the variable
    return LoadedObjects;
}

/// @brief DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game_MX
/// @return
std::vector<std::weak_ptr<Object>> Game::GetLoadedObjects_NOLOCK() { 
    // Return the variable
    return LoadedObjects;
}

std::shared_ptr<Camera> Game::GetCurrentCamera() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game_MX);
    
    // Return the variable
    return MainCamera;
}

/// @brief DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game_MX
/// @return
std::shared_ptr<Camera> Game::GetCurrentCamera_NOLOCK() {
    // Return the variable
    return MainCamera;
}

std::vector<std::weak_ptr<Camera>> Game::GetLoadedCameras() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game_MX);
    
    // Return the variable
    return LoadedCameras;
}

/// @brief DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game_MX
/// @return
std::vector<std::weak_ptr<Camera>> Game::GetLoadedCameras_NOLOCK() { 
    // Return the variable
    return LoadedCameras;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedLights() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game_MX);
    
    // Return the variable
    return LoadedLights;
}

/// @brief DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game_MX
/// @return
std::vector<std::weak_ptr<int>> Game::GetLoadedLights_NOLOCK() { 
    // Return the variable
    return LoadedLights;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedAudioGenerators() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game_MX);
    
    // Return the variable
    return LoadedAudioGenerators;
}

/// @brief DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game_MX
/// @return
std::vector<std::weak_ptr<int>> Game::GetLoadedAudioGenerators_NOLOCK() { 
    // Return the variable
    return LoadedAudioGenerators;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedAudioRecivers() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game_MX);
    
    // Return the variable
    return LoadedAudioRecivers;
}

/// @brief DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game_MX
/// @return
std::vector<std::weak_ptr<int>> Game::GetLoadedAudioRecivers_NOLOCK() { 
    // Return the variable
    return LoadedAudioRecivers;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedParticleGenerators() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game_MX);
    
    // Return the variable
    return LoadedParticleGenerators;
}

/// @brief DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game_MX
/// @return
std::vector<std::weak_ptr<int>> Game::GetLoadedParticleGenerators_NOLOCK() { 
    // Return the variable
    return LoadedParticleGenerators;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedParticles() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game_MX);
    
    // Return the variable
    return LoadedParticles;
}

/// @brief DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game_MX
/// @return
std::vector<std::weak_ptr<int>> Game::GetLoadedParticles_NOLOCK() { 
    // Return the variable
    return LoadedParticles;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedWindZones() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game_MX);
    
    // Return the variable
    return LoadedWindZones;
}

/// @brief DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game_MX
/// @return
std::vector<std::weak_ptr<int>> Game::GetLoadedWindZones_NOLOCK() { 
    // Return the variable
    return LoadedWindZones;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedImages() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game_MX);
    
    // Return the variable
    return LoadedImages;
}

/// @brief DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game_MX
/// @return
std::vector<std::weak_ptr<int>> Game::GetLoadedImages_NOLOCK() { 
    // Return the variable
    return LoadedImages;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedVideos() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game_MX);
    
    // Return the variable
    return LoadedVideos;
}

/// @brief DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game_MX
/// @return
std::vector<std::weak_ptr<int>> Game::GetLoadedVideos_NOLOCK() { 
    // Return the variable
    return LoadedVideos;
}

#endif