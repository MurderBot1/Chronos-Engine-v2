// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef FrameDebugger_H
#define FrameDebugger_H

// C++ imported files
#include <string>
#include <filesystem>
#include <mutex>
#include <memory>
#include <vector>

// Program imported files
#include "Scene.h"
#include "Args.h"
#include "Game.h"
#include "Time.h"

// Definitions
class FrameDebug {
    public:
        static void SetupFrameDebugger();
        static void SaveFrameData();
    private:
        static std::string OutputPath;
        static int CurrentFrame;
};

#endif