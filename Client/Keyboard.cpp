// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Keyboard_CPP
#define Keyboard_CPP

// Include the C++'s .h file
#include "Keyboard.h"

// Variable redefinitions


// Definitions
bool Keyboard::DetectKeyPressed(uint16_t KeyCode) {
    return false;
}

std::map<uint16_t, bool> Keyboard::DetectIfKeysArePressed() {
    std::map<uint16_t, bool> ReturnedCodes;
    for(uint16_t CurrentKeyCode = 0; CurrentKeyCode <= 65535; CurrentKeyCode++) {
        ReturnedCodes[CurrentKeyCode] = DetectKeyPressed(CurrentKeyCode);
    }
    return ReturnedCodes;
}

/* Mutex AI expl.
    #include <iostream>
    #include <thread>
    #include <shared_mutex>

    std::shared_mutex rwMutex;
    int sharedVar = 0;

    void reader() {
        std::shared_lock<std::shared_mutex> lock(rwMutex);
        std::cout << "Read: " << sharedVar << std::endl;
    }

    void writer() {
        std::unique_lock<std::shared_mutex> lock(rwMutex);
        sharedVar++;
    }

    int main() {
        std::thread t1(reader);
        std::thread t2(writer);

        t1.join();
        t2.join();

        return 0;
    }
*/

void Keyboard::LoopedDetectIfKeysArePressed() {
    bool Running = true;
    while (Running) {
        { // Detect if the keycodes are pressed
            std::map<uint16_t, bool> TempMap;
            TempMap = Keyboard::DetectIfKeysArePressed();
            std::shared_lock<std::shared_mutex> lock(Keyboard::KeyCodesMX);
            Keyboard::KeyCodes = TempMap;
        }
        {
            std::shared_lock<std::shared_mutex> lock(Keyboard::KeyboardRunningMX);
            Running = Keyboard::KeyboardRunning;
        }
    }
}

void Keyboard::StartKeyboardThread() {
    // Set the keyboard to the running state
    Keyboard::KeyboardRunning = true;

    // Create a thread and then swap the task
    std::thread TempThread(LoopedDetectIfKeysArePressed);
    Keyboard::KeyboardThread->swap(TempThread);
}

#endif