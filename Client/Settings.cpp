// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Settings_CPP
#define Settings_CPP

// Include the C++'s .h file
#include "Settings.h"

// Variable redefinitions
SettingsValues::GraphicLevels Settings::GraphicLevel; // Sets all settings to this level when Settings::SetAsGraphicsLevel(); Is Ran
SettingsValues::GraphicLevels Settings::Lighting; // How accurate is the lighting
SettingsValues::GraphicLevels Settings::Shaders; // What level of shaders are used
SettingsValues::GraphicLevels Settings::Particles; // What level of particles are used
SettingsValues::GraphicLevels Settings::Shadows; // What level of shadows are used
SettingsValues::GraphicLevels Settings::SSAntiAllasing; // Settings and there levels are shown below
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
    std::ifstream SettingsFile(FilePath);
    std::array<std::string, SettingsValues::LINES_IN_GRAPHICS_SETUP_FILE> Lines;
    std::string Line;
    size_t Index = INDEX_START;

    // Check if the file can be opened
    if(!SettingsFile.is_open()) {
        // Set default settings
        // Moniter settings
        Settings::ResolutionX = 1920;
        Settings::ResolutionY = 1080; 
        Settings::MaxFPS = 60;       
        Settings::SetFPSAtMonitersMax = false;

        // Graphics levels
        Settings::GraphicLevel = SettingsValues::GraphicLevels::UltraLow;
        Settings::Lighting = SettingsValues::GraphicLevels::UltraLow;
        Settings::Shaders = SettingsValues::GraphicLevels::UltraLow;
        Settings::Particles = SettingsValues::GraphicLevels::UltraLow;
        Settings::Shadows = SettingsValues::GraphicLevels::UltraLow;
        Settings::SSAntiAllasing = SettingsValues::GraphicLevels::UltraLow;

        // Exit out of the function
        return;
    };

    // Load the file in
    while (std::getline(SettingsFile, Line) && Index < SettingsValues::LINES_IN_GRAPHICS_SETUP_FILE) {
        Lines[Index++] = Line;
    }
    
    // Load the file in to the settings it corrisponds with
    // Moniter settings
    Settings::ResolutionX = FromBinary::BinaryToInt(Lines[0]);
    Settings::ResolutionY = FromBinary::BinaryToInt(Lines[1]); 
    Settings::MaxFPS = FromBinary::BinaryToInt(Lines[2]);       
    Settings::SetFPSAtMonitersMax = FromBinary::BinaryToBool(Lines[3]);

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
    std::ifstream SettingsFile(FilePath);
    std::array<std::string, SettingsValues::LINES_IN_AUDIO_SETUP_FILE> Lines;
    std::string Line;
    size_t Index = INDEX_START;

    // Check if the file can be opened
    if(!SettingsFile.is_open()) {
        // Set default settings
        Settings::Volume = 100.0f;

        // Exit out of the function
        return;
    };

    // Load the file in
    while (std::getline(SettingsFile, Line) && Index < SettingsValues::LINES_IN_AUDIO_SETUP_FILE) {
        Lines[Index++] = Line;
    }
    
    // Load the variables from the file
    Settings::Volume = FromBinary::BinaryToFloat(Lines[0]);

    SettingsFile.close(); // Close the file
}

void Settings::LoadRenderingSettings(std::string FilePath) {
    // Rendering
    // Define the variables to load the file in
    std::ifstream SettingsFile(FilePath);
    std::array<std::string, SettingsValues::LINES_IN_RENDERING_SETUP_FILE> Lines;
    std::string Line;
    size_t Index = INDEX_START;

    // Check if the file can be opened
    if(!SettingsFile.is_open()) {
        // Set default settings
        Settings::GPURendering = false; 
        Settings::UseBounces = true;
        Settings::Bounces = 2;  
        
        // Exit out of the function
        return;
    };

    // Load the file in
    while (std::getline(SettingsFile, Line) && Index < SettingsValues::LINES_IN_RENDERING_SETUP_FILE) {
        Lines[Index++] = Line;
    }

    // Load the variables from the file
    Settings::GPURendering = FromBinary::BinaryToBool(Lines[0]); 
    Settings::UseBounces = FromBinary::BinaryToBool(Lines[1]);
    Settings::Bounces = FromBinary::BinaryToInt(Lines[2]);               

    SettingsFile.close(); // Close the file
}

