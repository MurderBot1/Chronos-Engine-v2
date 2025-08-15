// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Main_CPP
#define Main_CPP

// Included file
#include "StructuralFunctions.h"

// Other included Libraries


// Variable redefinitions

#ifdef _WIN32
    #include <windows.h>
    #include <shellapi.h>

    int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
        // Quiet
        (void)hInstance;
        (void)hPrevInstance;
        (void)lpCmdLine;
        (void)nShowCmd;

        // Get the args
        int argc;
        LPWSTR* argvW = CommandLineToArgvW(GetCommandLineW(), &argc);
        
        // Convert the LPWSTR to a simple char*[]
        std::vector<std::string> argvVec;
        std::vector<char*> argvA;
        for (int i = 0; i < argc; ++i) {
            int len = WideCharToMultiByte(CP_UTF8, 0, argvW[i], -1, nullptr, 0, nullptr, nullptr);
            std::string argA(len, 0);
            WideCharToMultiByte(CP_UTF8, 0, argvW[i], -1, &argA[0], len, nullptr, nullptr);
            argvVec.push_back(argA);
        }
        for (auto& s : argvVec) argvA.push_back(&s[0]);
        
        // Call the main loop
        StructuralFunctions Start(argc, argvA.data());
        
        return 0;
    }

#elif __linux__
int main(int argc, char* argv[]) {
    StructuralFunctions Start(argc, argv);
}
#elif __APPLE__
int main(int argc, char* argv[]) {
    StructuralFunctions Start(argc, argv);
}
#else
#endif

// Definitions

#endif