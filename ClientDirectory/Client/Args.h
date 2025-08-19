// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Args_H
#define Args_H

// C++ imported files
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <array>

// Program imported files
#include "Exit.h"
#include "Constants.h"

// Definitions
class Args {
    public:
        static std::vector<std::string> ArgDecoder();
        static void LoadArgs();
        static void DeIncrementFrames();
        static std::string Game;
        static std::string Save;
        static bool Debug;
        static int Frames;
        static bool UseFrames;
        static bool UseFrameDebug;
};

#endif