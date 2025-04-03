// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

// C++ imported files
#include <vector>
#include <string>
#include <map>
#include <fstream>

// Program imported files


// Function definitions
class Keys {
    public:
        bool IsKeyPressed(std::string Key);
        std::map<std::string, bool> KeyIsDown;
        void AssignAllKeys();
        std::vector<std::string> AllKeysPressed();
};