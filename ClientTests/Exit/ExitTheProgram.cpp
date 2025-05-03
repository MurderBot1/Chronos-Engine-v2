// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef IntToBinary_CPP
#define IntToBinary_CPP

// Include the C++'s .h file
#include "./Client/Exit.h"

// Include c++ files
#include <iostream>
#include <string>

// Definitions
int main() {
    Exit exit = Exit();
    Exit::ExitTheProgram();

    if(Exit::ExitTheMainLoop == true) {
        std::cout << "Test : FloatToBinaryString(); in Client/Exit.h - Passed\n";
    } else {
        std::cout << "Test : FloatToBinaryString(); in Client/Exit.h - Failed !!!\n";
        std::cout << "    Test : FloatToBinaryString(); in Client/Exit.h - Failed !!!\n";
    }

    return 1;
}

#endif