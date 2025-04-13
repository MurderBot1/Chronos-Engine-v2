// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef Log_CPP
#define Log_CPP

// CPP files .h file
#include "Log.h"

// Redefine vars if needed
std::vector<std::string> Log::InfoOutputs;
std::vector<std::string> Log::Errors;
int Log::NumLogFiles;
int Log::FramesSinceLastAdd;
int Log::EveryXFrames;
std::string Log::OutputFilePath;
std::vector<float> Log::FPS;

// Start of program
void Log::SetupLog() {
    std::ifstream SettingsFile("./Engine/Logs/Settings/LogSettings.txt");
    if(SettingsFile.is_open()) {
        std::vector<std::string> SettingsFileLines;
        std::string Line;

        while (getline(SettingsFile, Line)) {
            SettingsFileLines.push_back(Line);
        }

        Log::EveryXFrames = std::stoi(SettingsFileLines[0]);
        Log::OutputFilePath = SettingsFileLines[1];
    }
}

template <typename T>
std::string Log::FunctionNameToString(T func) {
    return typeid(func).name();
}

void Log::OutputDataToFile() {
    if(Log::FramesSinceLastAdd == Log::EveryXFrames) {
        std::ofstream OutFile(Log::OutputFilePath + Time::WhenProgramStart + "LogFile" + std::to_string(Log::NumLogFiles) + ".txt");
        
        if (OutFile.is_open()) {
            OutFile << "FPS = " + std::to_string(std::accumulate(Log::FPS.begin(), Log::FPS.end(), 0)/Log::FPS.size()) << " (Over " + std::to_string(Log::EveryXFrames) + " frames)\n";

            for(std::string Error : Log::Errors) {
                OutFile << Error + "\n";
            }

            for(std::string INFO : Log::InfoOutputs) {
                OutFile <<INFO + "\n";
            }
        }

        OutFile.close();
        Log::FramesSinceLastAdd = 0;
        Log::NumLogFiles += 1;
        Log::InfoOutputs.clear();
        Log::Errors.clear();
        Log::FPS.clear();
    }
}

void Log::UpdateCounters() {
    Log::FramesSinceLastAdd += 1;
    Log::FPS.push_back(Time::FPS);
}

#endif