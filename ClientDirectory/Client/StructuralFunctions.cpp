// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef StructuralFunctions_CPP
#define StructuralFunctions_CPP

// Include the C++'s .h file
#include "StructuralFunctions.h"

// Variable redefinitions


// Definitions
void StartFunction(int argc, char* argv[]) {
    // Set the running variable to true
    Exit::StartUpExit();

    // Load in the commands that were run with the .exe
    Args::LoadArgs(argc, argv);

    // Load the visual renderer code
    ScopedTimer::StartVisualRenderer(Args::Debug, CurrentPath.string() + "\\" + std::string{Args::Game} + "\\Logs\\VisualRenderer\\VisualRenderer.ChronosVisRen");

    // Load the delta time and FPS variables
    Time::FillValuesForLoading();

    // Load the log setup variables
    Log::SetupLog(CurrentPath.string() + "\\" + std::string{Args::Game} + "\\Settings\\Logs\\LogSettings.txt");

    // Load the settings
    Settings::LoadSettings(CurrentPath.string() + "\\" + std::string{Args::Game} + "\\Settings\\PathOfSettingsFiles.txt");

    // Start a new thread to keep track of the keyboard
    Keyboard::StartKeyboardThread();
}

void LoopFunction() {
    // Compute this frames delta time
    Time::ComupteDeltaTime();

    // Reset all limited functions
    LimitedFunction::ResetAllLimitedFunctions();

    // Create a new log file
    Log::UpdateCounters();
    Log::OutputDataToFile();

    // Add the current timings to the file (Debug only)
    ScopedTimer::UpdateVisualRenderer(CurrentPath.string() + "\\" + std::string{Args::Game} + "\\Logs\\VisualRenderer\\VisualRenderer.ChronosVisRen");

    // Wait for loop to limit max FPS
    Time::Sleep();
}

void EndFunction() {
    Keyboard::CleanUpKeyboard();
}

#endif