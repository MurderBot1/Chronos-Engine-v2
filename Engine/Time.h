// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef Time_H
#define Time_H

// C++ imported files
#include <stdint.h>
#include <chrono>

// Program imported files


// Function definitions
class Time {
    public:
        static int64_t CurrentTimeInMicroS;
        static int64_t LastFramesTimeInMicroS;
        static int64_t DifferenceOfTimeInMicroS;
        static float DeltaTime;
        static float FPS;

        static int64_t FindCurrentTime();
        static void ComupteDeltaTime();
        static void FillValuesForLoading();
};

#endif