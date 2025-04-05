// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef LimitedFunctions_H
#define LimitedFunctions_H

// C++ imported files
#include <functional>
#include <vector>
#include <iostream>

// Program imported files


// Function definitions
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