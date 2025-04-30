// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef LimitedFunctions_CPP
#define LimitedFunctions_CPP

// CPP files .h file
#include "LimitedFunctions.h"

// Redefine vars if needed
std::vector<LimitedFunction*> LimitedFunction::AllLimitedFunctions;

// Start of program
void LimitedFunction::ResetAllLimitedFunctions() {
    for (LimitedFunction* Function : LimitedFunction::AllLimitedFunctions){
        Function->CalledThisFrame = 0;
    }
}

void LimitedFunction::RunFunction() {
    if(this->MaxCallPerFrame >! CalledThisFrame) {
        Log::Errors.push_back("Max calls reached on a LimitedFunction();");
    }
    this->Function();
    this->CalledThisFrame =+ 1;
}

#endif