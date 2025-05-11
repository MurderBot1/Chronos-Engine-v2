// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Binary_H
#define Binary_H

// C++ imported files
#include <string>
#include <bitset>
#include <cstdint>
#include <cstring>

// Program imported files
#include "Log.h"
#include "Constants.h"

// Definitions
class FromBinary {
    public:
        static float BinaryToFloat(const std::string& Binary);
        static int BinaryToInt(const std::string& Binary);
        static bool BinaryToBool(const std::string& Binary);
};

class ToBinary {
    public:
        static std::string IntToBinaryString(int Value);
        static std::string FloatToBinaryString(float Value);
        static std::string BoolToBinaryString(bool Value);
};

#endif