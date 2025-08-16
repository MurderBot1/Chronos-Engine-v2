// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Args_CPP
#define Args_CPP

// Include the C++'s .h file
#include "Args.h"
#ifdef _WIN32
    #include <windows.h>
    #include <shellapi.h>
 #elif __linux__
#elif __APPLE__
#else
#endif

// Variable redefinitions
std::string Args::Game;
std::string Args::Save;
bool Args::Debug;
int Args::Frames;
bool Args::UseFrames;
bool Args::UseFrameDebug;

std::vector<std::string> Args::ArgDecoder() {
    #ifdef _WIN32
        int argc;
        LPWSTR* argvW = CommandLineToArgvW(GetCommandLineW(), &argc);

        std::vector<std::string> argvVec;
        for (int i = 0; i < argc; ++i) {
            int len = WideCharToMultiByte(CP_UTF8, 0, argvW[i], -1, nullptr, 0, nullptr, nullptr);
            std::string argA(len - 1, 0); // -1 to exclude null terminator
            WideCharToMultiByte(CP_UTF8, 0, argvW[i], -1, &argA[0], len, nullptr, nullptr);
            argvVec.push_back(argA);
        }
        return argvVec;

    #elif __linux__
    #elif __APPLE__
    #else
    #endif
}

// Definitions
void Args::LoadArgs() {
    std::vector<std::string> argv = Args::ArgDecoder();
    int argc = argv.size();

    // Parse in to std::string
    std::vector<std::string> ListOfArgs;
    ListOfArgs.reserve(argc - 1);
    
    for(int i = 1; i < argc; ++i) { // This skips the first arg which is the EXE files name
        ListOfArgs.emplace_back(argv[i]);
    }
    
    if(ListOfArgs.size() % 2 == 1) {
        std::cout << "Removing the last argumnent because there is no match for it. The argument is : " << ListOfArgs[ListOfArgs.size() - 1] << ".\n";
        ListOfArgs.pop_back();
    }

    // Turn the list of args in to pairs
    std::vector<std::pair<std::string, std::string>> ArgListWithMatchingValue;
    ArgListWithMatchingValue.reserve(ListOfArgs.size() / 2);

    for(int i = 0; i < static_cast<int>(ListOfArgs.size()); i += 2) {
        ArgListWithMatchingValue.emplace_back(std::make_pair(ListOfArgs[i], ListOfArgs[i + 1]));
    }

    // Assign to variable
    const std::array<std::string, 5> CompilerArgs = {
        "--game",
        "--save",
        "--debug",
        "--frames",
        "--useframedebug"
    };

    Args::Debug = false;
    Args::UseFrameDebug = false;
    Args::UseFrames = false;

    for(std::pair<std::string, std::string> CurrentArgToDecode : ArgListWithMatchingValue) {
        if(CurrentArgToDecode.first == CompilerArgs[0]) { // --game
            Args::Game = CurrentArgToDecode.second;
        } else if (CurrentArgToDecode.first == CompilerArgs[1]) { // --save
            Args::Save = CurrentArgToDecode.second;
        } else if (CurrentArgToDecode.first == CompilerArgs[2]) { // --debug
            if(CurrentArgToDecode.second == "0") {
                Args::Debug = false;
            } else {
                Args::Debug = true;
            }
        } else if (CurrentArgToDecode.first == CompilerArgs[3]) { // -- frames
            Args::Frames = std::stoi(std::string{CurrentArgToDecode.second});
            Args::UseFrames = true;
        } else if (CurrentArgToDecode.first == CompilerArgs[4]) { // --useframedebug
            if(CurrentArgToDecode.second == "true") {
                Args::UseFrameDebug = true;
            } else {
                Args::UseFrameDebug = false;
            }
        } else if (false) { // Placeholder for future args

        } else {
            Exit::ExitTheProgram();
            std::cout << CurrentArgToDecode.first << " is not a valid argument\n";
        }
    }
}

void Args::DeIncrementFrames() {
    if(!Frames) {return;} 
    if(Frames > 1) {
        Frames--;
        return;
    }

    Exit::ExitTheProgram();
}

#endif