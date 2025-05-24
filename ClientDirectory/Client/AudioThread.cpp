// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef AudioThread_CPP
#define AudioThread_CPP

// Include the C++'s .h file
#include "AudioThread.h"

// Variable redefinitions
bool AudioThread::AudioRunning;
std::mutex AudioThread::AudioRunning_MX;
std::thread AudioThread::Thread;

// Definitions
void AudioThread::StartAudioThread() {
    { // Releases the lock after this runs
        // Lock the mutex
        std::lock_guard<std::mutex> Lock(AudioThread::AudioRunning_MX);
        
        // Stop the thread
        AudioThread::AudioRunning = false;
        if(AudioThread::Thread.joinable()) {
            AudioThread::Thread.join();
        }

        // Set the running to true
        AudioThread::AudioRunning = true;
    }

    // Create a thread and then swap the task
    std::thread TempThread(AudioThreadSetupWork);
    AudioThread::Thread.swap(TempThread);
}

void AudioThread::StopAudioThread() {
    { // Lock the mutex and then set running to true
        std::lock_guard<std::mutex> Lock(AudioThread::AudioRunning_MX);
        AudioThread::AudioRunning = false;
    }

    // Wait for the thread to finish
    AudioThread::Thread.join();
}

void AudioThread::CleanUpAudioThread() {
    AudioThread::StopAudioThread();
}

void AudioThread::AudioThreadSetupWork() {
    // Set a running variable so the function can be stoped without having AudioThread::AudioRunning_MX always locked
    bool Run = true;
    
    while(Run) {
        // Output the audio
        AudioThread::OutputAudio();
        
        { // Check if the loop should be running
            std::lock_guard<std::mutex> Lock(AudioThread::AudioRunning_MX);
            Run = AudioThread::AudioRunning;
        }
    }
}

void AudioThread::OutputAudio() {

}

#endif