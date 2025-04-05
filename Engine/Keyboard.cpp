// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef Keyboard_CPP
#define Keyboard_CPP

// CPP files .h file
#include "Keyboard.h"

// Redefine vars if needed


// Start of program
bool Keyboard::IsKeyPressed(KeyboardKeys Key) {
    switch (Key){
        case A:
            return KeyboardKeyIsPressed::IsAPressed();
        break;
    case B:
            return KeyboardKeyIsPressed::IsBPressed();
        break;
    case C:
            return KeyboardKeyIsPressed::IsCPressed();
        break;
    case D:
            return KeyboardKeyIsPressed::IsDPressed();
        break;
    case E:
            return KeyboardKeyIsPressed::IsEPressed();
        break;
    case F:
            return KeyboardKeyIsPressed::IsFPressed();
        break;
    case G:
            return KeyboardKeyIsPressed::IsGPressed();
        break;
    case H:
            return KeyboardKeyIsPressed::IsHPressed();
        break;
    case I:
            return KeyboardKeyIsPressed::IsIPressed();
        break;
    case J:
            return KeyboardKeyIsPressed::IsJPressed();
        break;
    case K:
            return KeyboardKeyIsPressed::IsKPressed();
        break;
    case L:
            return KeyboardKeyIsPressed::IsLPressed();
        break;
    case M:
            return KeyboardKeyIsPressed::IsMPressed();
        break;
    case N:
            return KeyboardKeyIsPressed::IsNPressed();
        break;
    case O:
            return KeyboardKeyIsPressed::IsOPressed();
        break;
    case P:
            return KeyboardKeyIsPressed::IsPPressed();
        break;
    case Q:
            return KeyboardKeyIsPressed::IsQPressed();
        break;
    case R:
            return KeyboardKeyIsPressed::IsRPressed();
        break;
    case S:
            return KeyboardKeyIsPressed::IsSPressed();
        break;
    case T:
            return KeyboardKeyIsPressed::IsTPressed();
        break;
    case U:
            return KeyboardKeyIsPressed::IsUPressed();
        break;
    case V:
            return KeyboardKeyIsPressed::IsVPressed();
        break;
    case W:
            return KeyboardKeyIsPressed::IsWPressed();
        break;
    case X:
            return KeyboardKeyIsPressed::IsXPressed();
        break;
    case Y:
            return KeyboardKeyIsPressed::IsYPressed();
        break;
    case Z:
            return KeyboardKeyIsPressed::IsZPressed();
        break;
    case One:
            return KeyboardKeyIsPressed::Is1Pressed();
        break;
    case Two:
            return KeyboardKeyIsPressed::Is2Pressed();
        break;
    case Three:
            return KeyboardKeyIsPressed::Is3Pressed();
        break;
    case Four:
            return KeyboardKeyIsPressed::Is4Pressed();
        break;
    case Five:
            return KeyboardKeyIsPressed::Is5Pressed();
        break;
    case Six:
            return KeyboardKeyIsPressed::Is6Pressed();
        break;
    case Seven:
            return KeyboardKeyIsPressed::Is7Pressed();
        break;
    case Eight:
            return KeyboardKeyIsPressed::Is8Pressed();
        break;
    case Nine:
            return KeyboardKeyIsPressed::Is9Pressed();
        break;
    case Ten:
            return KeyboardKeyIsPressed::Is0Pressed();
        break;
    case F1:
            return KeyboardKeyIsPressed::IsF1Pressed();
        break;
    case F2:
            return KeyboardKeyIsPressed::IsF2Pressed();
        break;
    case F3:
            return KeyboardKeyIsPressed::IsF3Pressed();
        break;
    case F4:
            return KeyboardKeyIsPressed::IsF4Pressed();
        break;
    case F5:
            return KeyboardKeyIsPressed::IsF5Pressed();
        break;
    case F6:
            return KeyboardKeyIsPressed::IsF6Pressed();
        break;
    case F7:
            return KeyboardKeyIsPressed::IsF7Pressed();
        break;
    case F8:
            return KeyboardKeyIsPressed::IsF8Pressed();
        break;
    case F9:
            return KeyboardKeyIsPressed::IsF9Pressed();
        break;
    case F10:
            return KeyboardKeyIsPressed::IsF10Pressed();
        break;
    case F11:
            return KeyboardKeyIsPressed::IsF11Pressed();
        break;
    case F12:
            return KeyboardKeyIsPressed::IsF12Pressed();
        break;
    case F13:
            return KeyboardKeyIsPressed::IsF13Pressed();
        break;
    case F14:
            return KeyboardKeyIsPressed::IsF14Pressed();
        break;
    case F15:
            return KeyboardKeyIsPressed::IsF15Pressed();
        break;
    case F16:
            return KeyboardKeyIsPressed::IsF16Pressed();
        break;
    case F17:
            return KeyboardKeyIsPressed::IsF17Pressed();
        break;
    case F18:
            return KeyboardKeyIsPressed::IsF18Pressed();
        break;
    case F19:
            return KeyboardKeyIsPressed::IsF19Pressed();
        break;
    case F20:
            return KeyboardKeyIsPressed::IsF20Pressed();
        break;
    case F21:
            return KeyboardKeyIsPressed::IsF21Pressed();
        break;
    case F22:
            return KeyboardKeyIsPressed::IsF22Pressed();
        break;
    case F23:
            return KeyboardKeyIsPressed::IsF23Pressed();
        break;
    case F24:
            return KeyboardKeyIsPressed::IsF24Pressed();
        break;
    case Backspace:
            return KeyboardKeyIsPressed::IsBackspacePressed();
        break;
    case Tab:
            return KeyboardKeyIsPressed::IsTabPressed();
        break;
    case Clear:
            return KeyboardKeyIsPressed::IsClearPressed();
        break;
    case Enter:
            return KeyboardKeyIsPressed::IsEnterPressed();
        break;
    case LeftShift:
            return KeyboardKeyIsPressed::IsLeftShiftPressed();
        break;
    case LeftControl:
            return KeyboardKeyIsPressed::IsLeftControlPressed();
        break;
    case LeftAlt:
            return KeyboardKeyIsPressed::IsLeftAltPressed();
        break;
    case RightShift:
            return KeyboardKeyIsPressed::IsRightShiftPressed();
        break;
    case RightControl:
            return KeyboardKeyIsPressed::IsRightControlPressed();
        break;
    case RightAlt:
            return KeyboardKeyIsPressed::IsRightAltPressed();
        break;
    case Pause:
            return KeyboardKeyIsPressed::IsPausePressed();
        break;
    case CapsLock:
            return KeyboardKeyIsPressed::IsCapsLockPressed();
        break;
    case Esc:
            return KeyboardKeyIsPressed::IsEscapePressed();
        break;
    case Space:
            return KeyboardKeyIsPressed::IsSpacePressed();
        break;
    case PageUp:
            return KeyboardKeyIsPressed::IsPageUpPressed();
        break;
    case PageDown:
            return KeyboardKeyIsPressed::IsPageDownPressed();
        break;
    case End:
            return KeyboardKeyIsPressed::IsEndPressed();
        break;
    case Home:
            return KeyboardKeyIsPressed::IsHomePressed();
        break;
    case LeftArrow:
            return KeyboardKeyIsPressed::IsLeftArrowPressed();
        break;
    case RightArrow:
            return KeyboardKeyIsPressed::IsRightArrowPressed();
        break;
    case UpArrow:
            return KeyboardKeyIsPressed::IsUpArrowPressed();
        break;
    case DownArrow:
            return KeyboardKeyIsPressed::IsDownArrowPressed();
        break;
    case Select:
            return KeyboardKeyIsPressed::IsSelectPressed();
        break;
    case Print:
            return KeyboardKeyIsPressed::IsPrintPressed();
        break;
    case Execute:
            return KeyboardKeyIsPressed::IsExecutePressed();
        break;
    case PrintScreen:
            return KeyboardKeyIsPressed::IsPrintScreenPressed();
        break;
    case Insert:
            return KeyboardKeyIsPressed::IsInsertPressed();
        break;
    case Delete:
            return KeyboardKeyIsPressed::IsDeletePressed();
        break;
    case Help:
            return KeyboardKeyIsPressed::IsHelpPressed();
        break;
    case LeftWindows:
            return KeyboardKeyIsPressed::IsLeftWindowsPressed();
        break;
    case RightWindows:
            return KeyboardKeyIsPressed::IsRightWindowsPressed();
        break;
    case Apps:
            return KeyboardKeyIsPressed::IsAppsPressed();
        break;
    case Numpad1:
            return KeyboardKeyIsPressed::IsNumpad1Pressed();
        break;
    case Numpad2:
            return KeyboardKeyIsPressed::IsNumpad2Pressed();
        break;
    case Numpad3:
            return KeyboardKeyIsPressed::IsNumpad3Pressed();
        break;
    case Numpad4:
            return KeyboardKeyIsPressed::IsNumpad4Pressed();
        break;
    case Numpad5:
            return KeyboardKeyIsPressed::IsNumpad5Pressed();
        break;
    case Numpad6:
            return KeyboardKeyIsPressed::IsNumpad6Pressed();
        break;
    case Numpad7:
            return KeyboardKeyIsPressed::IsNumpad7Pressed();
        break;
    case Numpad8:
            return KeyboardKeyIsPressed::IsNumpad8Pressed();
        break;
    case Numpad9:
            return KeyboardKeyIsPressed::IsNumpad9Pressed();
        break;
    case Numpad0:
            return KeyboardKeyIsPressed::IsNumpad0Pressed();
        break;
    case Subtract:
            return KeyboardKeyIsPressed::IsSubtractPressed();
        break;
    case Period:
            return KeyboardKeyIsPressed::IsPeriodPressed();
        break;
    case ForwardSlash:
            return KeyboardKeyIsPressed::IsForwardSlashPressed();
        break;
    case NumLock:
            return KeyboardKeyIsPressed::IsNumLockPressed();
        break;
    case ScrollLock:
            return KeyboardKeyIsPressed::IsScrollLockPressed();
        break;
    case BrowserBack:
            return KeyboardKeyIsPressed::IsBrowserBackPressed();
        break;
    case BrowserForward:
            return KeyboardKeyIsPressed::IsBrowserForwardPressed();
        break;
    case BrowserRefresh:
            return KeyboardKeyIsPressed::IsBrowserRefreshPressed();
        break;
    case BrowserStop:
            return KeyboardKeyIsPressed::IsBrowserStopPressed();
        break;
    case BrowserSearch:
            return KeyboardKeyIsPressed::IsBrowserSearchPressed();
        break;
    case BrowserFavorites:
            return KeyboardKeyIsPressed::IsBrowserFavoritesPressed();
        break;
    case BrowserStart:
            return KeyboardKeyIsPressed::IsBrowserStartPressed();
        break;
    case VolumeMute:
            return KeyboardKeyIsPressed::IsVolumeMutePressed();
        break;
    case VolumeDown:
            return KeyboardKeyIsPressed::IsVolumeDownPressed();
        break;
    case VolumeUp:
            return KeyboardKeyIsPressed::IsVolumeUpPressed();
        break;
    case NextTrack:
            return KeyboardKeyIsPressed::IsNextTrackPressed();
        break;
    case PreviousTrack:
            return KeyboardKeyIsPressed::IsPreviousTrackPressed();
        break;
    case StopTrack:
            return KeyboardKeyIsPressed::IsStopTrackPressed();
        break;
    case PlayPauseTrack:
            return KeyboardKeyIsPressed::IsPlayPauseTrackPressed();
        break;
    case StartMail:
            return KeyboardKeyIsPressed::IsStartMailPressed();
        break;
    case SelectMedia:
            return KeyboardKeyIsPressed::IsSelectMediaPressed();
        break;
    case StartApplication1:
            return KeyboardKeyIsPressed::IsStartApplication1Pressed();
        break;
    case StartApplication2:
            return KeyboardKeyIsPressed::IsStartApplication2Pressed();
        break;
        
    default:
        break;
    }
    return false;
}

