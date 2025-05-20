// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Args_H
#define Args_H

// C++ imported files
#include <string>
#include <iostream>
#include <string_view>
#include <vector>
#include <map>
#include <array>

// Program imported files
#include "Exit.h"

// Definitions
class Args {
    public:
        static void LoadArgs(int argc, char* argv[]);
        static std::string_view Game;
        static std::string_view Save;
        static bool Debug;
        static int Frames;
        static bool UseFrames;
};

#endif