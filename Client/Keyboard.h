// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Keyboard_H
#define Keyboard_H

// C++ imported files
#include <string>
#include <map>
#include <shared_mutex>
#include <thread>

// Program imported files
#include "Settings.h"
#include "Log.h"

// Definitions
class Keyboard {
    public:
        // Is running
        static std::shared_mutex KeyboardRunningMX;
        static bool KeyboardRunning;
        
        // Changing is running
        void StopRunning();

        // Mutex and thread
        static std::thread* KeyboardThread;
        static std::shared_mutex KeyCodesMX;
        static std::map<uint16_t, bool> KeyCodes;

        // Reading detected results
        std::map<uint16_t, bool> ReadOutAllCodes();
        bool ReadOutCode(uint16_t Code);
        
        // Detection
        static bool DetectKeyPressed(uint16_t KeyCode);
        static std::map<uint16_t, bool> DetectIfKeysArePressed();
        static void LoopedDetectIfKeysArePressed();

        // Start and cleanup
        static void StartKeyboardThread();
        static void CleanUpKeyboard();
};

#endif