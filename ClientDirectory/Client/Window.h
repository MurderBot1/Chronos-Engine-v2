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
            GameWindowWindows();
            void SetupWindow() override;
            void UpdateWindow() override;
            void DestroyWindow() override;

        protected:
            static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
            HWND hwnd;
            HINSTANCE hInstance;
            bool running;
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
#elif __APPLE__
    class GameWindowMac : public WindowCreatorTemplate {
        public:
            ~GameWindowMac() override; 

            void SetupWindow() override;
            void UpdateWindow() override;
            void DestroyWindow() override;
        protected:

    };
#else
#endif

#endif