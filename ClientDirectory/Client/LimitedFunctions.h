// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef LimitedFunctions_H
#define LimitedFunctions_H

// C++ imported files
#include <functional>
#include <vector>

// Program imported files
#include "Log.h"

// Definitions
class LimitedFunction {
    public:
        LimitedFunction(int MaxCallPerFrame, std::function<void()> Function) {
            AllLimitedFunctions.push_back(this);
            this->MaxCallPerFrame = MaxCallPerFrame;
            this->Function = Function;
        }
        static std::vector<LimitedFunction*> AllLimitedFunctions;
        int MaxCallPerFrame;
        int CalledThisFrame;
        std::function<void()> Function;
        static void ResetAllLimitedFunctions();
        void RunFunction();
};

#endif