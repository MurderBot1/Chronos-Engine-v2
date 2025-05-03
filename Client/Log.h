// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Log_H
#define Log_H

// C++ imported files
#include <string>
#include <vector>
#include <typeinfo>
#include <fstream>
#include <numeric>
#include <quadmath.h>
#include <array>

// Program imported files
#include "Time.h"
#include "Constants.h"

// Definitions
class Log {
    public:
        // Data
        static int FramesSinceLastAdd;
        static int NumLogFiles;
        // Outputs
        static std::vector<float> FPS;
        static std::vector<std::string> Errors;
        static std::vector<std::string> InfoOutputs;
        // Inputs from settings file
        static std::string OutputFilePath;
        static int EveryXFrames;

        // Functions
        static void SetupLog(std::string LogSettingsFile);
        template <typename T>
        static std::string FunctionNameToString(T Func);
        static void OutputDataToFile();
        static void UpdateCounters();
};

#endif

