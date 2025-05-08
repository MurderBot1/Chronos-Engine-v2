// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef BinaryToFloat_CPP
#define BinaryToFloat_CPP

// Include the C++'s .h file
#include "../../Client/Binary.h"

// Include c++ files
#include <iostream>
#include <string>

// Definitions
int main() {
    const std::string Input = "01000100110011110111000001100101";
    const float ExpectedOutput = 1659.5123291015625;
    float EquationOutput = FromBinary::BinaryToFloat(Input);

    if(ExpectedOutput == EquationOutput) {
        std::cout << "Test : BinaryToFloat(); in Client/Binary.h - Passed\n";
    } else {
        std::cout << "Test : BinaryToFloat(); in Client/Binary.h - Failed !!!\n";
        std::cout << "    Details : Input given is "  << Input << "\n";
        std::cout << "    Details : Expected output is " << ExpectedOutput << "\n";
        std::cout << "    Details : Functions output is " << EquationOutput << "\n";
    }

    return 1;
}

#endif