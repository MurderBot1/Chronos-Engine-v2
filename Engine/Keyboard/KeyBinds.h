// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

// C++ imported files
#include <string>
#include <map>
#include <functional>

// Program imported files
#include "KeyboardFunctions.h"

// Function definitions
class Keybinds {
    public:
        Keybinds(std::string KeybindsFilePath);
        std::map<std::string, std::function<void>> KeybindsMap;
};