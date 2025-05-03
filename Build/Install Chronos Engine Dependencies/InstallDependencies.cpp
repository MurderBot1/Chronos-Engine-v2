// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef InstallDependencies_cpp
#define InstallDependencies_cpp

// Included file
#include <cstdlib>
#include <iostream>
#include <vector>

// Other included Libraries


// Variable redefinitions


// Definitions
#ifdef _WIN32
    std::vector<std::string> WindowsCommands(bool UseMyInformationForTraining) {
        std::vector<std::string> Return;

        // Installing dependencies 
        // Install CMake
        // Install MSYS2
        // Install G++
        // Install Git
        // Install XGWigets 
        // Install SDL
        // Install Vulcan
        // Install OpenSSL
        if(UseMyInformationForTraining) {
            // Install FFMPEG
            // Install upscayl-ncnn
        }

        return Return;
    }
#elif __linux__
    std::vector<std::string> LinuxCommands(bool UseMyInformationForTraining) {
        std::vector<std::string> Return;

        // Installing dependencies 
        // Install CMake
        // Install MSYS2
        // Install G++
        // Install Git
        // Install XGWigets 
        // Install SDL
        // Install Vulcan
        // Install OpenSSL
        if(UseMyInformationForTraining) {
            // Install FFMPEG
            // Install upscayl-ncnn
        }
        

        return Return;
    }
#elif __APPLE__ || __MACH__
    std::vector<std::string> MacCommands(bool UseMyInformationForTraining) {
        std::vector<std::string> Return;

        // Installing dependencies 
        // Install CMake
        // Install MSYS2
        // Install G++
        // Install Git
        // Install XGWigets 
        // Install SDL
        // Install Vulcan
        // Install OpenSSL
        if(UseMyInformationForTraining) {
            // Install FFMPEG
            // Install upscayl-ncnn
        }
        

        return Return;
    }
#elif __ANDROID__
    std::vector<std::string> AndroidCommands() {
        std::vector<std::string> Return;

        // Installing dependencies 
        // Install CMake
        // Install MSYS2
        // Install G++
        // Install Git
        // Install XGWigets 
        // Install SDL
        // Install Vulcan
        // Install OpenSSL
        

        return Return;
    }
#elif __APPLE__ && __IPHONE_OS_VERSION_MIN_REQUIRED
    std::vector<std::string> IOSCommands() {
        std::vector<std::string> Return;

        // Installing dependencies 
        // Install CMake
        // Install MSYS2
        // Install G++
        // Install Git
        // Install XGWigets 
        // Install SDL
        // Install Vulcan
        // Install OpenSSL
        

        return Return;
    }
#else
    std::cout << "This program will not work" 
#endif

int main() {
    // Command to be executed
    std::vector<std::string> Commands;
    bool UseInfoForTraining;

    

    #ifdef _WIN32
        auto WindowsCmds = WindowsCommands(UseInfoForTraining);
        for (const auto& Command : WindowsCmds) {
            Commands.push_back(Command);
        }
    #elif __linux__
        auto LinuxCmds = LinuxCommands(UseInfoForTraining);
        for (const auto& Command : LinuxCmds) {
            Commands.push_back(Command);
        }
    #elif __APPLE__ || __MACH__
        auto MacCmds = MacCommands(UseInfoForTraining);
        for (const auto& Command : MacCmds) {
            Commands.push_back(Command);
        }
    #elif __ANDROID__
        auto AndroidCmds = AndroidCommands();
        for (const auto& Command : AndroidCmds) {
            Commands.push_back(Command);
        }
    #elif __APPLE__ && __IPHONE_OS_VERSION_MIN_REQUIRED
        auto IOSCmds = IOSCommands();
        for (const auto& Command : IOSCmds) {
            Commands.push_back(Command);
        }
    #else
        return 0;
    #endif

    for(const auto& Command : Commands) {
        int Result = std::system(Command.data());
    
        // Check if the command was executed successfully
        if (Result == 0) {
            std::cout << "Command executed successfully\n";
        } else {
            std::cout << "Command did not execute successfully. The command was : " + Command + ".\n";
        }
    }

    return 0;
}

#endif