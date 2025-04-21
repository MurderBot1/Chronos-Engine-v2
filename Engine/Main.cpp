// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Main_CPP
#define Main_CPP

// Included file
#include "StructuralFunctions.h"
#include <iostream>

// Other included Libraries


// Redefine vars if needed


// Start of program
int main() {
    StartFunction();
    Settings::MaxFPS = 120;
    while(Exit::ExitTheMainLoop == false) {
        LoopFunction();
    }
    return 1;
}

#endif