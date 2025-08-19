// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Main_CPP
#define Main_CPP

// Included file
#include "StructuralFunctions.h"

// Other included Libraries


// Variable redefinitions

#ifdef Windows
    int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
        // Quiet
        (void)hInstance;
        (void)hPrevInstance;
        (void)lpCmdLine;
        (void)nShowCmd;

        // Call the main loop
        StructuralFunctions Start;
        
        return 0;
    }

#elif Linux
int main(int argc, char* argv[]) {
    StructuralFunctions Start();
}
#elif Mac
int main(int argc, char* argv[]) {
    StructuralFunctions Start();
}
#else
#endif

// Definitions

#endif