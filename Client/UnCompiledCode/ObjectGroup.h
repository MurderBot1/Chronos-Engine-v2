// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef ObjectGroup_H
#define ObjectGroup_H

// C++ imported files
#include <vector>

// Program imported files
#include "Object.h"

// Function definitions
class ObjectGroup {
    public: 
        std::vector<Object*> ObjectsInGroup;
        
};

#endif