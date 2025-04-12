// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef Log_H
#define Log_H

// C++ imported files
#include <string>
#include <vector>
#include <typeinfo>
#include <fstream>
#include <numeric>

// Program imported files
#include "time.h"

// Function definitions
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
        static void SetupLog();
        template <typename T>
        static std::string FunctionNameToString(T func);
        static void OutputDataToFile();
        static void UpdateCounters();
};

#endif

