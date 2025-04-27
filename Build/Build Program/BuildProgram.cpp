// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef BuildProgram_CPP
#define BuildProgram_CPP

// Included file
#include <cstdlib>
#include <iostream>

// Other included Libraries


// Redefine vars if needed


// Start of program
int main() {
    // Command to be executed
    const char* Commands[] = {
        ""
    };

    // List of Cpp files
    const char* ListOfCPPFiles[] = {};

    // Add commands to compile .cpp to .o
    

    // Run all commands
    for(const char* Command : Commands) {
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