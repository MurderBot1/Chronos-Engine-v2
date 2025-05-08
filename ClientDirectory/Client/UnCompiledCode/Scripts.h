// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Scripts_H
#define Scripts_H

// C++ imported files
#include <string>
#include <functional>
#include <vector>

// Program imported files


// Definitions
class Script {
    public:
        // List of all script objects
        static std::vector<Script*> ListOfScripts;

        // Constructor and deconstructor
        Script(std::function<void()> Start, std::function<void()> Loop, std::function<void()> End);
        ~Script();

        // Run function
        void Run();
        static void RunAllStartFunctions();
        static void RunAllLoopFunctions();
        static void RunAllEndFunctions();

        std::function<void()> StartFunction;
        std::function<void()> LoopFunction;
        std::function<void()> EndFunction;
};

#endif