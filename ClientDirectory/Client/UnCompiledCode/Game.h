// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Game_H
#define Game_H

// C++ imported files
#include <vector>
#include <string>

// Program imported files
#include "Constants.h"
#include "Scene.h"

// Definitions
class Game {
    public: 
        Game(std::string FilePath);
        ~Game();
};

#endif