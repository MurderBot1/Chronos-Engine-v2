// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

// C++ imported files
#include <string>
#include <bitset>
#include <cstdint>
#include <iostream>

// Program imported files


// Function definitions
class FromBinary {
    public:
        static float BinaryToFloat(const std::string& Binary);
        static int BinaryToInt(const std::string& Binary);
        static bool BinaryStringToBool(const std::string& Binary);
};

class ToBinary {
    public:
        static std::string IntToBinaryString(int Value);
        static std::string FloatToBinaryString(float Value);
        static std::string BoolToBinaryString(bool Value);
};