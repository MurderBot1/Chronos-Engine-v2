// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Exit_CPP
#define Exit_CPP

// Include the C++'s .h file
#include "Exit.h"

// Variable redefinitions
bool Exit::ExitTheMainLoop;

void Exit::StartUpExit() {
    Exit::ExitTheMainLoop = false;
}

// Definitions
void Exit::ExitTheProgram() {
    Exit::ExitTheMainLoop = true;
}

#endif