// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Window_H
#define Window_H

// C++ imported files
#include <array>
#include <vector>
#include <cmath>

// Program imported files
#include "Constants.h"
#include "Settings.h"
#include "Vector.h"
#include "Image.h"
#include "FrameManager.h"

// OS imports
#include "GraphicsLibraries.h"

// Definitions
class WindowCreatorTemplate {
    public:
        virtual ~WindowCreatorTemplate() = default;  
    
        virtual void SetupWindow() = 0;
        virtual void UpdateWindow() = 0;
        virtual void DestroyWindow() = 0;
        virtual void ToggleFullscreen() = 0;

        virtual int GetScreenX() = 0;
        virtual int GetScreenY() = 0;
};

// Include OS window libs and window classes
#ifdef Windows
    class GameWindowWindows : public WindowCreatorTemplate {
        public:
            GameWindowWindows();
            void SetupWindow() override;
            void UpdateWindow() override;
            void DestroyWindow() override;
            void ToggleFullscreen() override;

            int GetScreenX() override;
            int GetScreenY() override;

            HWND hwnd;
        protected:
            static LRESULT CALLBACK WindowProc(HWND hwnd, UINT UMsg, WPARAM WParam, LPARAM LParam);
            HINSTANCE HInstance;
            bool Running;
            RECT   WindowedRect{};
            DWORD  WindowedStyle{};
            DWORD  WindowedExStyle{};
            bool   Fullscreen = false;
    };

    class Window : public GameWindowWindows {};
#elif Linux
    class GameWindowLinux : public WindowCreatorTemplate {
        public:
            ~GameWindowLinux() override; 

            void SetupWindow() override;
            void UpdateWindow() override;
            void DestroyWindow() override;
            void ToggleFullscreen() override;
            
            int GetScreenX() override;
            int GetScreenY() override;
        protected:

    };

    class Window : public GameWindowLinux {};
#elif Mac
    class GameWindowMac : public WindowCreatorTemplate {
        public:
            ~GameWindowMac() override; 

            void SetupWindow() override;
            void UpdateWindow() override;
            void DestroyWindow() override;
            void ToggleFullscreen() override;
            
            int GetScreenX() override;
            int GetScreenY() override;
        protected:

    };

    class Window : public GameWindowMac {};
#else
#endif

class WindowManager {
    public:
        static Window GameWindow;
};

#endif