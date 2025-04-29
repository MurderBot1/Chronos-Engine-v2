// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef StructuralFunctions_CPP
#define StructuralFunctions_CPP

// CPP files .h file
#include "StructuralFunctions.h"

// Redefine vars if needed


// Start of program
void StartFunction() {
    Time::FillValuesForLoading();
    Log::SetupLog("C:\\Users\\trent\\Documents\\GitHub\\Chronos-Engine-v2\\Client\\Logs\\Settings\\LogSettings.txt");
    Settings::LoadSettings("C:\\Users\\trent\\Documents\\GitHub\\Chronos-Engine-v2\\ExampleGame\\Settings\\PathOfSettingsFiles.txt");
}

void LoopFunction() {
    Time::ComupteDeltaTime();
    LimitedFunction::ResetAllLimitedFunctions();
    Keyboard::CallAllKeyboardFunctionsIfKeyIsPressed();
    Log::UpdateCounters();
    Log::OutputDataToFile();
    Time::Sleep();
}

#endif