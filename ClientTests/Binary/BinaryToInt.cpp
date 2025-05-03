// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef BinaryToInt_CPP
#define BinaryToInt_CPP

// Include the C++'s .h file
#include "./Client/Binary.h"

// Include c++ files
#include <iostream>
#include <string>

// Definitions
int main() {
    const std::string Input = "00111100111111101111010001010110";
    const int ExpectedOutput = 1023341654;
    int EquationOutput = FromBinary::BinaryToInt(Input);

    if(ExpectedOutput == EquationOutput) {
        std::cout << "Test : FloatToBinaryString(); in Client/Binary.h - Passed\n";
    } else {
        std::cout << "Test : FloatToBinaryString(); in Client/Binary.h - Failed !!!\n";
        std::cout << "    Details : Input given is " << Input << "\n";
        std::cout << "    Details : Expected output is " << ExpectedOutput << "\n";
        std::cout << "    Details : Functions output is " << EquationOutput << "\n";
    }

    return 1;
}

#endif