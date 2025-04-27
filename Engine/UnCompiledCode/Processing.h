// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Processing_H
#define Processing_H

// C++ imported files
#include <string>
#include <stdint.h>
#include <map>

// Program imported files


// Function definitions
class Thread;
class Core;
class GPU;
class CPU;

class Thread {
    public:
        void LoadThreadData();
        std::string ThreadID;
        bool IsTaskRunning;
        Core* CoreItBelongsTo;
};

class Core {
    public:
        void LoadCoreData();
        std::string CoreID;
        int8_t NumThreads;
        std::map<int, Thread*> Threads;
        CPU* CPUItBelongsTo;
        GPU* GPUItBelongsTo;
};

class GPU {
    public:
        void LoadGPUData();
        std::string GPUID;
        int16_t NumberOfCores;
        std::map<int, Core*> Cores;
};

class CPU {
    public:
        void LoadCPUData();
        std::string CPUID;
        int16_t NumberOfCores;
        std::map<int, Core*> Cores;
};

#endif