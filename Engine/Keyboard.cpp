// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef Keyboard_CPP
#define Keyboard_CPP

// CPP files .h file
#include "Keyboard.h"

// Redefine vars if needed
bool Keyboard::IsDisabled;
int Settings::NumCoresForKeyboard;

// Start of program
std::map<std::string, bool> Keyboard::KeysPressed() {
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

bool Keyboard::IsKeyPressed(KeyboardKeys Key) {
    switch (Key){
        case A: return KeyboardKeyIsPressed::IsAPressed();
        case B: return KeyboardKeyIsPressed::IsBPressed();
        case C: return KeyboardKeyIsPressed::IsCPressed();
        case D: return KeyboardKeyIsPressed::IsDPressed();
        case E: return KeyboardKeyIsPressed::IsEPressed();
        case F: return KeyboardKeyIsPressed::IsFPressed();
        case G: return KeyboardKeyIsPressed::IsGPressed();
        case H: return KeyboardKeyIsPressed::IsHPressed();
        case I: return KeyboardKeyIsPressed::IsIPressed();
        case J: return KeyboardKeyIsPressed::IsJPressed();
        case K: return KeyboardKeyIsPressed::IsKPressed();
        case L: return KeyboardKeyIsPressed::IsLPressed();
        case M: return KeyboardKeyIsPressed::IsMPressed();
        case N: return KeyboardKeyIsPressed::IsNPressed();
        case O: return KeyboardKeyIsPressed::IsOPressed();
        case P: return KeyboardKeyIsPressed::IsPPressed();
        case Q: return KeyboardKeyIsPressed::IsQPressed();
        case R: return KeyboardKeyIsPressed::IsRPressed();
        case S: return KeyboardKeyIsPressed::IsSPressed();
        case T: return KeyboardKeyIsPressed::IsTPressed();
        case U: return KeyboardKeyIsPressed::IsUPressed();
        case V: return KeyboardKeyIsPressed::IsVPressed();
        case W: return KeyboardKeyIsPressed::IsWPressed();
        case X: return KeyboardKeyIsPressed::IsXPressed();
        case Y: return KeyboardKeyIsPressed::IsYPressed();
        case Z: return KeyboardKeyIsPressed::IsZPressed();
        case One: return KeyboardKeyIsPressed::Is1Pressed();
        case Two: return KeyboardKeyIsPressed::Is2Pressed();
        case Three: return KeyboardKeyIsPressed::Is3Pressed();
        case Four: return KeyboardKeyIsPressed::Is4Pressed();
        case Five: return KeyboardKeyIsPressed::Is5Pressed();
        case Six: return KeyboardKeyIsPressed::Is6Pressed();
        case Seven: return KeyboardKeyIsPressed::Is7Pressed();
        case Eight: return KeyboardKeyIsPressed::Is8Pressed();
        case Nine: return KeyboardKeyIsPressed::Is9Pressed();
        case Ten: return KeyboardKeyIsPressed::Is0Pressed();
        case F1: return KeyboardKeyIsPressed::IsF1Pressed();
        case F2: return KeyboardKeyIsPressed::IsF2Pressed();
        case F3: return KeyboardKeyIsPressed::IsF3Pressed();
        case F4: return KeyboardKeyIsPressed::IsF4Pressed();
        case F5: return KeyboardKeyIsPressed::IsF5Pressed();
        case F6: return KeyboardKeyIsPressed::IsF6Pressed();
        case F7: return KeyboardKeyIsPressed::IsF7Pressed();
        case F8: return KeyboardKeyIsPressed::IsF8Pressed();
        case F9: return KeyboardKeyIsPressed::IsF9Pressed();
        case F10: return KeyboardKeyIsPressed::IsF10Pressed();
        case F11: return KeyboardKeyIsPressed::IsF11Pressed();
        case F12: return KeyboardKeyIsPressed::IsF12Pressed();
        case F13: return KeyboardKeyIsPressed::IsF13Pressed();
        case F14: return KeyboardKeyIsPressed::IsF14Pressed();
        case F15: return KeyboardKeyIsPressed::IsF15Pressed();
        case F16: return KeyboardKeyIsPressed::IsF16Pressed();
        case F17: return KeyboardKeyIsPressed::IsF17Pressed();
        case F18: return KeyboardKeyIsPressed::IsF18Pressed();
        case F19: return KeyboardKeyIsPressed::IsF19Pressed();
        case F20: return KeyboardKeyIsPressed::IsF20Pressed();
        case F21: return KeyboardKeyIsPressed::IsF21Pressed();
        case F22: return KeyboardKeyIsPressed::IsF22Pressed();
        case F23: return KeyboardKeyIsPressed::IsF23Pressed();
        case F24: return KeyboardKeyIsPressed::IsF24Pressed();
        case Backspace: return KeyboardKeyIsPressed::IsBackspacePressed();
        case Tab: return KeyboardKeyIsPressed::IsTabPressed();
        case Clear: return KeyboardKeyIsPressed::IsClearPressed();
        case Enter: return KeyboardKeyIsPressed::IsEnterPressed();
        case LeftShift: return KeyboardKeyIsPressed::IsLeftShiftPressed();
        case LeftControl: return KeyboardKeyIsPressed::IsLeftControlPressed();
        case LeftAlt: return KeyboardKeyIsPressed::IsLeftAltPressed();
        case RightShift: return KeyboardKeyIsPressed::IsRightShiftPressed();
        case RightControl: return KeyboardKeyIsPressed::IsRightControlPressed();
        case RightAlt: return KeyboardKeyIsPressed::IsRightAltPressed();
        case Pause: return KeyboardKeyIsPressed::IsPausePressed();
        case CapsLock: return KeyboardKeyIsPressed::IsCapsLockPressed();
        case Esc: return KeyboardKeyIsPressed::IsEscapePressed();
        case Space: return KeyboardKeyIsPressed::IsSpacePressed();
        case PageUp: return KeyboardKeyIsPressed::IsPageUpPressed();
        case PageDown: return KeyboardKeyIsPressed::IsPageDownPressed();
        case End: return KeyboardKeyIsPressed::IsEndPressed();
        case Home: return KeyboardKeyIsPressed::IsHomePressed();
        case LeftArrow: return KeyboardKeyIsPressed::IsLeftArrowPressed();
        case RightArrow: return KeyboardKeyIsPressed::IsRightArrowPressed();
        case UpArrow: return KeyboardKeyIsPressed::IsUpArrowPressed();
        case DownArrow: return KeyboardKeyIsPressed::IsDownArrowPressed();
        case Select: return KeyboardKeyIsPressed::IsSelectPressed();
        case Print: return KeyboardKeyIsPressed::IsPrintPressed();
        case Execute: return KeyboardKeyIsPressed::IsExecutePressed();
        case PrintScreen: return KeyboardKeyIsPressed::IsPrintScreenPressed();
        case Insert: return KeyboardKeyIsPressed::IsInsertPressed();
        case Delete: return KeyboardKeyIsPressed::IsDeletePressed();
        case Help: return KeyboardKeyIsPressed::IsHelpPressed();
        case LeftWindows: return KeyboardKeyIsPressed::IsLeftWindowsPressed();
        case RightWindows: return KeyboardKeyIsPressed::IsRightWindowsPressed();
        case Apps: return KeyboardKeyIsPressed::IsAppsPressed();
        case Numpad1: return KeyboardKeyIsPressed::IsNumpad1Pressed();
        case Numpad2: return KeyboardKeyIsPressed::IsNumpad2Pressed();
        case Numpad3: return KeyboardKeyIsPressed::IsNumpad3Pressed();
        case Numpad4: return KeyboardKeyIsPressed::IsNumpad4Pressed();
        case Numpad5: return KeyboardKeyIsPressed::IsNumpad5Pressed();
        case Numpad6: return KeyboardKeyIsPressed::IsNumpad6Pressed();
        case Numpad7: return KeyboardKeyIsPressed::IsNumpad7Pressed();
        case Numpad8: return KeyboardKeyIsPressed::IsNumpad8Pressed();
        case Numpad9: return KeyboardKeyIsPressed::IsNumpad9Pressed();
        case Numpad0: return KeyboardKeyIsPressed::IsNumpad0Pressed();
        case Subtract: return KeyboardKeyIsPressed::IsSubtractPressed();
        case Period: return KeyboardKeyIsPressed::IsPeriodPressed();
        case ForwardSlash: return KeyboardKeyIsPressed::IsForwardSlashPressed();
        case NumLock: return KeyboardKeyIsPressed::IsNumLockPressed();
        case ScrollLock: return KeyboardKeyIsPressed::IsScrollLockPressed();
        case BrowserBack: return KeyboardKeyIsPressed::IsBrowserBackPressed();
        case BrowserForward: return KeyboardKeyIsPressed::IsBrowserForwardPressed();
        case BrowserRefresh: return KeyboardKeyIsPressed::IsBrowserRefreshPressed();
        case BrowserStop: return KeyboardKeyIsPressed::IsBrowserStopPressed();
        case BrowserSearch: return KeyboardKeyIsPressed::IsBrowserSearchPressed();
        case BrowserFavorites: return KeyboardKeyIsPressed::IsBrowserFavoritesPressed();
        case BrowserStart: return KeyboardKeyIsPressed::IsBrowserStartPressed();
        case VolumeMute: return KeyboardKeyIsPressed::IsVolumeMutePressed();
        case VolumeDown: return KeyboardKeyIsPressed::IsVolumeDownPressed();
        case VolumeUp: return KeyboardKeyIsPressed::IsVolumeUpPressed();
        case NextTrack: return KeyboardKeyIsPressed::IsNextTrackPressed();
        case PreviousTrack: return KeyboardKeyIsPressed::IsPreviousTrackPressed();
        case StopTrack: return KeyboardKeyIsPressed::IsStopTrackPressed();
        case PlayPauseTrack: return KeyboardKeyIsPressed::IsPlayPauseTrackPressed();
        case StartMail: return KeyboardKeyIsPressed::IsStartMailPressed();
        case SelectMedia: return KeyboardKeyIsPressed::IsSelectMediaPressed();
        case StartApplication1: return KeyboardKeyIsPressed::IsStartApplication1Pressed();
        case StartApplication2: return KeyboardKeyIsPressed::IsStartApplication2Pressed();
        default: return false;
    }
}

void Keyboard::CallAllKeyboardFunctionsIfKeyIsPressed(){
    if(!Keyboard::IsDisabled) {
        std::map<std::string, bool> KeysPressed = Keyboard::KeysPressed();

        if(KeysPressed["RightControl"] || KeysPressed["LefttControl"]) {
            if(KeysPressed["RightShift"] || KeysPressed["LeftShift"]) {
                if(KeysPressed["RightAlt"] || KeysPressed["LeftAlt"]) {
                    if(KeysPressed["RightWindows"] || KeysPressed["LeftWindows"]) { // Ctrl Shift Alt OSKey
                        KeyboardCommands::KeysOsKeySHIFTALTCTRL();
                    } else { // Ctrl Shift Alt
                        KeyboardCommands::KeysSHIFTALTCTRL();
                    }
                } else {
                    if(KeysPressed["RightWindows"] || KeysPressed["LeftWindows"]) { // Ctrl Shift OSKey
                        KeyboardCommands::KeysOsKeySHIFTCTRL();
                    } else { // Ctrl Shift
                        KeyboardCommands::KeysSHIFTCTRL();
                    }
                }
            } else {
                if(KeysPressed["RightAlt"] || KeysPressed["LeftAlt"]) {
                    if(KeysPressed["RightWindows"] || KeysPressed["LeftWindows"]) { // Ctrl Alt OSKey
                        KeyboardCommands::KeysOsKeysALTCTRL();
                    } else { // Ctrl Alt
                        KeyboardCommands::KeysALTCTRL();
                    }
                } else {
                    if(KeysPressed["RightWindows"] || KeysPressed["LeftWindows"]) { // Ctrl OSKey
                        KeyboardCommands::KeysOsKeyCTRL();
                    } else { // Ctrl
                        KeyboardCommands::KeysCTRL();
                    }
                }
            }
        } else {
            if(KeysPressed["RightShift"] || KeysPressed["LeftShift"]) {
                if(KeysPressed["RightAlt"] || KeysPressed["LeftAlt"]) {
                    if(KeysPressed["RightWindows"] || KeysPressed["LeftWindows"]) { // Shift Alt OSKey
                        KeyboardCommands::KeysOsKeySHIFTALT();
                    } else { // Shift Alt
                        KeyboardCommands::KeysSHIFTALT(); 
                    }
                } else {
                    if(KeysPressed["RightWindows"] || KeysPressed["LeftWindows"]) { // Shift OSKey
                        KeyboardCommands::KeysOsKeySHIFT();
                    } else { // Shift
                        KeyboardCommands::KeysSHIFT();
                    }
                }
            } else {
                if(KeysPressed["RightAlt"] || KeysPressed["LeftAlt"]) {
                    if(KeysPressed["RightWindows"] || KeysPressed["LeftWindows"]) { // Alt OSKey
                        KeyboardCommands::KeysOsKeysALT();
                    } else { // Alt
                        KeyboardCommands::KeysALT();
                    }
                } else {
                    if(KeysPressed["RightWindows"] || KeysPressed["LeftWindows"]) { // OSKey
                        KeyboardCommands::KeysOsKey();
                    } else { // None
                        KeyboardCommands::Keys();
                    }
                }
            }
        }
    }
}

#endif