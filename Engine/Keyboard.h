// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef Keyboard_H
#define Keyboard_H

// C++ imported files
#include <string>
#include <map>
#include <iostream>

// Program imported files
#include "KeyboardFunctions.h"
#ifdef _WIN32 // Windows
    #include <windows.h>
#elif __APPLE__ // MacOS
    #include
#elif __linux__ // Linux
    #include
#elif TARGET_OS_IPHONE // iOS
    #include
#elif __ANDROID__ // Android
    #include
#else
    std::cout << "Unsupported platform" << std::endl;
    return false;
#endif

// Function definitions
enum KeyboardKeys {
    A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z, One, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17, F18, F19, F20, F21, F22, F23, F24, Backspace, Tab, Clear, Enter, LeftShift, LeftControl, LeftAlt, RightShift, RightControl, RightAlt, Pause, CapsLock, Esc, Space, PageUp, PageDown, End, Home, LeftArrow, RightArrow, UpArrow, DownArrow, Select, Print, Execute, PrintScreen, Insert, Delete, Help, LeftWindows, RightWindows, Apps, Numpad1, Numpad2, Numpad3, Numpad4, Numpad5, Numpad6, Numpad7, Numpad8, Numpad9, Numpad0, Subtract, Period, ForwardSlash, NumLock, ScrollLock, BrowserBack, BrowserForward, BrowserRefresh, BrowserStop, BrowserSearch, BrowserFavorites, BrowserStart, VolumeMute, VolumeDown, VolumeUp, NextTrack, PreviousTrack, StopTrack, PlayPauseTrack, StartMail, SelectMedia, StartApplication1, StartApplication2
};

class Keyboard {
    public:
        static bool IsKeyPressed(KeyboardKeys Key);
};

class KeyboardKeyIsPressed {
    public:
        static std::map<std::string, bool> KeysPressed();
        static bool IsAPressed();
        static bool IsBPressed();
        static bool IsCPressed();
        static bool IsDPressed();
        static bool IsEPressed();
        static bool IsFPressed();
        static bool IsGPressed();
        static bool IsHPressed();
        static bool IsIPressed();
        static bool IsJPressed();
        static bool IsKPressed();
        static bool IsLPressed();
        static bool IsMPressed();
        static bool IsNPressed();
        static bool IsOPressed();
        static bool IsPPressed();
        static bool IsQPressed();
        static bool IsRPressed();
        static bool IsSPressed();
        static bool IsTPressed();
        static bool IsUPressed();
        static bool IsVPressed();
        static bool IsWPressed();
        static bool IsXPressed();
        static bool IsYPressed();
        static bool IsZPressed();
        static bool Is1Pressed();
        static bool Is2Pressed();
        static bool Is3Pressed();
        static bool Is4Pressed();
        static bool Is5Pressed();
        static bool Is6Pressed();
        static bool Is7Pressed();
        static bool Is8Pressed();
        static bool Is9Pressed();
        static bool Is0Pressed();
        static bool IsF1Pressed();
        static bool IsF2Pressed();
        static bool IsF3Pressed();
        static bool IsF4Pressed();
        static bool IsF5Pressed();
        static bool IsF6Pressed();
        static bool IsF7Pressed();
        static bool IsF8Pressed();
        static bool IsF9Pressed();
        static bool IsF10Pressed();
        static bool IsF11Pressed();
        static bool IsF12Pressed();
        static bool IsF13Pressed();
        static bool IsF14Pressed();
        static bool IsF15Pressed();
        static bool IsF16Pressed();
        static bool IsF17Pressed();
        static bool IsF18Pressed();
        static bool IsF19Pressed();
        static bool IsF20Pressed();
        static bool IsF21Pressed();
        static bool IsF22Pressed();
        static bool IsF23Pressed();
        static bool IsF24Pressed();
        static bool IsBackspacePressed();
        static bool IsTabPressed();
        static bool IsClearPressed();
        static bool IsEnterPressed();
        static bool IsLeftShiftPressed();
        static bool IsLeftControlPressed();
        static bool IsLeftAltPressed();
        static bool IsRightShiftPressed();
        static bool IsRightControlPressed();
        static bool IsRightAltPressed();
        static bool IsPausePressed();
        static bool IsCapsLockPressed();
        static bool IsEscapePressed();
        static bool IsSpacePressed();
        static bool IsPageUpPressed();
        static bool IsPageDownPressed();
        static bool IsEndPressed();
        static bool IsHomePressed();
        static bool IsLeftArrowPressed();
        static bool IsRightArrowPressed();
        static bool IsUpArrowPressed();
        static bool IsDownArrowPressed();
        static bool IsSelectPressed();
        static bool IsPrintPressed();
        static bool IsExecutePressed();
        static bool IsPrintScreenPressed();
        static bool IsInsertPressed();
        static bool IsDeletePressed();
        static bool IsHelpPressed();
        static bool IsLeftWindowsPressed();
        static bool IsRightWindowsPressed();
        static bool IsAppsPressed();
        static bool IsNumpad1Pressed();
        static bool IsNumpad2Pressed();
        static bool IsNumpad3Pressed();
        static bool IsNumpad4Pressed();
        static bool IsNumpad5Pressed();
        static bool IsNumpad6Pressed();
        static bool IsNumpad7Pressed();
        static bool IsNumpad8Pressed();
        static bool IsNumpad9Pressed();
        static bool IsNumpad0Pressed();
        static bool IsSubtractPressed();
        static bool IsPeriodPressed();
        static bool IsForwardSlashPressed();
        static bool IsNumLockPressed();
        static bool IsScrollLockPressed();
        static bool IsBrowserBackPressed();
        static bool IsBrowserForwardPressed();
        static bool IsBrowserRefreshPressed();
        static bool IsBrowserStopPressed();
        static bool IsBrowserSearchPressed();
        static bool IsBrowserFavoritesPressed();
        static bool IsBrowserStartPressed();
        static bool IsVolumeMutePressed();
        static bool IsVolumeDownPressed();
        static bool IsVolumeUpPressed();
        static bool IsNextTrackPressed();
        static bool IsPreviousTrackPressed();
        static bool IsStopTrackPressed();
        static bool IsPlayPauseTrackPressed();
        static bool IsStartMailPressed();
        static bool IsSelectMediaPressed();
        static bool IsStartApplication1Pressed();
        static bool IsStartApplication2Pressed();
};

#endif