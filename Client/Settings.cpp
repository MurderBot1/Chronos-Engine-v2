// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Settings_CPP
#define Settings_CPP

// CPP files .h file
#include "Settings.h"

// Redefine vars if needed
GraphicLevels Settings::GraphicLevel; // Sets all settings to this level when Settings::SetAsGraphicsLevel(); Is Ran
GraphicLevels Settings::Lighting; // How accurate is the lighting
GraphicLevels Settings::Shaders; // What level of shaders are used
GraphicLevels Settings::Particles; // What level of particles are used
GraphicLevels Settings::Shadows; // What level of shadows are used
GraphicLevels Settings::SSAntiAllasing; // Settings and there levels are shown below
int16_t Settings::ResolutionX; // Horizontal resolution of the display
int16_t Settings::ResolutionY; // Vertical resolution of the display
int16_t Settings::MaxFPS; // Maximum FPS the engine will output
bool Settings::SetFPSAtMonitersMax; // Limit the FPS to the moniters maximum
float Settings::Sensitivity; // The current multipier to the mouse DPI
float Settings::FOV; // The current field of vision for the camera
int8_t Settings::Bounces; // The current number of bounces each ray makes while rendering the scene
bool Settings::UseBounces; // Does the ray bounce while rendering the scene
bool Settings::GPURendering; // Does the engine use the GPU
float Settings::Volume; // The current volume multipier for the engine

void Settings::LoadGraphicsSettings(std::string FilePath) {
    // Graphics
    // Define the variables to load the file in
    constexpr int NumLines = 10;
    std::ifstream SettingsFile(FilePath);
    std::array<std::string, NumLines> Lines;
    std::string Line;
    size_t Index = 0;

    // Check if the file can be opened
    if(!SettingsFile.is_open()) {return;};

    // Load the file in
    while (std::getline(SettingsFile, Line) && Index < NumLines) {
        Lines[Index++] = Line;
    }
    
    // Load the file in to the settings it corrisponds with
    // Moniter settings
    Settings::ResolutionX = FromBinary::BinaryToInt(Lines[0]);
    Settings::ResolutionY = FromBinary::BinaryToInt(Lines[1]); 
    Settings::MaxFPS = FromBinary::BinaryToInt(Lines[2]);       
    Settings::SetFPSAtMonitersMax = FromBinary::BinaryStringToBool(Lines[3]);

    // Graphics levels
    Settings::GraphicLevel = Settings::DecodeGraphicLevels(Lines[4]);
    Settings::Lighting = Settings::DecodeGraphicLevels(Lines[5]);
    Settings::Shaders = Settings::DecodeGraphicLevels(Lines[6]);
    Settings::Particles = Settings::DecodeGraphicLevels(Lines[7]);
    Settings::Shadows = Settings::DecodeGraphicLevels(Lines[8]);
    Settings::SSAntiAllasing = Settings::DecodeGraphicLevels(Lines[9]);

    SettingsFile.close(); // Close the file
}

void Settings::LoadAudioSettings(std::string FilePath) {
    // Audio
    // Define the variables to load the file in
    constexpr int NumLines = 1;
    std::ifstream SettingsFile(FilePath);
    std::array<std::string, NumLines> Lines;
    std::string Line;
    size_t Index = 0;

    // Check if the file can be opened
    if(!SettingsFile.is_open()) {return;};

    // Load the file in
    while (std::getline(SettingsFile, Line) && Index < NumLines) {
        Lines[Index++] = Line;
    }
    
    // Load the variables from the file
    Settings::Volume = FromBinary::BinaryToFloat(Lines[0]);

    SettingsFile.close(); // Close the file
}

void Settings::LoadRenderingSettings(std::string FilePath) {
    // Rendering
    // Define the variables to load the file in
    constexpr int NumLines = 3;
    std::ifstream SettingsFile(FilePath);
    std::array<std::string, NumLines> Lines;
    std::string Line;
    size_t Index = 0;

    // Check if the file can be opened
    if(!SettingsFile.is_open()) {return;};

    // Load the file in
    while (std::getline(SettingsFile, Line) && Index < NumLines) {
        Lines[Index++] = Line;
    }

    // Load the variables from the file
    Settings::GPURendering = FromBinary::BinaryStringToBool(Lines[0]); 
    Settings::UseBounces = FromBinary::BinaryStringToBool(Lines[1]);
    Settings::Bounces = FromBinary::BinaryToInt(Lines[2]);               

    SettingsFile.close(); // Close the file
}

void Settings::LoadOptionsSettings(std::string FilePath) {
    // Options
    // Define the variables to load the file in
    constexpr int NumLines = 2;
    std::ifstream SettingsFile(FilePath);
    std::array<std::string, NumLines> Lines;
    std::string Line;
    size_t Index = 0;

    // Check if the file can be opened
    if(!SettingsFile.is_open()) {return;};

    // Load the file in
    while (std::getline(SettingsFile, Line) && Index < NumLines) {
        Lines[Index++] = Line;
    }

    // Load the variables from the file
    Settings::FOV = FromBinary::BinaryToInt(Lines[0]);
    Settings::Sensitivity = FromBinary::BinaryToFloat(Lines[1]);

    SettingsFile.close(); // Close the file
}


void Settings::LoadSettings(std::string LoadSettingsPath) {
    // Options
    // Define the variables to load the file in
    constexpr int NumLines = 4;
    std::ifstream SettingsFile(LoadSettingsPath);
    std::array<std::string, NumLines> Lines;
    std::string Line;
    size_t Index = 0;

    // Check if the file can be opened
    if(!SettingsFile.is_open()) {return;};

    // Load the file in
    while (std::getline(SettingsFile, Line) && Index < NumLines) {
        Lines[Index++] = Line;
    }

    // Load the variables from the file
    Settings::LoadGraphicsSettings(Lines[0]);
    Settings::LoadAudioSettings(Lines[1]);
    Settings::LoadRenderingSettings(Lines[2]);
    Settings::LoadOptionsSettings(Lines[3]);
    

    SettingsFile.close(); // Close the file
}

GraphicLevels Settings::DecodeGraphicLevels(std::string GraphicLevel){
    if(GraphicLevel == "UltraLow") {
        return UltraLow;
    } else if(GraphicLevel == "Low") {
        return Low;
    } else if(GraphicLevel == "MediumLow,") {
        return MediumLow;
    } else if(GraphicLevel == "Medium") {
        return Medium;
    } else if(GraphicLevel == "MediumHigh") {
        return MediumHigh;
    } else if(GraphicLevel == "High") {
        return High;
    } else if(GraphicLevel == "VeryHigh") {
        return VeryHigh;
    } else if(GraphicLevel == "Ultra") {
        return Ultra;
    } else if(GraphicLevel == "Realistic") {
        return Realistic;
    } else if(GraphicLevel == "Unreal") {
        return Unreal;
    } else {
        return UltraLow;
    }
}

void Settings::LoadInGPUAndCPU(){
    
}

// Start of program
void Settings::SetAsGraphicsLevel() {
    const GraphicLevels CurrentGraphicLevel = Settings::GraphicLevel;
    Settings::Lighting = CurrentGraphicLevel;
    Settings::Shaders = CurrentGraphicLevel;
    Settings::Particles = CurrentGraphicLevel;
    Settings::Shadows = CurrentGraphicLevel;
    Settings::SSAntiAllasing = CurrentGraphicLevel;
}

#endif