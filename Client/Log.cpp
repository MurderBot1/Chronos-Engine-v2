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

// Definitions
void Log::SetupLog(std::string LogSettingsFile) {
    constexpr int NumLines = LogValues::LINES_IN_LOG_SETUP_FILE;
    std::ifstream SettingsFile(LogSettingsFile);
    std::array<std::string, NumLines> Lines;
    std::string Line;
    size_t Index = INDEX_START;

    if(!SettingsFile.is_open()) {return;};

    while (std::getline(SettingsFile, Line) && Index < NumLines) {
        Lines[Index++] = Line;
    }

    Log::EveryXFrames = std::stoi(Lines[0]);
    Log::OutputFilePath = Lines[1];
}

template <typename T>
std::string Log::FunctionNameToString(T Func) {
    return typeid(Func).name();
}

void Log::OutputDataToFile() {
    // Check if correct number of frames have passed
    if(!(Log::FramesSinceLastAdd == Log::EveryXFrames)) {return;}

    // Open the file
    std::ofstream OutFile(Log::OutputFilePath + Time::WhenProgramStart + "LogFile" + std::to_string(Log::NumLogFiles) + ".ChronosLog");
    
    // Check if the file is open
    if (!OutFile.is_open()) {
        std::cout << "Error with : " + Log::OutputFilePath + Time::WhenProgramStart + "LogFile" + std::to_string(Log::NumLogFiles) + ".txt\n";
        return;
    }

    // Calculate the average FPS
    __float128 FPSTotal;
    for(const auto& FPS : Log::FPS) {
        FPSTotal += FPS;
    }
    FPSTotal = FPSTotal / Log::FPS.size();

    // Convert the __float128 for printing
    long double castValue = static_cast<long double>(FPSTotal);
    std::ostringstream oss;
    oss.precision(36);
    oss << castValue;

    // Output all of the information to the .ChronosLog file
    OutFile << "FPS = " + oss.str() << " (Over " + std::to_string(Log::EveryXFrames) + " frames)\n";

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
}

void Log::UpdateCounters() {
    Log::FramesSinceLastAdd += 1;
    Log::FPS.push_back(Time::FPS);
}

#endif