std::map<std::string, bool> KeyboardKeyIsPressed::KeysPressed() {
    std::map<std::string, bool> ReturnedKeys;
    ReturnedKeys["A"] = KeyboardKeyIsPressed::IsAPressed();
    ReturnedKeys["B"] = KeyboardKeyIsPressed::IsBPressed();
    ReturnedKeys["C"] = KeyboardKeyIsPressed::IsCPressed();
    ReturnedKeys["D"] = KeyboardKeyIsPressed::IsDPressed();
    ReturnedKeys["E"] = KeyboardKeyIsPressed::IsEPressed();
    ReturnedKeys["F"] = KeyboardKeyIsPressed::IsFPressed();
    ReturnedKeys["G"] = KeyboardKeyIsPressed::IsGPressed();
    ReturnedKeys["H"] = KeyboardKeyIsPressed::IsHPressed();
    ReturnedKeys["I"] = KeyboardKeyIsPressed::IsIPressed();
    ReturnedKeys["J"] = KeyboardKeyIsPressed::IsJPressed();
    ReturnedKeys["K"] = KeyboardKeyIsPressed::IsKPressed();
    ReturnedKeys["L"] = KeyboardKeyIsPressed::IsLPressed();
    ReturnedKeys["M"] = KeyboardKeyIsPressed::IsMPressed();
    ReturnedKeys["N"] = KeyboardKeyIsPressed::IsNPressed();
    ReturnedKeys["O"] = KeyboardKeyIsPressed::IsOPressed();
    ReturnedKeys["P"] = KeyboardKeyIsPressed::IsPPressed();
    ReturnedKeys["Q"] = KeyboardKeyIsPressed::IsQPressed();
    ReturnedKeys["R"] = KeyboardKeyIsPressed::IsRPressed();
    ReturnedKeys["S"] = KeyboardKeyIsPressed::IsSPressed();
    ReturnedKeys["T"] = KeyboardKeyIsPressed::IsTPressed();
    ReturnedKeys["U"] = KeyboardKeyIsPressed::IsUPressed();
    ReturnedKeys["V"] = KeyboardKeyIsPressed::IsVPressed();
    ReturnedKeys["W"] = KeyboardKeyIsPressed::IsWPressed();
    ReturnedKeys["X"] = KeyboardKeyIsPressed::IsXPressed();
    ReturnedKeys["Y"] = KeyboardKeyIsPressed::IsYPressed();
    ReturnedKeys["Z"] = KeyboardKeyIsPressed::IsZPressed();
    ReturnedKeys["1"] = KeyboardKeyIsPressed::Is1Pressed();
    ReturnedKeys["2"] = KeyboardKeyIsPressed::Is2Pressed();
    ReturnedKeys["3"] = KeyboardKeyIsPressed::Is3Pressed();
    ReturnedKeys["4"] = KeyboardKeyIsPressed::Is4Pressed();
    ReturnedKeys["5"] = KeyboardKeyIsPressed::Is5Pressed();
    ReturnedKeys["6"] = KeyboardKeyIsPressed::Is6Pressed();
    ReturnedKeys["7"] = KeyboardKeyIsPressed::Is7Pressed();
    ReturnedKeys["8"] = KeyboardKeyIsPressed::Is8Pressed();
    ReturnedKeys["9"] = KeyboardKeyIsPressed::Is9Pressed();
    ReturnedKeys["0"] = KeyboardKeyIsPressed::Is0Pressed();
    ReturnedKeys["F1"] = KeyboardKeyIsPressed::IsF1Pressed();
    ReturnedKeys["F2"] = KeyboardKeyIsPressed::IsF2Pressed();
    ReturnedKeys["F3"] = KeyboardKeyIsPressed::IsF3Pressed();
    ReturnedKeys["F4"] = KeyboardKeyIsPressed::IsF4Pressed();
    ReturnedKeys["F5"] = KeyboardKeyIsPressed::IsF5Pressed();
    ReturnedKeys["F6"] = KeyboardKeyIsPressed::IsF6Pressed();
    ReturnedKeys["F7"] = KeyboardKeyIsPressed::IsF7Pressed();
    ReturnedKeys["F8"] = KeyboardKeyIsPressed::IsF8Pressed();
    ReturnedKeys["F9"] = KeyboardKeyIsPressed::IsF9Pressed();
    ReturnedKeys["F10"] = KeyboardKeyIsPressed::IsF10Pressed();
    ReturnedKeys["F11"] = KeyboardKeyIsPressed::IsF11Pressed();
    ReturnedKeys["F12"] = KeyboardKeyIsPressed::IsF12Pressed();
    ReturnedKeys["F13"] = KeyboardKeyIsPressed::IsF13Pressed();
    ReturnedKeys["F14"] = KeyboardKeyIsPressed::IsF14Pressed();
    ReturnedKeys["F15"] = KeyboardKeyIsPressed::IsF15Pressed();
    ReturnedKeys["F16"] = KeyboardKeyIsPressed::IsF16Pressed();
    ReturnedKeys["F17"] = KeyboardKeyIsPressed::IsF17Pressed();
    ReturnedKeys["F18"] = KeyboardKeyIsPressed::IsF18Pressed();
    ReturnedKeys["F19"] = KeyboardKeyIsPressed::IsF19Pressed();
    ReturnedKeys["F20"] = KeyboardKeyIsPressed::IsF20Pressed();
    ReturnedKeys["F21"] = KeyboardKeyIsPressed::IsF21Pressed();
    ReturnedKeys["F22"] = KeyboardKeyIsPressed::IsF22Pressed();
    ReturnedKeys["F23"] = KeyboardKeyIsPressed::IsF23Pressed();
    ReturnedKeys["F24"] = KeyboardKeyIsPressed::IsF24Pressed();
    ReturnedKeys["Backspace"] = KeyboardKeyIsPressed::IsBackspacePressed();
    ReturnedKeys["Tab"] = KeyboardKeyIsPressed::IsTabPressed();
    ReturnedKeys["Clear"] = KeyboardKeyIsPressed::IsClearPressed();
    ReturnedKeys["Enter"] = KeyboardKeyIsPressed::IsEnterPressed();
    ReturnedKeys["LeftShift"] = KeyboardKeyIsPressed::IsLeftShiftPressed();
    ReturnedKeys["LeftControl"] = KeyboardKeyIsPressed::IsLeftControlPressed();
    ReturnedKeys["LeftAlt"] = KeyboardKeyIsPressed::IsLeftAltPressed();
    ReturnedKeys["RightShift"] = KeyboardKeyIsPressed::IsRightShiftPressed();
    ReturnedKeys["RightControl"] = KeyboardKeyIsPressed::IsRightControlPressed();
    ReturnedKeys["RightAlt"] = KeyboardKeyIsPressed::IsRightAltPressed();
    ReturnedKeys["Pause"] = KeyboardKeyIsPressed::IsPausePressed();
    ReturnedKeys["CapsLock"] = KeyboardKeyIsPressed::IsCapsLockPressed();
    ReturnedKeys["Escape"] = KeyboardKeyIsPressed::IsEscapePressed();
    ReturnedKeys["Space"] = KeyboardKeyIsPressed::IsSpacePressed();
    ReturnedKeys["PageUp"] = KeyboardKeyIsPressed::IsPageUpPressed();
    ReturnedKeys["PageDown"] = KeyboardKeyIsPressed::IsPageDownPressed();
    ReturnedKeys["End"] = KeyboardKeyIsPressed::IsEndPressed();
    ReturnedKeys["Home"] = KeyboardKeyIsPressed::IsHomePressed();
    ReturnedKeys["LeftArrow"] = KeyboardKeyIsPressed::IsLeftArrowPressed();
    ReturnedKeys["RightArrow"] = KeyboardKeyIsPressed::IsRightArrowPressed();
    ReturnedKeys["UpArrow"] = KeyboardKeyIsPressed::IsUpArrowPressed();
    ReturnedKeys["DownArrow"] = KeyboardKeyIsPressed::IsDownArrowPressed();
    ReturnedKeys["Select"] = KeyboardKeyIsPressed::IsSelectPressed();
    ReturnedKeys["Print"] = KeyboardKeyIsPressed::IsPrintPressed();
    ReturnedKeys["Execute"] = KeyboardKeyIsPressed::IsExecutePressed();
    ReturnedKeys["PrintScreen"] = KeyboardKeyIsPressed::IsPrintScreenPressed();
    ReturnedKeys["Insert"] = KeyboardKeyIsPressed::IsInsertPressed();
    ReturnedKeys["Delete"] = KeyboardKeyIsPressed::IsDeletePressed();
    ReturnedKeys["Help"] = KeyboardKeyIsPressed::IsHelpPressed();
    ReturnedKeys["LeftWindows"] = KeyboardKeyIsPressed::IsLeftWindowsPressed();
    ReturnedKeys["RightWindows"] = KeyboardKeyIsPressed::IsRightWindowsPressed();
    ReturnedKeys["Apps"] = KeyboardKeyIsPressed::IsAppsPressed();
    ReturnedKeys["Numpad1"] = KeyboardKeyIsPressed::IsNumpad1Pressed();
    ReturnedKeys["Numpad2"] = KeyboardKeyIsPressed::IsNumpad2Pressed();
    ReturnedKeys["Numpad3"] = KeyboardKeyIsPressed::IsNumpad3Pressed();
    ReturnedKeys["Numpad4"] = KeyboardKeyIsPressed::IsNumpad4Pressed();
    ReturnedKeys["Numpad5"] = KeyboardKeyIsPressed::IsNumpad5Pressed();
    ReturnedKeys["Numpad6"] = KeyboardKeyIsPressed::IsNumpad6Pressed();
    ReturnedKeys["Numpad7"] = KeyboardKeyIsPressed::IsNumpad7Pressed();
    ReturnedKeys["Numpad8"] = KeyboardKeyIsPressed::IsNumpad8Pressed();
    ReturnedKeys["Numpad9"] = KeyboardKeyIsPressed::IsNumpad9Pressed();
    ReturnedKeys["Numpad0"] = KeyboardKeyIsPressed::IsNumpad0Pressed();
    ReturnedKeys["Subtract"] = KeyboardKeyIsPressed::IsSubtractPressed();
    ReturnedKeys["Period"] = KeyboardKeyIsPressed::IsPeriodPressed();
    ReturnedKeys["ForwardSlash"] = KeyboardKeyIsPressed::IsForwardSlashPressed();
    ReturnedKeys["NumLock"] = KeyboardKeyIsPressed::IsNumLockPressed();
    ReturnedKeys["ScrollLock"] = KeyboardKeyIsPressed::IsScrollLockPressed();
    ReturnedKeys["BrowserBack"] = KeyboardKeyIsPressed::IsBrowserBackPressed();
    ReturnedKeys["BrowserForward"] = KeyboardKeyIsPressed::IsBrowserForwardPressed();
    ReturnedKeys["BrowserRefresh"] = KeyboardKeyIsPressed::IsBrowserRefreshPressed();
    ReturnedKeys["BrowserStop"] = KeyboardKeyIsPressed::IsBrowserStopPressed();
    ReturnedKeys["BrowserSearch"] = KeyboardKeyIsPressed::IsBrowserSearchPressed();
    ReturnedKeys["BrowserFavorites"] = KeyboardKeyIsPressed::IsBrowserFavoritesPressed();
    ReturnedKeys["BrowserStart"] = KeyboardKeyIsPressed::IsBrowserStartPressed();
    ReturnedKeys["VolumeMute"] = KeyboardKeyIsPressed::IsVolumeMutePressed();
    ReturnedKeys["VolumeDown"] = KeyboardKeyIsPressed::IsVolumeDownPressed();
    ReturnedKeys["VolumeUp"] = KeyboardKeyIsPressed::IsVolumeUpPressed();
    ReturnedKeys["NextTrack"] = KeyboardKeyIsPressed::IsNextTrackPressed();
    ReturnedKeys["PreviousTrack"] = KeyboardKeyIsPressed::IsPreviousTrackPressed();
    ReturnedKeys["StopTrack"] = KeyboardKeyIsPressed::IsStopTrackPressed();
    ReturnedKeys["PlayPauseTrack"] = KeyboardKeyIsPressed::IsPlayPauseTrackPressed();
    ReturnedKeys["StartMail"] = KeyboardKeyIsPressed::IsStartMailPressed();
    ReturnedKeys["SelectMedia"] = KeyboardKeyIsPressed::IsSelectMediaPressed();
    ReturnedKeys["StartApplication1"] = KeyboardKeyIsPressed::IsStartApplication1Pressed();
    ReturnedKeys["StartApplication2"] = KeyboardKeyIsPressed::IsStartApplication2Pressed();
    return ReturnedKeys;
}

