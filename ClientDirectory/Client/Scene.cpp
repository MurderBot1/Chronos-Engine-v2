// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Scene_CPP
#define Scene_CPP

// Include the C++'s .h file
#include "Scene.h"

// Variable redefinitions


// Definitions
// Getters
std::vector<std::shared_ptr<Object>> Scene::GetLoadedObjects() {
    // Lock the scene mutex
    std::lock_guard<std::mutex> Lock(Scene_MX);
    
    // Return the variable
    return LoadedObjects;
}

std::vector<std::shared_ptr<Object>> Scene::GetLoadedObjects_NOLOCK() {
    // Return the variable
    return LoadedObjects;
}

std::vector<std::shared_ptr<Camera>> Scene::GetLoadedCameras() {
    // Lock the scene mutex
    std::lock_guard<std::mutex> Lock(Scene_MX);
    
    // Return the variable
    return LoadedCameras;
}

std::vector<std::shared_ptr<Camera>> Scene::GetLoadedCameras_NOLOCK() {
    // Return the variable
    return LoadedCameras;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedLights() {
    // Lock the scene mutex
    std::lock_guard<std::mutex> Lock(Scene_MX);
    
    // Return the variable
    return LoadedLights;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedLights_NOLOCK() {
    // Return the variable
    return LoadedLights;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedAudioGenerators() {
    // Lock the scene mutex
    std::lock_guard<std::mutex> Lock(Scene_MX);
    
    // Return the variable
    return LoadedAudioGenerators;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedAudioGenerators_NOLOCK() {
    // Return the variable
    return LoadedAudioGenerators;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedAudioRecivers() {
    // Lock the scene mutex
    std::lock_guard<std::mutex> Lock(Scene_MX);
    
    // Return the variable
    return LoadedAudioRecivers;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedAudioRecivers_NOLOCK() {
    // Return the variable
    return LoadedAudioRecivers;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedParticleGenerators() {
    // Lock the scene mutex
    std::lock_guard<std::mutex> Lock(Scene_MX);
    
    // Return the variable
    return LoadedParticleGenerators;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedParticleGenerators_NOLOCK() {
    // Return the variable
    return LoadedParticleGenerators;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedParticles() {
    // Lock the scene mutex
    std::lock_guard<std::mutex> Lock(Scene_MX);
    
    // Return the variable
    return LoadedParticles;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedParticles_NOLOCK() {
    // Return the variable
    return LoadedParticles;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedWindZones() {
    // Lock the scene mutex
    std::lock_guard<std::mutex> Lock(Scene_MX);
    
    // Return the variable
    return LoadedWindZones;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedWindZones_NOLOCK() {
    // Return the variable
    return LoadedWindZones;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedImages() {
    // Lock the scene mutex
    std::lock_guard<std::mutex> Lock(Scene_MX);
    
    // Return the variable
    return LoadedImages;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedImages_NOLOCK() {
    // Return the variable
    return LoadedImages;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedVideos() {
    // Lock the scene mutex
    std::lock_guard<std::mutex> Lock(Scene_MX);
    
    // Return the variable
    return LoadedVideos;
}

std::vector<std::shared_ptr<int>> Scene::GetLoadedVideos_NOLOCK() {
    // Return the variable
    return LoadedVideos;
}


Scene::Scene(std::string FilePath) {
    // Load identity
    Identity.LoadIdentity();

    std::ifstream LoadScene(FilePath + ".ChrScene");
    
    LoadedObjects.push_back(std::make_shared<Cube>());

    LoadedObjects[0]->SetLocation(1,1,1);

    LoadScene.close();
}

Scene::~Scene() {

}

#endif