void Settings::LoadOptionsSettings(std::string FilePath) {
    // Options
    // Define the variables to load the file in
    std::ifstream SettingsFile(FilePath);
    std::array<std::string, SettingsValues::LINES_IN_OPTIONS_SETUP_FILE> Lines;
    std::string Line;
    size_t Index = INDEX_START;

    // Check if the file can be opened
    if(!SettingsFile.is_open()) {
        // Set default settings
        Settings::FOV = 100.0f;
        Settings::Sensitivity = 1.0f;
        
        // Exit out of the function
        return;
    };

    // Load the file in
    while (std::getline(SettingsFile, Line) && Index < SettingsValues::LINES_IN_OPTIONS_SETUP_FILE) {
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
    std::ifstream SettingsFile(LoadSettingsPath);
    std::array<std::string, SettingsValues::LINES_IN_LOAD_SETTINGS_SETUP_FILE> Lines;
    std::string Line;
    size_t Index = INDEX_START;

    // Check if the file can be opened
    if(!SettingsFile.is_open()) {
        // Set default settings
        const std::filesystem::path CurrentPath = std::filesystem::current_path();
        Settings::LoadGraphicsSettings(CurrentPath.string() + "/Settings/Graphics/Graphics.txt");
        Settings::LoadAudioSettings(CurrentPath.string() + "/Settings/Audio/Audio.txt");
        Settings::LoadRenderingSettings(CurrentPath.string() + "/Settings/Rendering/Rendering.txt");
        Settings::LoadOptionsSettings(CurrentPath.string() + "/Settings/Options/Options.txt");
        
        // Exit out of the function
        return;
    };

    // Load the file in
    while (std::getline(SettingsFile, Line) && Index < SettingsValues::LINES_IN_LOAD_SETTINGS_SETUP_FILE) {
        Lines[Index++] = Line;
    }

    // Load the variables from the file
    Settings::LoadGraphicsSettings(Lines[0]);
    Settings::LoadAudioSettings(Lines[1]);
    Settings::LoadRenderingSettings(Lines[2]);
    Settings::LoadOptionsSettings(Lines[3]);
    

    SettingsFile.close(); // Close the file
}

SettingsValues::GraphicLevels Settings::DecodeGraphicLevels(std::string GraphicLevel){
    if(GraphicLevel == "Unreal") {
        return SettingsValues::GraphicLevels::Unreal;
    } else if(GraphicLevel == "Realistic") {
        return SettingsValues::GraphicLevels::Realistic;
    } else if(GraphicLevel == "Ultra") {
        return SettingsValues::GraphicLevels::Ultra;
    } else if(GraphicLevel == "VeryHigh") {
        return SettingsValues::GraphicLevels::VeryHigh;
    } else if(GraphicLevel == "High") {
        return SettingsValues::GraphicLevels::High;
    } else if(GraphicLevel == "MediumHigh") {
        return SettingsValues::GraphicLevels::MediumHigh;
    } else if(GraphicLevel == "Medium") {
        return SettingsValues::GraphicLevels::Medium;
    } else if(GraphicLevel == "MediumLow") {
        return SettingsValues::GraphicLevels::MediumLow;
    } else if(GraphicLevel == "Low") {
        return SettingsValues::GraphicLevels::Low;
    } else {
        return SettingsValues::GraphicLevels::UltraLow; // Returns ultra low if nothing is found or if it is Ultralow
    }
}

std::string Settings::EncodeGraphicLevels(SettingsValues::GraphicLevels GraphicLevel){
    switch (GraphicLevel) {
        case SettingsValues::GraphicLevels::Unreal:
            return "Unreal";
        case SettingsValues::GraphicLevels::Realistic:
            return "Realistic";
        case SettingsValues::GraphicLevels::Ultra:
            return "Ultra";
        case SettingsValues::GraphicLevels::VeryHigh:
            return "VeryHigh";
        case SettingsValues::GraphicLevels::High:
            return "High";
        case SettingsValues::GraphicLevels::MediumHigh:
            return "MediumHigh";
        case SettingsValues::GraphicLevels::Medium:
            return "Medium";
        case SettingsValues::GraphicLevels::MediumLow:
            return "MediumLow";
        case SettingsValues::GraphicLevels::Low:
            return "Low";    
            break;
        default: // Returns ultra low if nothing is found or if it is Ultra
            return "UltraLow"; 
            break;
    }
}

void Settings::LoadInGPUAndCPU(){
    
}

// Definitions
void Settings::SetAsGraphicsLevel() {
    SettingsValues::GraphicLevels CurrentGraphicLevel = Settings::GraphicLevel;
    Settings::Lighting = CurrentGraphicLevel;
    Settings::Shaders = CurrentGraphicLevel;
    Settings::Particles = CurrentGraphicLevel;
    Settings::Shadows = CurrentGraphicLevel;
    Settings::SSAntiAllasing = CurrentGraphicLevel;
}

#endif