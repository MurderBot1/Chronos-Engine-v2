// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Window_CPP
#define Window_CPP

// Include the C++'s .h file
#include "Window.h"

// Variable redefinitions
Window WindowManager::GameWindow;

// Definitions
#ifdef _WIN32
    #include <windows.h>

    GameWindowWindows::GameWindowWindows()
        : hwnd(nullptr), hInstance(GetModuleHandle(nullptr)), running(false) {}

    LRESULT CALLBACK GameWindowWindows::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
        switch (uMsg) {
            case WM_DESTROY:
                PostQuitMessage(0);
                return 0;
            case WM_PAINT:
            {
                PAINTSTRUCT ps;
                HDC hdc = BeginPaint(hwnd, &ps);
                {
                    std::lock_guard<std::mutex> lock(FrameManager::DisplayImage_MX);
                    FrameManager::DisplayImage.Draw(hdc, 0, 0, ps.rcPaint.right, ps.rcPaint.bottom);
                }
                EndPaint(hwnd, &ps);
                return 0;
            }
        }
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }

    void GameWindowWindows::SetupWindow() {
        const char CLASS_NAME[] = "Game";

        WNDCLASSA wc = {};
        wc.lpfnWndProc   = GameWindowWindows::WindowProc;
        wc.hInstance     = hInstance;
        wc.lpszClassName = CLASS_NAME;
        wc.hCursor       = LoadCursor(nullptr, IDC_ARROW);

        RegisterClassA(&wc);

        std::string Temp(Args::Game);  
        LPCSTR WindowName = Temp.c_str();

        hwnd = CreateWindowExA(
            0,
            CLASS_NAME,
            WindowName,
            WS_OVERLAPPEDWINDOW,
            CW_USEDEFAULT, CW_USEDEFAULT,
            800, 600,
            nullptr,
            nullptr,
            hInstance,
            nullptr
        );

        if (hwnd) {
            ShowWindow(hwnd, SW_SHOW);
            ::UpdateWindow(hwnd);
            running = true;
        }
    }

    void GameWindowWindows::UpdateWindow() {
        MSG msg = {};
        if (PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) {
                running = false;
            }
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

        if (!IsWindow(hwnd)) {
            Exit::ExitTheProgram();
        }
    }

    void GameWindowWindows::DestroyWindow() {
        if (hwnd) {
            ::DestroyWindow(hwnd);
            hwnd = nullptr;
            running = false;
        }
    }
#elif __linux__
    GameWindowLinux::GameWindowLinux() {
        
    }

    void GameWindowLinux::SetupWindow() const {

    }

    void GameWindowLinux::UpdateWindow() const {

    }

    void GameWindowLinux::DestroyWindow() const {

    }
#elif __APPLE__
    GameWindowMac::GameWindowMac() {
        
    }

    void GameWindowMac::SetupWindow() const {

    }

    void GameWindowMac::UpdateWindow() const {

    }

    void GameWindowMac::DestroyWindow() const {

    }
#else
#endif

#endif