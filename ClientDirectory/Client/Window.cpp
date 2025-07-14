// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Window_CPP
#define Window_CPP

// Include the C++'s .h file
#include "Window.h"

// Variable redefinitions


// Definitions
#ifdef _WIN32
    #include <windows.h>
    GameWindowWindows::GameWindowWindows(HINSTANCE hInst, const wchar_t* windowTitle, int x, int y, int w, int h)
        : hInstance(hInst), title(windowTitle), posX(x), posY(y), width(w), height(h), hwnd(nullptr) {}

    GameWindow::GameWindow(HINSTANCE hInst, const wchar_t* windowTitle, int x, int y, int w, int h)
        : GameWindowWindows(hInst, windowTitle, x, y, w, h) {}

    GameWindowWindows::~GameWindowWindows() {
        DestroyWindow();
    }

    void GameWindowWindows::SetupWindow() {
        const wchar_t* className = L"GameWindowClass";

        WNDCLASSW wc = {};
        wc.lpfnWndProc = StaticWindowProc;
        wc.hInstance = hInstance;
        wc.lpszClassName = className;  // className should be const wchar_t*
        int CheckReg = RegisterClassW(&wc);

        if(CheckReg == 0)
            std::cout << "Error code: " << GetLastError() << "\n";

        hwnd = CreateWindowExW(
            0, className, title, WS_OVERLAPPEDWINDOW,
            posX, posY, width, height,
            nullptr, nullptr, hInstance, this
        );
    }

    void GameWindowWindows::UpdateWindow() {
        MSG msg = {};
        while (GetMessage(&msg, nullptr, 0, 0)) {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    void GameWindowWindows::DestroyWindow() {
        if (hwnd) {
            ::DestroyWindow(hwnd);
            hwnd = nullptr;
        }
    }

    HWND GameWindowWindows::GetHWND() const {
        return hwnd;
    }

    LRESULT CALLBACK GameWindowWindows::StaticWindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
        GameWindowWindows* window = nullptr;

        if (msg == WM_NCCREATE) {
            CREATESTRUCT* cs = reinterpret_cast<CREATESTRUCT*>(lParam);
            window = static_cast<GameWindowWindows*>(cs->lpCreateParams);
            SetWindowLongPtr(hwnd, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(window));
            window->hwnd = hwnd;
        } else {
            window = reinterpret_cast<GameWindowWindows*>(GetWindowLongPtr(hwnd, GWLP_USERDATA));
        }

        return window ? window->HandleMessage(msg, wParam, lParam) : DefWindowProc(hwnd, msg, wParam, lParam);
    }

    LRESULT GameWindowWindows::HandleMessage(UINT msg, WPARAM wParam, LPARAM lParam) {
        switch (msg) {
            case WM_DESTROY:
                std::wcout << L"Window \"" << title << L"\" destroyed\n";
                PostQuitMessage(0);
                return 0;
            default:
                return DefWindowProc(hwnd, msg, wParam, lParam);
        }
    }
#elif __linux__
    GameWindowLinux::~GameWindowLinux() {
        
    }

    void GameWindowLinux::SetupWindow() const {

    }

    void GameWindowLinux::UpdateWindow() const {

    }

    void GameWindowLinux::DestroyWindow() const {

    }
#elif __APPLE__
    GameWindowMac::~GameWindowMac() {
        
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