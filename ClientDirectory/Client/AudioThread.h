// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef AudioThread_H
#define AudioThread_H

// C++ imported files
#include <thread>

// Program imported files


// Definitions
class AudioThread {
    public:
        AudioThread();
        ~AudioThread(); 

        static std::thread Thread;
};

#endif