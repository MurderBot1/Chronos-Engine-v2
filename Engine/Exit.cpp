// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef Exit_CPP
#define Exit_CPP

// CPP files .h file
#include "Exit.h"

// Redefine vars if needed
bool Exit::ExitTheMainLoop;

// Start of program
void ExitTheProgram() {
    Exit::ExitTheMainLoop = true;
}

#endif