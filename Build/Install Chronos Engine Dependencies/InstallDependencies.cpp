// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef InstallDependencies_cpp
#define InstallDependencies_cpp

// Included file
#include <cstdlib>
#include <iostream>
#include <vector>

// Other included Libraries


// Redefine vars if needed


// Start of program
#ifdef _WIN32
    std::vector<char*> WindowsCommands(bool UseMyInformationForTraining) {
        std::vector<char*> Return;

        // Installing dependencies 
        // Install CMake
        // Install MSYS2
        // Install G++
        // Install Git
        // Install XGWigets 
        // Install SDL
        // Install Vulcan
        if(UseMyInformationForTraining) {
            // Install FFMPEG
            // Install upscayl-ncnn
        }

        return Return;
    }
#elif __linux__
    std::vector<char*> LinuxCommands(bool UseMyInformationForTraining) {
        std::vector<char*> Return;

        // Installing dependencies 
        // Install CMake
        // Install MSYS2
        // Install G++
        // Install Git
        // Install XGWigets 
        // Install SDL
        // Install Vulcan
        if(UseMyInformationForTraining) {
            // Install FFMPEG
            // Install upscayl-ncnn
        }
        

        return Return;
    }
#elif __APPLE__ || __MACH__
    std::vector<char*> MacCommands(bool UseMyInformationForTraining) {
        std::vector<char*> Return;

        // Installing dependencies 
        // Install CMake
        // Install MSYS2
        // Install G++
        // Install Git
        // Install XGWigets 
        // Install SDL
        // Install Vulcan
        if(UseMyInformationForTraining) {
            // Install FFMPEG
            // Install upscayl-ncnn
        }
        

        return Return;
    }
#elif __ANDROID__
    std::vector<char*> AndroidCommands() {
        std::vector<char*> Return;

        // Installing dependencies 
        // Install CMake
        // Install MSYS2
        // Install G++
        // Install Git
        // Install XGWigets 
        // Install SDL
        // Install Vulcan
        

        return Return;
    }
#elif __APPLE__ && __IPHONE_OS_VERSION_MIN_REQUIRED
    std::vector<char*> IOSCommands() {
        std::vector<char*> Return;

        // Installing dependencies 
        // Install CMake
        // Install MSYS2
        // Install G++
        // Install Git
        // Install XGWigets 
        // Install SDL
        // Install Vulcan
        

        return Return;
    }
#else
    std::cout << "This program will not work" 
#endif

int main() {
    // Command to be executed
    char* Commands[] = {};
    bool UseInfoForTraining;

    

    #ifdef _WIN32
        auto WindowsCmds = WindowsCommands(UseInfoForTraining);
        for (size_t i = 0; i < WindowsCmds.size(); ++i) {
            Commands[i] = WindowsCmds[i];
        }
    #elif __linux__
        auto LinuxCmds = LinuxCommands(UseInfoForTraining);
        for (size_t i = 0; i < LinuxCmds.size(); ++i) {
            Commands[i] = LinuxCmds[i];
        }
    #elif __APPLE__ || __MACH__
        auto MacCmds = MacCommands(UseInfoForTraining);
        for (size_t i = 0; i < MacCmds.size(); ++i) {
            Commands[i] = MacCmds[i];
        }
    #elif __ANDROID__
        auto AndroidCmds = AndroidCommands();
        for (size_t i = 0; i < AndroidCmds.size(); ++i) {
            Commands[i] = AndroidCmds[i];
        }
    #elif __APPLE__ && __IPHONE_OS_VERSION_MIN_REQUIRED
        auto IOSCmds = IOSCommands();
        for (size_t i = 0; i < IOSCmds.size(); ++i) {
            Commands[i] = IOSCmds[i];
        }
    #else
        return 0;
    #endif

    for(char* Command : Commands) {
        int Result = std::system(Command);
    
        // Check if the command was executed successfully
        if (Result == 0) {
            std::cout << "Command executed successfully" << std::endl;
        } else {
            std::cout << "Command did not execute successfully. The command was : " + std::to_string(*Command) + "." << std::endl;
        }
    }

    return 0;
}

#endif