bool KeyboardKeyIsPressed::IsAPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsBPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsCPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsDPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsEPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsFPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsGPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsHPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsIPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsJPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsKPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsLPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsMPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsNPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsOPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsPPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsQPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsRPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsSPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsTPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsUPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsVPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsWPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsXPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsYPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsZPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::Is1Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::Is2Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::Is3Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::Is4Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::Is5Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::Is6Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::Is7Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::Is8Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::Is9Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::Is0Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF1Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF2Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF3Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF4Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF5Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF6Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF7Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF8Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF9Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF10Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF11Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF12Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF13Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF14Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF15Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF16Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF17Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF18Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF19Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF20Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF21Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF22Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF23Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsF24Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsBackspacePressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsTabPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsClearPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsEnterPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsLeftShiftPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsLeftControlPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsLeftAltPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsRightShiftPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsRightControlPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsRightAltPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsPausePressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsCapsLockPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsEscapePressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsSpacePressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsPageUpPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsPageDownPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsEndPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsHomePressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsLeftArrowPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsRightArrowPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsUpArrowPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsDownArrowPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsSelectPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsPrintPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsExecutePressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsPrintScreenPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsInsertPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsDeletePressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsHelpPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsLeftWindowsPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsRightWindowsPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsAppsPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsNumpad1Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsNumpad2Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsNumpad3Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsNumpad4Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsNumpad5Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsNumpad6Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsNumpad7Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsNumpad8Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsNumpad9Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsNumpad0Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsSubtractPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsPeriodPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsForwardSlashPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsNumLockPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsScrollLockPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsBrowserBackPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsBrowserForwardPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsBrowserRefreshPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsBrowserStopPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsBrowserSearchPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsBrowserFavoritesPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsBrowserStartPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsVolumeMutePressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsVolumeDownPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsVolumeUpPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsNextTrackPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsPreviousTrackPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsStopTrackPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsPlayPauseTrackPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsStartMailPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsSelectMediaPressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsStartApplication1Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}

bool KeyboardKeyIsPressed::IsStartApplication2Pressed() {
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
        std::cout << "Unsupported platform" << std::endl;
        return false;
    #endif
}


#endif