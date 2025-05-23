// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Time_H
#define Time_H

// C++ imported files
#include <stdint.h>
#include <chrono>
#include <string>
#include <iomanip>
#include <sstream>
#include <thread>
#include <iostream>
#include <mutex>

// Program imported files
#include "Settings.h"

// Include libs for the proccess id
#ifdef _WIN32
    #include <windows.h>
    #define GET_PROCESS_ID() GetCurrentProcessId()
#else
    #include <unistd.h>
    #define GET_PROCESS_ID() getpid()
#endif

// Definitions
class Time {
    public:
        static void Sleep();
        static uint64_t FindCurrentTime();
        static void ComupteDeltaTime();
        static void FillValuesForLoading();
        static std::string GetMDYHMS();

        static uint64_t GetCurrentTimeInMicroS();
        static uint64_t GetLastFramesTimeInMicroS();
        static uint64_t GetDifferenceOfTimeInMicroS();
        static float GetDeltaTime();
        static float GetFPS();
        static std::string GetWhenProgramStart();
    private:
        static uint64_t CurrentTimeInMicroS;
        static uint64_t LastFramesTimeInMicroS;
        static uint64_t DifferenceOfTimeInMicroS;
        static float DeltaTime;
        static float FPS;
        static std::string WhenProgramStart;
        
        static std::mutex CurrentTimeInMicroS_MX;
        static std::mutex LastFramesTimeInMicroS_MX;
        static std::mutex DifferenceOfTimeInMicroS_MX;
        static std::mutex DeltaTime_MX;
        static std::mutex FPS_MX;
        static std::mutex WhenProgramStart_MX;
};

struct VisualTimeRendererObject {
    uint64_t StartTime;
    uint64_t TotalTime;
    std::string_view TimerName;
    std::thread::id ThreadID;
};

class ScopedTimer {
    public:
        static bool LoadToVisualRenderer;
        static std::string VisualRendererOutput;
        static std::vector<VisualTimeRendererObject> VisualRenderer;

        static std::string VisualRendererPath;
        static std::string BrowserRendererPath;
        

        static void StartVisualRenderer();
        static void UpdateVisualRenderer();

        ScopedTimer();
        ScopedTimer(bool UseLog);
        ScopedTimer(std::string TimerName);
        ScopedTimer(std::string TimerName, bool UseLog);
        ~ScopedTimer();

        bool UseLog;
        std::string_view TimerName;
        uint64_t StartTimeInMicroS;
};

#endif