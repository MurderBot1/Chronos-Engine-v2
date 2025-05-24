// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Game_CPP
#define Game_CPP

// Include the C++'s .h file
#include "Game.h"

// Variable redefinitions
std::mutex Game::Game_MX;
std::vector<std::shared_ptr<Scene>> Game::LoadedScenes;
std::vector<std::shared_ptr<Scene>> Game::ListOfLoadedAndUnloadedScenes;
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
        Game::LoadedScenes.push_back(
            Scn
        );
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

std::vector<std::shared_ptr<Scene>> Game::GetLoadedScenes() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game::Game_MX);
    
    // Return the variable
    return Game::LoadedScenes;
}

std::vector<std::shared_ptr<Scene>> Game::GetLoadedScenes_NOLOCK() { // DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game::Game_MX    
    // Return the variable
    return Game::LoadedScenes;
}

std::vector<std::shared_ptr<Scene>> Game::GetListOfLoadedAndUnloadedScenes() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game::Game_MX);
    
    // Return the variable
    return Game::ListOfLoadedAndUnloadedScenes;
}

std::vector<std::shared_ptr<Scene>> Game::GetListOfLoadedAndUnloadedScenes_NOLOCK() { // DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game::Game_MX    
    // Return the variable
    return Game::ListOfLoadedAndUnloadedScenes;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedObjects() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game::Game_MX);
    
    // Return the variable
    return Game::LoadedObjects;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedObjects_NOLOCK() { // DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game::Game_MX
    // Return the variable
    return Game::LoadedObjects;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedCameras() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game::Game_MX);
    
    // Return the variable
    return Game::LoadedCameras;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedCameras_NOLOCK() { // DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game::Game_MX
    // Return the variable
    return Game::LoadedCameras;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedLights() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game::Game_MX);
    
    // Return the variable
    return Game::LoadedLights;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedLights_NOLOCK() { // DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game::Game_MX
    // Return the variable
    return Game::LoadedLights;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedAudioGenerators() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game::Game_MX);
    
    // Return the variable
    return Game::LoadedAudioGenerators;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedAudioGenerators_NOLOCK() { // DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game::Game_MX
    // Return the variable
    return Game::LoadedAudioGenerators;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedAudioRecivers() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game::Game_MX);
    
    // Return the variable
    return Game::LoadedAudioRecivers;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedAudioRecivers_NOLOCK() { // DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game::Game_MX
    // Return the variable
    return Game::LoadedAudioRecivers;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedParticleGenerators() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game::Game_MX);
    
    // Return the variable
    return Game::LoadedParticleGenerators;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedParticleGenerators_NOLOCK() { // DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game::Game_MX
    // Return the variable
    return Game::LoadedParticleGenerators;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedParticles() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game::Game_MX);
    
    // Return the variable
    return Game::LoadedParticles;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedParticles_NOLOCK() { // DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game::Game_MX
    // Return the variable
    return Game::LoadedParticles;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedWindZones() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game::Game_MX);
    
    // Return the variable
    return Game::LoadedWindZones;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedWindZones_NOLOCK() { // DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game::Game_MX
    // Return the variable
    return Game::LoadedWindZones;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedImages() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game::Game_MX);
    
    // Return the variable
    return Game::LoadedImages;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedImages_NOLOCK() { // DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game::Game_MX
    // Return the variable
    return Game::LoadedImages;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedVideos() {
    // Lock the mutex
    std::lock_guard<std::mutex> Lock(Game::Game_MX);
    
    // Return the variable
    return Game::LoadedVideos;
}

std::vector<std::weak_ptr<int>> Game::GetLoadedVideos_NOLOCK() { // DO NOT USE THE NO LOCK VERSION IF YOU HAVE NOT LOCKED Game::Game_MX
    // Return the variable
    return Game::LoadedVideos;
}

#endif