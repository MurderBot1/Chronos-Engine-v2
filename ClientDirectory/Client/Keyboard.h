// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Keyboard_H
#define Keyboard_H

// C++ imported files
#include <string>
#include <array>
#include <shared_mutex>
#include <thread>
#include <mutex>

// Program imported files
#include "Settings.h"
#include "Log.h"

// Definitions
class Keyboard {
    private:
        // Is running
        static std::mutex KeyboardRunning_MX;
        static bool KeyboardRunning;
        static std::mutex MainKeyboardRunning_MX;
        static bool MainKeyboardRunning;

        // Mutex and thread
        static std::thread KeyboardThread;
        static std::mutex KeyCodesMX;
        static std::array<bool, 65536> KeyCodes;
        
        // Detection
        static bool DetectKeyPressed(uint16_t KeyCode);
        static std::array<bool, 65536> DetectIfKeysArePressed();
        static void LoopedDetectIfKeysArePressed();

    public:
        // Changing is running
        static void StopRunning();
        static void StartRunning();

        // Reading detected results
        static std::array<bool, 65536> ReadOutAllCodes();
        static bool ReadOutCode(uint16_t Code);

        // Start and cleanup
        static void StartKeyboardThread();
        static void CleanUpKeyboard();
};

#endif