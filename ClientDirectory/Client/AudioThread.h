// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef AudioThread_H
#define AudioThread_H

// C++ imported files
#include <thread>
#include <mutex>
#include <iostream>

// Program imported files
#include "OSAudioFiles.h"

// Definitions
class AudioThread {
    public:
        static void StartAudioThread();
        static void StopAudioThread();
        static void CleanUpAudioThread();

        static void OutputAudio();

        static void AudioThreadSetupWork();

    private:
        static std::thread Thread;

        static bool AudioRunning;
        static std::mutex AudioRunning_MX;
};

#endif