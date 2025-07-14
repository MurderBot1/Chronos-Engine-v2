// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Main_CPP
#define Main_CPP

// Included file
#include "StructuralFunctions.h"

// Other included Libraries


// Variable redefinitions


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int) {
    GameWindowWindows win1(hInstance, L"Window One", 100, 100, 400, 300);
    win1.SetupWindow();
    win1.UpdateWindow();  // Shared message loop
    std::cin.get();
    return 0;
}

// Definitions
/*
int main(int argc, char* argv[]) {
    StructuralFunctions Start(argc, argv);
}
*/
#endif