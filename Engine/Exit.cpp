// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Exit_CPP
#define Exit_CPP

// CPP files .h file
#include "Exit.h"

// Redefine vars if needed
bool Exit::ExitTheMainLoop;

// Start of program
void Exit::ExitTheProgram() {
    Exit::ExitTheMainLoop = true;
}

#endif