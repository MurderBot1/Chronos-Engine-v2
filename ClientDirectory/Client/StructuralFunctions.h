// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef StructuralFunctions_H
#define StructuralFunctions_H

// C++ imported files
#include <iostream>

// Program imported files
#include "Exit.h"
#include "Time.h"
#include "Keyboard.h"
#include "LimitedFunctions.h"
#include "Constants.h"
#include "Args.h"
#include "Game.h"

// Definitions
class StructuralFunctions {
    public:
        StructuralFunctions(int argc, char* argv[]);
        static void LoopFunctions();
        static void StartLoop();
        ~StructuralFunctions();
};

#endif