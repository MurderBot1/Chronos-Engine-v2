// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef IsKeyboardKeyPressed_CPP
#define IsKeyboardKeyPressed_CPP

// CPP files .h file
#include "IsKeyboardKeyPressed.h"

// Redefine vars if needed


// Start of program
namespace KeyboardKeyIsPressed {
    bool IsAPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('A') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsBPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('B') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsCPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('C') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsDPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('D') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsEPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('E') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsFPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('F') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsGPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('G') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsHPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('H') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsIPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('I') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsJPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('J') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsKPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('K') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsLPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('L') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsMPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('M') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsNPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('N') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsOPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('O') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsPPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('P') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsQPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('Q') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsRPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('R') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsSPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('S') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsTPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('T') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsUPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('U') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsVPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('V') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsWPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('W') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsXPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('X') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsYPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('Y') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsZPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('Z') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool Is1Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('1') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool Is2Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('2') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool Is3Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('3') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool Is4Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('4') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool Is5Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('5') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool Is6Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('6') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool Is7Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('7') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool Is8Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('8') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool Is9Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('9') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool Is0Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState('0') & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF1Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F1) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF2Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F2) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF3Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F3) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF4Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F4) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF5Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F5) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF6Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F6) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF7Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F7) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF8Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F8) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF9Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F9) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF10Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F10) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF11Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F11) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF12Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F12) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF13Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F13) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF14Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F14) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF15Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F15) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF16Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F16) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF17Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F17) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF18Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F18) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF19Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F19) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF20Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F20) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF21Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F21) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF22Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F22) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF23Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F23) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsF24Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_F24) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsBackspacePressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_BACK) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsTabPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_TAB) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsClearPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_CLEAR) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsEnterPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_RETURN) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsLeftShiftPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_LSHIFT) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsLeftControlPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_LCONTROL) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsLeftAltPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_LMENU) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsRightShiftPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_RSHIFT) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsRightControlPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_RCONTROL) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsRightAltPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_RMENU) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsPausePressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_PAUSE) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsCapsLockPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_CAPITAL) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsEscapePressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_ESCAPE) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsSpacePressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_SPACE) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsPageUpPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_PRIOR) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsPageDownPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_NEXT) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsEndPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_END) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsHomePressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_HOME) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsLeftArrowPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_LEFT) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsRightArrowPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_RIGHT) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsUpArrowPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_UP) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsDownArrowPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_DOWN) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsSelectPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_SELECT) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsPrintPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_PRINT) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsExecutePressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_EXECUTE) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsPrintScreenPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_SNAPSHOT) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsInsertPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_INSERT) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsDeletePressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_DELETE) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsHelpPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_HELP) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsLeftWindowsPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_LWIN) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsRightWindowsPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_RWIN) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsAppsPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_APPS) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsNumpad1Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_NUMPAD1) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsNumpad2Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_NUMPAD2) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsNumpad3Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_NUMPAD3) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsNumpad4Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_NUMPAD4) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsNumpad5Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_NUMPAD5) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsNumpad6Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_NUMPAD6) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsNumpad7Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_NUMPAD7) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsNumpad8Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_NUMPAD8) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsNumpad9Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_NUMPAD9) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsNumpad0Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_NUMPAD0) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsSubtractPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_SUBTRACT) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsPeriodPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_DECIMAL) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsForwardSlashPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_DIVIDE) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsNumLockPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_NUMLOCK) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsScrollLockPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_SCROLL) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsBrowserBackPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_BROWSER_BACK) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsBrowserForwardPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_BROWSER_FORWARD) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsBrowserRefreshPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_BROWSER_REFRESH) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsBrowserStopPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_BROWSER_STOP) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsBrowserSearchPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_BROWSER_SEARCH) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsBrowserFavoritesPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_BROWSER_FAVORITES) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsBrowserStartPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_BROWSER_HOME) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsVolumeMutePressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_VOLUME_MUTE) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsVolumeDownPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_VOLUME_DOWN) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsVolumeUpPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_VOLUME_UP) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsNextTrackPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_MEDIA_NEXT_TRACK) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsPreviousTrackPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_MEDIA_PREV_TRACK) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsStopTrackPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_MEDIA_STOP) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsPlayPauseTrackPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_MEDIA_PLAY_PAUSE) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsStartMailPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_LAUNCH_MAIL) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsSelectMediaPressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_LAUNCH_MEDIA_SELECT) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsStartApplication1Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_LAUNCH_APP1) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }

    bool IsStartApplication2Pressed() {
        #ifdef _WIN32 // Windows
            return (GetAsyncKeyState(VK_LAUNCH_APP2) & 0x8000);
        #elif __APPLE__ // MacOS
            return ;
        #elif __linux__ // Linux
            return ;
        #elif TARGET_OS_IPHONE // iOS
            return ;
        #elif __ANDROID__ // Android
            return ;
        #else
            Log::Errors.InfoOutputs("Unsupported platform for key inputs");
            return false;
        #endif
    }
}

#endif