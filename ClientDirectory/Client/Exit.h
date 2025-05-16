// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Exit_H
#define Exit_H

// C++ imported files
#include <mutex>

// Program imported files


// Definitions
class Exit {
    public:
        static void StartUpExit();
        static bool ExitTheMainLoop;
        static std::mutex ExitMX;
        static void ExitTheProgram();
};

#endif