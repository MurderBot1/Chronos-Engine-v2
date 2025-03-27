// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef Main_CPP
#define Main_CPP

// Included file
#include "StructuralFunctions.h"
#include <iostream>

// Redefine vars if needed


// Start of program
int main() {
    StartFunction();
    std::cout << Time::FindCurrentTime();
    while(Exit::ExitTheMainLoop == false){
        LoopFunction();
    }
    return 1;
}

#endif