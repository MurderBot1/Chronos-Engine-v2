// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef IsKeyboardKeyPressed_H
#define IsKeyboardKeyPressed_H

// C++ imported files
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
    Log::Errors.InfoOutputs("Unsupported platform for key inputs");
    return false;
#endif


// Program imported files


// Function definitions
namespace KeyboardKeyIsPressed {
    bool IsAPressed();
    bool IsBPressed();
    bool IsCPressed();
    bool IsDPressed();
    bool IsEPressed();
    bool IsFPressed();
    bool IsGPressed();
    bool IsHPressed();
    bool IsIPressed();
    bool IsJPressed();
    bool IsKPressed();
    bool IsLPressed();
    bool IsMPressed();
    bool IsNPressed();
    bool IsOPressed();
    bool IsPPressed();
    bool IsQPressed();
    bool IsRPressed();
    bool IsSPressed();
    bool IsTPressed();
    bool IsUPressed();
    bool IsVPressed();
    bool IsWPressed();
    bool IsXPressed();
    bool IsYPressed();
    bool IsZPressed();
    bool Is1Pressed();
    bool Is2Pressed();
    bool Is3Pressed();
    bool Is4Pressed();
    bool Is5Pressed();
    bool Is6Pressed();
    bool Is7Pressed();
    bool Is8Pressed();
    bool Is9Pressed();
    bool Is0Pressed();
    bool IsF1Pressed();
    bool IsF2Pressed();
    bool IsF3Pressed();
    bool IsF4Pressed();
    bool IsF5Pressed();
    bool IsF6Pressed();
    bool IsF7Pressed();
    bool IsF8Pressed();
    bool IsF9Pressed();
    bool IsF10Pressed();
    bool IsF11Pressed();
    bool IsF12Pressed();
    bool IsF13Pressed();
    bool IsF14Pressed();
    bool IsF15Pressed();
    bool IsF16Pressed();
    bool IsF17Pressed();
    bool IsF18Pressed();
    bool IsF19Pressed();
    bool IsF20Pressed();
    bool IsF21Pressed();
    bool IsF22Pressed();
    bool IsF23Pressed();
    bool IsF24Pressed();
    bool IsBackspacePressed();
    bool IsTabPressed();
    bool IsClearPressed();
    bool IsEnterPressed();
    bool IsLeftShiftPressed();
    bool IsLeftControlPressed();
    bool IsLeftAltPressed();
    bool IsRightShiftPressed();
    bool IsRightControlPressed();
    bool IsRightAltPressed();
    bool IsPausePressed();
    bool IsCapsLockPressed();
    bool IsEscapePressed();
    bool IsSpacePressed();
    bool IsPageUpPressed();
    bool IsPageDownPressed();
    bool IsEndPressed();
    bool IsHomePressed();
    bool IsLeftArrowPressed();
    bool IsRightArrowPressed();
    bool IsUpArrowPressed();
    bool IsDownArrowPressed();
    bool IsSelectPressed();
    bool IsPrintPressed();
    bool IsExecutePressed();
    bool IsPrintScreenPressed();
    bool IsInsertPressed();
    bool IsDeletePressed();
    bool IsHelpPressed();
    bool IsLeftWindowsPressed();
    bool IsRightWindowsPressed();
    bool IsAppsPressed();
    bool IsNumpad1Pressed();
    bool IsNumpad2Pressed();
    bool IsNumpad3Pressed();
    bool IsNumpad4Pressed();
    bool IsNumpad5Pressed();
    bool IsNumpad6Pressed();
    bool IsNumpad7Pressed();
    bool IsNumpad8Pressed();
    bool IsNumpad9Pressed();
    bool IsNumpad0Pressed();
    bool IsSubtractPressed();
    bool IsPeriodPressed();
    bool IsForwardSlashPressed();
    bool IsNumLockPressed();
    bool IsScrollLockPressed();
    bool IsBrowserBackPressed();
    bool IsBrowserForwardPressed();
    bool IsBrowserRefreshPressed();
    bool IsBrowserStopPressed();
    bool IsBrowserSearchPressed();
    bool IsBrowserFavoritesPressed();
    bool IsBrowserStartPressed();
    bool IsVolumeMutePressed();
    bool IsVolumeDownPressed();
    bool IsVolumeUpPressed();
    bool IsNextTrackPressed();
    bool IsPreviousTrackPressed();
    bool IsStopTrackPressed();
    bool IsPlayPauseTrackPressed();
    bool IsStartMailPressed();
    bool IsSelectMediaPressed();
    bool IsStartApplication1Pressed();
    bool IsStartApplication2Pressed();
};

#endif