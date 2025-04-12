// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef StructuralFunctions_CPP
#define StructuralFunctions_CPP

// CPP files .h file
#include "StructuralFunctions.h"

// Redefine vars if needed


// Start of program
void StartFunction() {
    Time::FillValuesForLoading();
    Log::SetupLog();
}

void LoopFunction() {
    LimitedFunction::ResetAllLimitedFunctions();
    Keyboard::CallAllKeyboardFunctionsIfKeyIsPressed();
    Time::ComupteDeltaTime();
    Log::UpdateCounters();
    Log::OutputDataToFile();
}

#endif