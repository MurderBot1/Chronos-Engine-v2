// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef Binary_CPP
#define Binary_CPP

// CPP files .h file
#include "Binary.h"

// Redefine vars if needed


// Start of program
float FromBinary::BinaryToFloat(const std::string& Binary) {
    if (Binary.length() != 32) { // Ensure 32 bits for a valid float representation
        Log::Errors.push_back("Binary string must be 32 bits long.");
    }
    // Convert binary string to unsigned 32-bit integer
    uint32_t IntRepresentation = std::bitset<32>(Binary).to_ulong();
    // Reinterpret the integer bits as a float
    float FloatValue = *reinterpret_cast<float*>(&IntRepresentation);
    return FloatValue;
}

int FromBinary::BinaryToInt(const std::string& Binary) {
    if (Binary.length() > 32) { // Ensure the binary string doesn't exceed 32 bits
        Log::Errors.push_back("Binary string must be 32 bits or less.");
    }
    // Convert binary string to unsigned 32-bit integer
    int IntValue = std::bitset<32>(Binary).to_ulong();
    return IntValue;
}

bool FromBinary::BinaryStringToBool(const std::string& Binary) {
    if (Binary == "1") {
        return true;  // "1" represents true
    } else if (Binary == "0") {
        return false; // "0" represents false
    } else {
        Log::Errors.push_back("Invalid binary string for boolean. Use 0 or 1.");
        return false;
    }
}

std::string ToBinary::IntToBinaryString(int Value) {
    return std::bitset<32>(Value).to_string();
}

// Function to convert a float to a binary string
std::string ToBinary::FloatToBinaryString(float Value) {
    // Reinterpret the float as an unsigned 32-bit integer
    uint32_t IntRepresentation = *reinterpret_cast<uint32_t*>(&Value);
    return std::bitset<32>(IntRepresentation).to_string();
}

std::string ToBinary::BoolToBinaryString(bool Value) {
    return Value ? "1" : "0";  // True is "1", False is "0"
}

#endif