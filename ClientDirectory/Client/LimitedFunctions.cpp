// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef LimitedFunctions_CPP
#define LimitedFunctions_CPP

// Include the C++'s .h file
#include "LimitedFunctions.h"

// Variable redefinitions
std::vector<LimitedFunction*> LimitedFunction::AllLimitedFunctions;

// Definitions
void LimitedFunction::ResetAllLimitedFunctions() {
    for (const auto& Function : LimitedFunction::AllLimitedFunctions){
        Function->CalledThisFrame = 0;
    }
}

void LimitedFunction::RunFunction() {
    if (!(this->MaxCallPerFrame > CalledThisFrame)) {
        Log::AddErrorLog("Max calls reached on a LimitedFunction();");
    }
    this->Function();
    this->CalledThisFrame =+ 1;
}

#endif