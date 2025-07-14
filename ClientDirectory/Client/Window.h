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

// Definitions
class WindowCreatorTemplate {
    public:
        virtual ~WindowCreatorTemplate() = default;  
    
        virtual void SetupWindow() = 0;
        virtual void UpdateWindow() = 0;
        virtual void DestroyWindow() = 0;
};

// Include OS window libs and window classes
#ifdef _WIN32
    #include <windows.h>
    class GameWindowWindows : public WindowCreatorTemplate {
        public:
            GameWindowWindows(HINSTANCE hInst, const wchar_t* windowTitle, int x, int y, int width, int height);
            ~GameWindowWindows() override; 

            void SetupWindow() override;
            void UpdateWindow() override;
            void DestroyWindow() override;

            HWND GetHWND() const;
        protected:
            static LRESULT CALLBACK StaticWindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
            LRESULT HandleMessage(UINT msg, WPARAM wParam, LPARAM lParam);

            HINSTANCE hInstance;
            const wchar_t* title;
            int posX, posY, width, height;
            HWND hwnd;
    };

    class GameWindow : public GameWindowWindows {
        public:
            GameWindow(HINSTANCE hInst, const wchar_t* windowTitle, int x, int y, int width, int height);
    };
#elif __linux__
    class GameWindowLinux : public WindowCreatorTemplate {
        public:
            ~GameWindowLinux() override; 

            void SetupWindow() override;
            void UpdateWindow() override;
            void DestroyWindow() override;
        protected:

    };

    class GameWindow : public GameWindowLinux {};
#elif __APPLE__
    class GameWindowMac : public WindowCreatorTemplate {
        public:
            ~GameWindowMac() override; 

            void SetupWindow() override;
            void UpdateWindow() override;
            void DestroyWindow() override;
        protected:

    };

    class GameWindow : public GameWindowMac {};
#else
#endif

#endif