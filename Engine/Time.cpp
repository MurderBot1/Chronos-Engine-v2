// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef Time_CPP
#define Time_CPP

// CPP files .h file
#include "Time.h"
#include <iostream>

// Redefine vars if needed
int64_t Time::CurrentTimeInMicroS;
int64_t Time::LastFramesTimeInMicroS;
int64_t Time::DifferenceOfTimeInMicroS;
float Time::DeltaTime;
float Time::FPS;

// Start of program
int64_t Time::FindCurrentTime() {
    auto Now = std::chrono::high_resolution_clock::now();
    auto Microseconds = std::chrono::duration_cast<std::chrono::microseconds>(Now.time_since_epoch()).count();
    return Microseconds;
}

void Time::ComupteDeltaTime() {
    Time::LastFramesTimeInMicroS = Time::CurrentTimeInMicroS;
    Time::CurrentTimeInMicroS = Time::FindCurrentTime();
    Time::DifferenceOfTimeInMicroS = Time::CurrentTimeInMicroS - Time::LastFramesTimeInMicroS;
    Time::DeltaTime = static_cast<float>(Time::DifferenceOfTimeInMicroS) / 1000000;
    Time::FPS = 1/Time::DeltaTime;
}

void Time::FillValuesForLoading() {
    Time::CurrentTimeInMicroS = Time::FindCurrentTime() - 10;
    Time::LastFramesTimeInMicroS = 0;
    Time::DifferenceOfTimeInMicroS = 0;
    Time::DeltaTime = 0;
    Time::FPS = 0;
}

#endif