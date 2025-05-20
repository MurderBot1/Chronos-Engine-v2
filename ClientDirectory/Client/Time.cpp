// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Time_CPP
#define Time_CPP

// Include the C++'s .h file
#include "Time.h"

// Variable redefinitions
uint64_t Time::CurrentTimeInMicroS;
uint64_t Time::LastFramesTimeInMicroS;
uint64_t Time::DifferenceOfTimeInMicroS;
float Time::DeltaTime;
float Time::FPS;
std::string Time::WhenProgramStart;
bool ScopedTimer::LoadToVisualRenderer;
std::vector<VisualTimeRendererObject> ScopedTimer::VisualRenderer;
std::string ScopedTimer::VisualRendererOutput;
std::string ScopedTimer::VisualRendererPath;
std::string ScopedTimer::BrowserRendererPath;

// Definitions
uint64_t Time::FindCurrentTime() {
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
    if(Settings::SetFPSAtMonitersMax) {
        const double MCPF = 1000000/Settings::MaxFPS;
        const uint64_t CTMCTIM = (Time::FindCurrentTime() - Time::CurrentTimeInMicroS);
        const int Delay = MCPF - CTMCTIM;
        auto start = std::chrono::high_resolution_clock::now();
        auto end = start + std::chrono::microseconds(Delay);
        while (std::chrono::high_resolution_clock::now() < end);
    }
}

void ScopedTimer::StartVisualRenderer(bool Debug, std::string VisualRendererFilePath, std::string VisualRendererFilePathForBrowser) {
    ScopedTimer::LoadToVisualRenderer = Debug;
    ScopedTimer::VisualRenderer.reserve(1000);

    std::ofstream VisualRendererFile(VisualRendererFilePath);
    VisualRendererFile << "";
    VisualRendererFile.close();

    std::ofstream VisualRendererFileForBrowser(VisualRendererFilePathForBrowser);
    VisualRendererFileForBrowser << "{\n    \"traceEvents\": [\n";
    VisualRendererFileForBrowser.close();

    ScopedTimer::VisualRendererPath = VisualRendererFilePath;
    ScopedTimer::BrowserRendererPath = VisualRendererFilePathForBrowser;
}

