// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

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
    if(this->MaxCallPerFrame > CalledThisFrame) {
        this->Function();
        this->CalledThisFrame =+ 1;
    } else {
        std::cout << "Max calls reached on a LimitedFunction();" << std::endl;
    }
}

#endif