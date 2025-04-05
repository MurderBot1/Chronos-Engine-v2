// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef Main_CPP
#define Main_CPP

// Included file
#include "StructuralFunctions.h"

// Redefine vars if needed


// Start of program
int main() {
    StartFunction();
    while(Exit::ExitTheMainLoop == false) {
        LoopFunction();
    }
    return 1;
}

#endif