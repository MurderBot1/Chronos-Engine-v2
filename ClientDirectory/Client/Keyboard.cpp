// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Keyboard_CPP
#define Keyboard_CPP

// Include the C++'s .h file
#include "Keyboard.h"

// Variable redefinitions
std::thread Keyboard::KeyboardThread;
std::array<bool, 65536> Keyboard::KeyCodes;
std::shared_mutex Keyboard::KeyCodesMX;
std::shared_mutex Keyboard::KeyboardRunningMX;
bool Keyboard::KeyboardRunning;

// Definitions
void Keyboard::StopRunning() {
    std::unique_lock<std::shared_mutex> lock(Keyboard::KeyboardRunningMX);
    Keyboard::KeyboardRunning = false;
}

std::array<bool, 65536> Keyboard::ReadOutAllCodes() {
    std::shared_lock<std::shared_mutex> lock(Keyboard::KeyCodesMX);
    return Keyboard::KeyCodes;
}

bool Keyboard::ReadOutCode(uint16_t Code) {
    std::shared_lock<std::shared_mutex> lock(Keyboard::KeyCodesMX);
    return Keyboard::KeyCodes[Code];
}

bool Keyboard::DetectKeyPressed(uint16_t KeyCode) {
    switch (KeyCode) {
        case 0:
            return false;
        default:
            return false;
    }
    return false;
}

std::array<bool, 65536> Keyboard::DetectIfKeysArePressed() {
    std::array<bool, 65536> ReturnedCodes;
    for(int CurrentKeyCode = 0; CurrentKeyCode <= 65535; CurrentKeyCode++) {
        ReturnedCodes[CurrentKeyCode] = DetectKeyPressed(CurrentKeyCode);
    }
    return ReturnedCodes;
}

void Keyboard::LoopedDetectIfKeysArePressed() {
    while (true) {
        { // Check if keyboard is running
            std::shared_lock<std::shared_mutex> lock(Keyboard::KeyboardRunningMX);
            if(!(Keyboard::KeyboardRunning)) { return; }
        } // Release the lock on keyboardRunningMX

        { // Detect if the keycodes are pressed
            std::array<bool, 65536> TempMap;
            TempMap = Keyboard::DetectIfKeysArePressed();
            std::unique_lock<std::shared_mutex> lock(Keyboard::KeyCodesMX);
            Keyboard::KeyCodes = std::array<bool, 65536>{};
            Keyboard::KeyCodes = TempMap;
        }
    }
}

void Keyboard::StartKeyboardThread() {
    // Set the keyboard to the running state
    Keyboard::KeyboardRunning = true;

    // Create a thread and then swap the task
    std::thread TempThread(LoopedDetectIfKeysArePressed);
    Keyboard::KeyboardThread.swap(TempThread);
}

void Keyboard::CleanUpKeyboard() {
    Keyboard::StopRunning();
    Keyboard::KeyboardThread.join();
}

#endif