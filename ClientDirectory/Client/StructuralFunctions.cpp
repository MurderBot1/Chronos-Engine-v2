// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef StructuralFunctions_CPP
#define StructuralFunctions_CPP

// Include the C++'s .h file
#include "StructuralFunctions.h"

// Variable redefinitions


// Definitions
StructuralFunctions::StructuralFunctions(int argc, char* argv[]) {
    // Set the running variable to true
    Exit::StartUpExit();

    // Load in the commands that were run with the .exe
    Args::LoadArgs(argc, argv);

    // Start the identitifier tokens
    IdentityToken::StartIdentityToken();

    // Load the visual renderer code
    ScopedTimer::StartVisualRenderer();

    // Load the delta time and FPS variables
    Time::FillValuesForLoading();

    // Load the log setup variables
    Log::SetupLog();

    // Load the settings
    Settings::LoadSettings();

    // Startup the frame debugger (only if "--useframedebug true" is in arguments)
    FrameDebug::SetupFrameDebugger();

    // Start a new thread to keep track of the keyboard
    Keyboard::StartKeyboardThread();

    // Start the audio thread
    AudioThread::StartAudioThread();

    // Load the game 
    Game::LoadGame();

    // Start the game loop
    StructuralFunctions::StartLoop();
}

void StructuralFunctions::StartLoop() {
    while(Exit::IsExit() == false) {
        StructuralFunctions::LoopFunctions();
    }
}

void StructuralFunctions::LoopFunctions() {
    // Compute this frames delta time
    Time::ComupteDeltaTime();
    
    // Reset all limited functions
    LimitedFunction::ResetAllLimitedFunctions();
    
    // Update the log info
    Log::UpdateCounters();
    
    // Create a new log file
    Log::OutputDataToFile();
    
    // Add the current timings to the file (Debug only)
    ScopedTimer::UpdateVisualRenderer();
    
    // Deincrement frames
    Args::DeIncrementFrames();
    
    // Create debug file
    FrameDebug::SaveFrameData();
    
    // Wait for loop to limit max FPS
    Time::Sleep();
}

StructuralFunctions::~StructuralFunctions() {
    // Wait for the keyboard thread to stop
    Keyboard::CleanUpKeyboard();

    // Wait for the audio thread to stop
    AudioThread::CleanUpAudioThread();
}

#endif