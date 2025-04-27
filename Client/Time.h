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

// Program imported files
#include "Settings.h"

// Function definitions
class Time {
    public:
        static int64_t CurrentTimeInMicroS;
        static int64_t LastFramesTimeInMicroS;
        static int64_t DifferenceOfTimeInMicroS;
        static float DeltaTime;
        static float FPS;
        static std::string WhenProgramStart;

        static int64_t FindCurrentTime();
        static void ComupteDeltaTime();
        static void FillValuesForLoading();
        static std::string GetMDYHMS();
        static void Sleep();
    };

#endif