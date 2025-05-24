// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Log_CPP
#define Log_CPP

// Include the C++'s .h file
#include "Log.h"

// Variable redefinitions
std::vector<std::string> Log::InfoOutputs;
std::vector<std::string> Log::Errors;
int Log::NumLogFiles;
int Log::FramesSinceLastAdd;
int Log::EveryXFrames;
std::string Log::OutputFilePath;
std::vector<float> Log::FPS;
std::mutex Log::FPSMX;
std::mutex Log::ErrorsMX;
std::mutex Log::InfoInputsMX;

// Definitions
void Log::SetupLog() {   
    constexpr int NumLines = LogValues::LINES_IN_LOG_SETUP_FILE;
    std::ifstream SettingsFile(CurrentPath.string() + "\\" + std::string{Args::Game} + "\\Settings\\Logs\\LogSettings.txt");
    std::array<std::string, NumLines> Lines;
    std::string Line;
    size_t Index = INDEX_START;

    if(!SettingsFile.is_open()) {
        // Set the defaults
        Log::EveryXFrames = 100;
        Log::OutputFilePath = "";

        FPS.reserve(100);

        // Exit the function
        return;
    };

    while (std::getline(SettingsFile, Line) && Index < NumLines) {
        Lines[Index++] = Line;
    }

    Log::EveryXFrames = std::stoi(Lines[0]);
    Log::OutputFilePath = CurrentPath.string() + "\\" + std::string{Args::Game} + Lines[1];
    FPS.reserve(EveryXFrames);

    // Create log paths
    std::filesystem::create_directory(Log::OutputFilePath);
    std::filesystem::create_directory(Log::OutputFilePath + "VisualRenderer\\");
}

template <typename T>
std::string Log::FunctionNameToString(T Func) {
    return typeid(Func).name();
}

void Log::OutputDataToFile() {
    // Check if correct number of frames have passed
    if(!(Log::FramesSinceLastAdd == Log::EveryXFrames)) {return;}

    // Open the file
    std::ofstream OutFile(Log::OutputFilePath + Time::GetWhenProgramStart() + "LogFile" + std::to_string(Log::NumLogFiles) + ".ChronosLog");
    
    // Check if the file is open
    if (!OutFile.is_open()) {
        std::cout << "Error with : " + Log::OutputFilePath + Time::GetWhenProgramStart() + "LogFile" + std::to_string(Log::NumLogFiles) + ".ChronosLog\n";
        return;
    }

    // Calculate the average FPS
    double FPSTotal = 0;
    for(const auto& FPS : Log::FPS) {
        FPSTotal += FPS;
    }
    FPSTotal = FPSTotal / Log::FPS.size();

    // Output all of the information to the .ChronosLog file
    OutFile << "FPS = " + std::to_string(FPSTotal) << " (Over " + std::to_string(Log::EveryXFrames) + " frames)\n";

    for(const auto& Error : Log::Errors) {
        OutFile << Error + "\n";
    }

    for(const auto& INFO : Log::InfoOutputs) {
        OutFile << INFO + "\n";
    }

    // Clear all of the variables to restart the cycle
    OutFile.close();
    Log::FramesSinceLastAdd = 0;
    Log::NumLogFiles += 1;
    Log::InfoOutputs.clear();
    Log::Errors.clear();
    Log::FPS.clear();
    Log::Errors.reserve(500);
    Log::InfoOutputs.reserve(500);
}

void Log::UpdateCounters() {
    Log::FramesSinceLastAdd += 1;
    std::lock_guard<std::mutex> lock(Log::FPSMX);
    Log::FPS.push_back(Time::GetFPS());
}

std::vector<float> Log::ReturnFPSList() {
    std::lock_guard<std::mutex> lock(Log::FPSMX);
    const std::vector<float> Output = Log::FPS;
    return Output;
}

std::vector<std::string> Log::ReturnErrorList() {
    std::lock_guard<std::mutex> lock(Log::ErrorsMX);
    const std::vector<std::string> Output = Log::Errors;
    return Output;
}

std::vector<std::string> Log::ReturnInfoList() {
    std::lock_guard<std::mutex> lock(Log::InfoInputsMX);
    const std::vector<std::string> Output = Log::InfoOutputs;
    return Output;
}

void Log::AddFPSLog(float FPS) {
    std::lock_guard<std::mutex> lock(Log::FPSMX);
    Log::FPS.emplace_back(FPS);
}

void Log::AddErrorLog(const std::string& Error) {
    std::lock_guard<std::mutex> lock(Log::ErrorsMX);
    Log::Errors.emplace_back(Error);
}

void Log::AddInfoLog(const std::string& Data) {
    std::lock_guard<std::mutex> lock(Log::InfoInputsMX);
    Log::InfoOutputs.emplace_back(Data);
}

#endif