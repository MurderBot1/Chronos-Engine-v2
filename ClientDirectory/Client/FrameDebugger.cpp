// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef FrameDebugger_CPP
#define FrameDebugger_CPP

// Include the C++'s .h file
#include "FrameDebugger.h"

// Variable redefinitions
int FrameDebug::CurrentFrame;

// Definitions
void FrameDebug::SetupFrameDebugger() {
    // Check if debug is activated
    if(Args::UseFrameDebug == false) {
        return;
    }
    
    // Create the directory for current instance of game frame debug listing
    const std::string ThisFrameDebugPath = CurrentPath.string() + "\\" + std::string{Args::Game} + "\\FrameDebugData\\" + Time::GetWhenProgramStart() + "\\";
    if(!(std::filesystem::exists(ThisFrameDebugPath) && std::filesystem::is_directory(ThisFrameDebugPath))) {
        std::filesystem::create_directories(ThisFrameDebugPath);
    }
    
    // Set frame count to one
    FrameDebug::CurrentFrame = 1;
}

void FrameDebug::SaveFrameData() {
    // Check if debug is activated
    if(Args::UseFrameDebug == false) {
        return;
    }

    // Create the directory for current instance of game frame debug listing
    const std::string ThisFrameDebugPath = CurrentPath.string() + "\\" + std::string{Args::Game} + "\\FrameDebugData\\" + Time::GetWhenProgramStart() + "\\Frame_" + std::to_string(FrameDebug::CurrentFrame) + "\\";
    if(!(std::filesystem::exists(ThisFrameDebugPath) && std::filesystem::is_directory(ThisFrameDebugPath))) {
        std::filesystem::create_directory(ThisFrameDebugPath);
    }

    // Lock the game down
    std::lock_guard<std::mutex> GameLock(Game::Game_MX);

    // Create the file for loaded scenes
    std::ofstream LoadedScenes(ThisFrameDebugPath + "LoadedScenes.ChrLoadedScn");

    std::vector<std::shared_ptr<Scene>> LoadedScn = Game::GetLoadedScenes_NOLOCK();

    for(std::shared_ptr<Scene> CLoadedScn : LoadedScn) {
        LoadedScenes << std::to_string(CLoadedScn->Identity.GetIdentifierToken());
        if(CLoadedScn != LoadedScn.back()) {
            LoadedScenes << "\n";
        }
    }

    LoadedScenes.close();

    // Create folder for every scene
    std::vector<std::shared_ptr<Scene>> Scenes = Game::GetListOfLoadedAndUnloadedScenes_NOLOCK();
    for(std::shared_ptr<Scene> Scn : Scenes) {
        const std::string ThisFrameObjectDebugPath = CurrentPath.string() + "\\" + std::string{Args::Game} + "\\FrameDebugData\\" + Time::GetWhenProgramStart() + "\\Frame_" + std::to_string(FrameDebug::CurrentFrame) + "\\Scene_" + std::to_string(Scn->Identity.GetIdentifierToken()) + "\\";
        if(!(std::filesystem::exists(ThisFrameObjectDebugPath) && std::filesystem::is_directory(ThisFrameObjectDebugPath))) {
            std::filesystem::create_directory(ThisFrameObjectDebugPath);
        }
    }

    // Increament frame count
    FrameDebug::CurrentFrame++;
}

#endif