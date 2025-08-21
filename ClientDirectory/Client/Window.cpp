// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Window_CPP
#define Window_CPP

// Include the C++'s .h file
#include "Window.h"

// Variable redefinitions
Window WindowManager::GameWindow;

// Definitions
#ifdef Windows
    namespace WindowUtils {
        std::wstring STWS(const std::string& str) {
            if (str.empty()) return std::wstring();
    
            int size_needed = MultiByteToWideChar(CP_UTF8, 0,
                                                str.data(), (int)str.size(),
                                                nullptr, 0);
    
            std::wstring wstr(size_needed, 0);
            MultiByteToWideChar(
                CP_UTF8, 0,
                str.data(), (int)str.size(),
                &wstr[0], size_needed
            );
    
            return wstr;
        }
    };

    GameWindowWindows::GameWindowWindows()
        : hwnd(nullptr), HInstance(GetModuleHandle(nullptr)), Running(false) {}

    LRESULT CALLBACK GameWindowWindows::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
        if (uMsg == WM_NCCREATE) {
            auto cs = reinterpret_cast<CREATESTRUCT*>(lParam);
            SetWindowLongPtr(hwnd, GWLP_USERDATA, (LONG_PTR)cs->lpCreateParams);
        }
        auto* self = reinterpret_cast<GameWindowWindows*>(GetWindowLongPtr(hwnd, GWLP_USERDATA));


        switch (uMsg) {
            case WM_DESTROY:
                PostQuitMessage(0);
                return 0;
            case WM_PAINT:
            {
                PAINTSTRUCT PS;
                HDC hdc = BeginPaint(hwnd, &PS);
                {
                    std::lock_guard<std::mutex> lock(FrameManager::DisplayImage_MX);
                    FrameManager::DisplayImage.Draw(hdc, 0, 0, PS.rcPaint.right, PS.rcPaint.bottom);
                }
                EndPaint(hwnd, &PS);
                return 0;
            }
            case WM_KEYDOWN:
                if (wParam == VK_F11 && self) {
                    self->ToggleFullscreen();
                    return 0;
                }
                break;
        }
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }

    void GameWindowWindows::SetupWindow() {
        const char CLASS_NAME[] = "Game";

        WNDCLASSA wc = {};
        wc.lpfnWndProc   = GameWindowWindows::WindowProc;
        wc.hInstance     = HInstance;
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
            HInstance,
            this
        );

        if (hwnd) {
            ShowWindow(hwnd, SW_SHOW);
            ::UpdateWindow(hwnd);
            Running = true;
        }
        ChronosImage IMG;
        if (IMG.Load(WindowUtils::STWS(CurrentPath.string() + "\\" + std::string{Args::Game} + "\\GameData\\Assets\\Logos\\Logo.bmp"))) {
            IMG.SetAsWindowIcon(hwnd);
        }
    }

    void GameWindowWindows::UpdateWindow() {
        MSG msg = {};
        if (PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) {
                Running = false;
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
            Running = false;
        }
    }

    void GameWindowWindows::ToggleFullscreen() {
        if (!Fullscreen) {
            // Save windowed state
            WindowedStyle   = GetWindowLong(hwnd, GWL_STYLE);
            WindowedExStyle = GetWindowLong(hwnd, GWL_EXSTYLE);
            GetWindowRect(hwnd, &WindowedRect);

            // Find the monitor the window is on
            HMONITOR HMon = MonitorFromWindow(hwnd, MONITOR_DEFAULTTONEAREST);
            MONITORINFO MI{};
            MI.cbSize = sizeof(MI);
            GetMonitorInfo(HMon, &MI);

            // Strip borders/title bar
            SetWindowLong(hwnd, GWL_STYLE,   WindowedStyle   & ~(WS_CAPTION | WS_THICKFRAME));
            SetWindowLong(hwnd, GWL_EXSTYLE, WindowedExStyle & ~(WS_EX_DLGMODALFRAME | WS_EX_WINDOWEDGE | WS_EX_CLIENTEDGE | WS_EX_STATICEDGE));

            // Fill the monitor
            SetWindowPos(
                hwnd, nullptr,
                MI.rcMonitor.left, MI.rcMonitor.top,
                MI.rcMonitor.right  - MI.rcMonitor.left,
                MI.rcMonitor.bottom - MI.rcMonitor.top,
                SWP_NOZORDER | SWP_FRAMECHANGED
            );

            Fullscreen = true;
        } else {
            // Restore original style and position
            SetWindowLong(hwnd, GWL_STYLE,   WindowedStyle);
            SetWindowLong(hwnd, GWL_EXSTYLE, WindowedExStyle);

            SetWindowPos(
                hwnd, nullptr,
                WindowedRect.left,  WindowedRect.top,
                WindowedRect.right  - WindowedRect.left,~
                WindowedRect.bottom - WindowedRect.top,
                SWP_NOZORDER | SWP_FRAMECHANGED
            );

            Fullscreen = false;
        }
    }

    int GameWindowWindows::GetScreenX() {
        RECT rect;
        GetClientRect(hwnd, &rect);
        return rect.right - rect.left;
    }

    int GameWindowWindows::GetScreenY() {
        RECT rect;
        GetClientRect(hwnd, &rect);
        return rect.bottom - rect.top;
    }
#elif Linux
    GameWindowLinux::~GameWindowLinux() {
        
    }

    void GameWindowLinux::SetupWindow() {

    }

    void GameWindowLinux::UpdateWindow() {

    }

    void GameWindowLinux::DestroyWindow() {

    }

    void GameWindowLinux::ToggleFullscreen() {

    }
            
    int GameWindowLinux::GetScreenX() {

    }

    int GameWindowLinux::GetScreenY() {

    }
#elif Mac
    GameWindowMac::~GameWindowMac() {
        
    }

    void GameWindowMac::SetupWindow() {

    }

    void GameWindowMac::UpdateWindow() {

    }

    void GameWindowMac::DestroyWindow() {

    }

    void GameWindowMac::ToggleFullscreen() {

    }
            
    int GameWindowMac::GetScreenX() {

    }

    int GameWindowMac::GetScreenY() {

    }
#else
#endif

#endif