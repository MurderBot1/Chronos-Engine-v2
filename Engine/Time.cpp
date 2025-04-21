// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Time_CPP
#define Time_CPP

// CPP files .h file
#include "Time.h"

// Redefine vars if needed
int64_t Time::CurrentTimeInMicroS;
int64_t Time::LastFramesTimeInMicroS;
int64_t Time::DifferenceOfTimeInMicroS;
float Time::DeltaTime;
float Time::FPS;
std::string Time::WhenProgramStart;
int16_t Settings::MaxFPS;

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
    Time::WhenProgramStart = Time::GetMDYHMS();
}

std::string Time::GetMDYHMS() {
    // Get the current time
    std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);

    // Use a stringstream to format the time
    std::stringstream ss;
    ss << std::setfill('0') << std::setw(2) << (localTime->tm_mon + 1) << "M"
       << std::setw(2) << localTime->tm_mday << "D"
       << (localTime->tm_year + 1900) << "Y_"
       << std::setw(2) << localTime->tm_hour << "H_"
       << std::setw(2) << localTime->tm_min << "M_"
       << std::setw(2) << localTime->tm_sec << "S";

    return ss.str();
}

void Time::Sleep() {
    const float MCPF = 1000000/Settings::MaxFPS;
    const int64_t CTIM = Time::CurrentTimeInMicroS;
    const int64_t CTMCTIM = (Time::FindCurrentTime() - Time::CurrentTimeInMicroS);
    const int Delay = MCPF - CTMCTIM;
    auto start = std::chrono::high_resolution_clock::now();
    auto end = start + std::chrono::microseconds(Delay);
    while (std::chrono::high_resolution_clock::now() < end);
}

#endif