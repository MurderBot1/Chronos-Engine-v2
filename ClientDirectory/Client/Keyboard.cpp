// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Keyboard_CPP
#define Keyboard_CPP

// Include the C++'s .h file
#include "Keyboard.h"

// Variable redefinitions
std::thread Keyboard::KeyboardThread;
std::array<bool, 65536> Keyboard::KeyCodes;
std::mutex Keyboard::KeyCodesMX;
std::mutex Keyboard::KeyboardRunning_MX;
bool Keyboard::KeyboardRunning;
std::mutex Keyboard::MainKeyboardRunning_MX;
bool Keyboard::MainKeyboardRunning;

// Definitions
void Keyboard::StartKeyboardThread() {
    // Set the keyboard to the running state
    std::lock_guard<std::mutex> LockUnderLoop(Keyboard::KeyCodesMX);
    Keyboard::KeyboardRunning = true;
    std::lock_guard<std::mutex> LockOverLoop(Keyboard::MainKeyboardRunning_MX);
    Keyboard::MainKeyboardRunning = true;

    // Create a thread and then swap the task
    std::thread TempThread(LoopedDetectIfKeysArePressed);
    Keyboard::KeyboardThread.swap(TempThread);
}

void Keyboard::CleanUpKeyboard() {
    // Stop the inner loop
    Keyboard::StopRunning();

    { // Set the main running to false
        std::lock_guard<std::mutex> Lock(Keyboard::MainKeyboardRunning_MX);
        Keyboard::MainKeyboardRunning = false;
    } // Lock guard goes out of scope

    Keyboard::KeyboardThread.join();
}

void Keyboard::StopRunning() {
    std::unique_lock<std::mutex> Lock(Keyboard::KeyboardRunning_MX);
    Keyboard::KeyboardRunning = false;
}

void Keyboard::StartRunning() {
    std::unique_lock<std::mutex> Lock(Keyboard::KeyboardRunning_MX);
    Keyboard::KeyboardRunning = true;
}

std::array<bool, 65536> Keyboard::ReadOutAllCodes() {
    std::lock_guard<std::mutex> Lock(Keyboard::KeyCodesMX);
    return Keyboard::KeyCodes;
}

bool Keyboard::ReadOutCode(uint16_t Code) {
    std::lock_guard<std::mutex> Lock(Keyboard::KeyCodesMX);
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
    bool MainKeyboardLoopIsRunning = true; // Set up a main scope is running var

    { // Add scope to auto release the lock
        std::lock_guard<std::mutex> Lock(Keyboard::MainKeyboardRunning_MX);
        MainKeyboardLoopIsRunning = Keyboard::MainKeyboardRunning;
    } // Relases the lock

    while(MainKeyboardLoopIsRunning) {
        bool KeyboardIsRunning; // Set up a secondary scope is running var

        { // Add scope to auto release the lock
            std::lock_guard<std::mutex> Lock(Keyboard::KeyboardRunning_MX);
            KeyboardIsRunning = Keyboard::KeyboardRunning;
        } // Relases the lock

        if(KeyboardIsRunning) {
            { // Detect if the keycodes are pressed
                std::array<bool, 65536> TempMap;
                TempMap = Keyboard::DetectIfKeysArePressed();
                std::unique_lock<std::mutex> Lock(Keyboard::KeyCodesMX);
                Keyboard::KeyCodes = std::array<bool, 65536>{};
                Keyboard::KeyCodes = TempMap;
            }
        }

        { // Add scope to auto release the lock
            std::lock_guard<std::mutex> Lock(Keyboard::MainKeyboardRunning_MX);
            MainKeyboardLoopIsRunning = Keyboard::MainKeyboardRunning;
        } // Relases the lock
    }
}

#endif