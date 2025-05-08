// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Scripts_CPP
#define Scripts_CPP

// Include the C++'s .h file
#include "Scripts.h"

// Variable redefinitions


// Definitions


#endif

Script::Script(std::function<void()> Start, std::function<void()> Loop, std::function<void()> End) {
    // Set the start, loop and end functions
    this->StartFunction = Start;
    this->LoopFunction = Loop;
    this->EndFunction = End;

    // Run start function
    StartFunction();
}

Script::~Script() {
    EndFunction();
}

void Script::Run() { // This should only be ran if you mant to run it more than 1 time per frame
    LoopFunction();
}

void Script::RunAllStartFunctions() { // This should almost never be used (done by the constructor for each object)
    for(Script* CurrentScript : ListOfScripts) {
        CurrentScript->StartFunction();
    }
}

void Script::RunAllLoopFunctions() {
    for(Script* CurrentScript : ListOfScripts) {
        CurrentScript->LoopFunction();
    }
}

void Script::RunAllEndFunctions() { // This should almost never be used (done by the deconstructor for each object)
    for(Script* CurrentScript : ListOfScripts) {
        CurrentScript->EndFunction();
    }
}
