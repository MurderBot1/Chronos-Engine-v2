// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef FloatToBinary_CPP
#define FloatToBinary_CPP

// Include the C++'s .h file
#include "../../Client/Binary.h"

// Include c++ files
#include <iostream>
#include <string>

// Definitions
int main() {
    constexpr float Input = 1659.5123291015625;
    const std::string ExpectedOutput = "01000100110011110111000001100101";
    std::string EquationOutput = ToBinary::FloatToBinaryString(Input);

    if(ExpectedOutput == EquationOutput) {
        std::cout << "Test : FloatToBinaryString(); in Client/Binary.h - Passed\n";
    } else {
        std::cout << "Test : FloatToBinaryString(); in Client/Binary.h - Failed !!!\n";
        std::cout << "    Details : Input given is " + std::to_string(Input) + "\n";
        std::cout << "    Details : Expected output is " + ExpectedOutput + "\n";
        std::cout << "    Details : Functions output is " + EquationOutput + "\n";
    }

    return 1;
}

#endif