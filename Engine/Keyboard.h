// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

// C++ imported files
#include <string>
#include <map>
#include <functional>
#include <vector>

// Program imported files


// Function definitions
class Keys {
    public:
        bool IsKeyPressed(std::string Key);
        std::vector<std::string> AllKeysPressed();
};

class Keybinds {
    public:
        Keybinds(std::string KeybindsFilePath);
        std::map<std::string, std::function<void>> KeybindsMap;
};