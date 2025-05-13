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
#include <array>
#include <mutex>
#include <shared_mutex>

// Program imported files
#include "Time.h"
#include "Constants.h"
#include "Args.h"

// Definitions
class Log {
    private:
        // Data
        static int FramesSinceLastAdd;
        static int NumLogFiles;
        // Outputs
        static std::vector<float> FPS;
        static std::vector<std::string> Errors;
        static std::vector<std::string> InfoOutputs;
        // Mutex
        static std::mutex FPS_MX;
        static std::mutex Errors_MX;
        static std::mutex InfoInputs_MX;
        // Inputs from settings file
        static std::string OutputFilePath;
        static int EveryXFrames;

    public:
        // Functions
        static void SetupLog(const std::string& LogSettingsFile);
        template <typename T>
        static std::string FunctionNameToString(T Func);
        static void OutputDataToFile();
        static void UpdateCounters();
        static std::vector<float> ReturnFPSList();
        static std::vector<std::string> ReturnErrorList();
        static std::vector<std::string> ReturnInfoList();
        static void AddFPSLog(float FPS);
        static void AddErrorLog(const std::string& Error);
        static void AddInfoLog(const std::string& Data);
};

#endif

