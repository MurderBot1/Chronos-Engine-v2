// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Args_CPP
#define Args_CPP

// Include the C++'s .h file
#include "Args.h"

// Variable redefinitions
std::string_view Args::Game;
std::string_view Args::Save;

// Definitions
void Args::LoadArgs(int argc, char *argv[]) {
    // Parse in to std::string_view
    std::vector<std::string_view> ListOfArgs;
    ListOfArgs.reserve(argc - 1);
    
    for(int i = 1; i < argc; ++i) { // This skips the first arg which is the EXE files name
        ListOfArgs.emplace_back(argv[i]);
    }
    
    if(ListOfArgs.size() % 2 == 1) {
        std::cout << "Removing the last argumnent because there is no match for it. The argument is : " << ListOfArgs[ListOfArgs.size() - 1] << ".\n";
        ListOfArgs.pop_back();
    }

    // Turn the list of args in to pairs
    std::vector<std::pair<std::string_view, std::string_view>> ArgListWithMatchingValue;
    ArgListWithMatchingValue.reserve(ListOfArgs.size() / 2);

    for(int i = 0; i < static_cast<int>(ListOfArgs.size()); i += 2) {
        ArgListWithMatchingValue.emplace_back(std::make_pair(ListOfArgs[i], ListOfArgs[i + 1]));
    }

    // Assign to variable
    const std::array<std::string_view, 2> CompilerArgs = {
        "--game",
        "--save"
    };

    for(std::pair<std::string_view, std::string_view> CurrentArgToDecode : ArgListWithMatchingValue) {
        if(CurrentArgToDecode.first == CompilerArgs[0]) {
            Args::Game = CurrentArgToDecode.second;
        } else if (CurrentArgToDecode.first == CompilerArgs[1]) { // Placeholder for future args
            Args::Save = CurrentArgToDecode.second;
        } else if (false) { // Placeholder for future args

        } else {
            Exit::ExitTheProgram();
            std::cout << CurrentArgToDecode.first << " is not a valid argument\n";
        }
    }
}

#endif