// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef IntToBinary_CPP
#define IntToBinary_CPP

// Include the C++'s .h file
#include "../../Client/Exit.h"

// Include c++ files
#include <iostream>
#include <string>

// Definitions
int main() {
    Exit::StartUpExit();
    Exit::ExitTheProgram();
    if(Exit::IsExit() == true) {
        std::cout << "Test : ExitTheProgram(); in Client/Exit.h - Passed\n";
    } else {
        std::cout << "Test : ExitTheProgram(); in Client/Exit.h - Failed !!!\n";
        std::cout << "    Details : Expected output was true\n";
    }

    return 1;
}

#endif