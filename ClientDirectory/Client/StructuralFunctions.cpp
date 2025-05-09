// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef StructuralFunctions_CPP
#define StructuralFunctions_CPP

// Include the C++'s .h file
#include "StructuralFunctions.h"

// Variable redefinitions


// Definitions
void StartFunction() {
    Time::FillValuesForLoading();
    Log::SetupLog(CurrentPath.string() + "\\Settings\\Logs\\LogSettings.txt");
    Settings::LoadSettings(CurrentPath.string() + "\\Settings\\PathOfSettingsFiles.txt");
    Keyboard::StartKeyboardThread();
    Exit::StartUpExit();
}

void LoopFunction() {
    Time::ComupteDeltaTime();
    LimitedFunction::ResetAllLimitedFunctions();
    Log::UpdateCounters();
    Log::OutputDataToFile();
    Time::Sleep();
}

void EndFunction() {
    Keyboard::CleanUpKeyboard();
}

#endif