void ScopedTimer::UpdateVisualRenderer() {
    if(ScopedTimer::LoadToVisualRenderer) {
        std::ofstream VisualRendererFile(ScopedTimer::VisualRendererPath, std::ios::app);

        for(VisualTimeRendererObject CurrentListing : ScopedTimer::VisualRenderer) {
            std::stringstream ss;
            ss << CurrentListing.ThreadID;

            ScopedTimer::VisualRendererOutput += "{\n";
            ScopedTimer::VisualRendererOutput += "    TimerName : " + std::string(CurrentListing.TimerName) + "\n";
            ScopedTimer::VisualRendererOutput += "    StartTime : " + std::to_string(CurrentListing.StartTime) + "\n";
            ScopedTimer::VisualRendererOutput += "    TotalTime : " + std::to_string(CurrentListing.TotalTime) + "\n";
            ScopedTimer::VisualRendererOutput += "    ThreadID : " + ss.str() + "\n";
            ScopedTimer::VisualRendererOutput += "},\n";
        }

        VisualRendererFile << ScopedTimer::VisualRendererOutput;
        VisualRendererFile.close();
        ScopedTimer::VisualRendererOutput = "";

        std::ofstream VisualRendererFileForBrowser(ScopedTimer::BrowserRendererPath, std::ios::app);

        for(VisualTimeRendererObject CurrentListing : ScopedTimer::VisualRenderer) {
            std::stringstream ss;
            ss << CurrentListing.ThreadID;

            auto processID = GET_PROCESS_ID();
            std::stringstream pidss;
            pidss << processID;

            ScopedTimer::VisualRendererOutput += ",\n        {\n";
            ScopedTimer::VisualRendererOutput += "            \"name\": \"" + std::string(CurrentListing.TimerName) + "\",\n";
            ScopedTimer::VisualRendererOutput += "            \"cat\": \"ChronosEngineTimer\",\n";
            ScopedTimer::VisualRendererOutput += "            \"ph\": \"B\",\n";
            ScopedTimer::VisualRendererOutput += "            \"ts\": \"" + std::to_string(CurrentListing.StartTime) + "\",\n";
            ScopedTimer::VisualRendererOutput += "            \"pid\": \"" + pidss.str() + "\",\n";
            ScopedTimer::VisualRendererOutput += "            \"tid\": \"" + ss.str() + "\",\n";
            ScopedTimer::VisualRendererOutput += "            \"args\": {\n";
            ScopedTimer::VisualRendererOutput += "                \"functionName\": \"" + std::string(CurrentListing.TimerName) + "\"\n";
            ScopedTimer::VisualRendererOutput += "            }\n";
            ScopedTimer::VisualRendererOutput += "        },\n";
            ScopedTimer::VisualRendererOutput += "        {\n";
            ScopedTimer::VisualRendererOutput += "            \"name\": \"" + std::string(CurrentListing.TimerName) + "\",\n";
            ScopedTimer::VisualRendererOutput += "            \"cat\": \"ChronosEngineTimer\",\n";
            ScopedTimer::VisualRendererOutput += "            \"ph\": \"E\",\n";
            ScopedTimer::VisualRendererOutput += "            \"ts\": \"" + std::to_string(CurrentListing.TotalTime + CurrentListing.StartTime) + "\",\n";
            ScopedTimer::VisualRendererOutput += "            \"pid\": \"" + pidss.str() + "\",\n";
            ScopedTimer::VisualRendererOutput += "            \"tid\": \"" + ss.str() + "\",\n";
            ScopedTimer::VisualRendererOutput += "            \"args\": {\n";
            ScopedTimer::VisualRendererOutput += "                \"functionName\": \"" + std::string(CurrentListing.TimerName) + "\"\n";
            ScopedTimer::VisualRendererOutput += "            }\n";
            ScopedTimer::VisualRendererOutput += "        }";
        }

        VisualRendererFileForBrowser << ScopedTimer::VisualRendererOutput;
        VisualRendererFileForBrowser.close();

        ScopedTimer::VisualRendererOutput = "";
        ScopedTimer::VisualRenderer.clear();
    }
}

ScopedTimer::ScopedTimer() {
    UseLog = false;
    TimerName = "A function";
    StartTimeInMicroS = Time::FindCurrentTime();
}

ScopedTimer::ScopedTimer(std::string TimerName) {
    UseLog = false;
    this->TimerName = TimerName;
    StartTimeInMicroS = Time::FindCurrentTime();
}

ScopedTimer::ScopedTimer(bool UseLog) {
    this->UseLog = UseLog;
    TimerName = "A function";
    StartTimeInMicroS = Time::FindCurrentTime();
}

ScopedTimer::ScopedTimer(std::string TimerName, bool UseLog) {
    this->UseLog = UseLog;
    this->TimerName = TimerName;
    StartTimeInMicroS = Time::FindCurrentTime();
}

ScopedTimer::~ScopedTimer() {
    uint64_t EndTimeInMicroS = Time::FindCurrentTime();

    if(UseLog) {
        Log::AddInfoLog("CHRONOS TIMER : " + std::string{TimerName} + " took " + std::to_string(EndTimeInMicroS - StartTimeInMicroS) + " microseconds to execute");
    } else {
        std::cout << "CHRONOS TIMER : " << TimerName << " took " << (EndTimeInMicroS - StartTimeInMicroS) << " microseconds to execute\n";
    }

    if(LoadToVisualRenderer) {
        VisualTimeRendererObject TempObject;

        TempObject.TimerName = TimerName;
        TempObject.StartTime = StartTimeInMicroS;
        TempObject.TotalTime = EndTimeInMicroS - StartTimeInMicroS;
        TempObject.ThreadID = std::this_thread::get_id();

        ScopedTimer::VisualRenderer.emplace_back(TempObject);
    }
}

#endif