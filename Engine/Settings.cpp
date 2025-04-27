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
    std::ifstream GraphicsSettingsFile(FilePath);
    
    if(GraphicsSettingsFile.is_open()) {
        std::vector<std::string> GraphicsSettingsFileLines;
        std::string Line;

        while (getline(GraphicsSettingsFile, Line)) {
            GraphicsSettingsFileLines.push_back(Line);
        }
        
        // Moniter settings
        Settings::ResolutionX = FromBinary::BinaryToInt(GraphicsSettingsFileLines[0]);
        Settings::ResolutionY = FromBinary::BinaryToInt(GraphicsSettingsFileLines[1]); 
        Settings::MaxFPS = FromBinary::BinaryToInt(GraphicsSettingsFileLines[2]);       
        Settings::SetFPSAtMonitersMax = FromBinary::BinaryStringToBool(GraphicsSettingsFileLines[3]);

        // Graphics levels
        Settings::GraphicLevel = Settings::DecodeGraphicLevels(GraphicsSettingsFileLines[4]);
        Settings::Lighting = Settings::DecodeGraphicLevels(GraphicsSettingsFileLines[5]);
        Settings::Shaders = Settings::DecodeGraphicLevels(GraphicsSettingsFileLines[6]);
        Settings::Particles = Settings::DecodeGraphicLevels(GraphicsSettingsFileLines[7]);
        Settings::Shadows = Settings::DecodeGraphicLevels(GraphicsSettingsFileLines[8]);
        Settings::SSAntiAllasing = Settings::DecodeGraphicLevels(GraphicsSettingsFileLines[9]);
    }

    GraphicsSettingsFile.close();

    Settings::MaxFPS = 120;
}

void Settings::LoadAudioSettings(std::string FilePath) {
    // Audio    
    std::ifstream AudioSettingsFile(FilePath);
    
    if(AudioSettingsFile.is_open()) {
        std::vector<std::string> AudioSettingsFileLines;
        std::string Line;

        while (getline(AudioSettingsFile, Line)) {
            AudioSettingsFileLines.push_back(Line);
        }

        Settings::Volume = FromBinary::BinaryToInt(AudioSettingsFileLines[0]);
    }

    AudioSettingsFile.close();
}

void Settings::LoadInGPUAndCPU(){
    
}

void Settings::LoadRenderingSettings(std::string FilePath) {
    // Rendering
    std::ifstream RenderingSettingsFile(FilePath);
    
    if(RenderingSettingsFile.is_open()) {
        std::vector<std::string> RenderingSettingsFileLines;
        std::string Line;

        while (getline(RenderingSettingsFile, Line)) {
            RenderingSettingsFileLines.push_back(Line);
        }

        Settings::GPURendering = FromBinary::BinaryStringToBool(RenderingSettingsFileLines[0]); 
        Settings::UseBounces = FromBinary::BinaryStringToBool(RenderingSettingsFileLines[1]);
        Settings::Bounces = FromBinary::BinaryToInt(RenderingSettingsFileLines[2]);               
    }

    RenderingSettingsFile.close();
}

void Settings::LoadOptionsSettings(std::string FilePath) {
    // Options
    std::ifstream OptionsSettingsFile(FilePath);
    
    if(OptionsSettingsFile.is_open()) {
        std::vector<std::string> OptionsSettingsFileLines;
        std::string Line;

        while (getline(OptionsSettingsFile, Line)) {
            OptionsSettingsFileLines.push_back(Line);
        }

        Settings::FOV = FromBinary::BinaryToInt(OptionsSettingsFileLines[0]);
        Settings::Sensitivity = FromBinary::BinaryToFloat(OptionsSettingsFileLines[1]);
    }

    OptionsSettingsFile.close();
}


void Settings::LoadSettings() {
    // Options
    std::ifstream SettingsFile("./Settings/PathOfSettingsFiles.txt");
    
    if(SettingsFile.is_open()) {
        std::vector<std::string> FilePaths;
        std::string Line;

        while (getline(SettingsFile, Line)) {
            FilePaths.push_back(Line);
        }

        Settings::LoadGraphicsSettings(FilePaths[0]);
        Settings::LoadAudioSettings(FilePaths[1]);
        Settings::LoadRenderingSettings(FilePaths[2]);
        Settings::LoadOptionsSettings(FilePaths[3]);
    }

    SettingsFile.close();
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

// Start of program
void Settings::SetAsGraphicsLevel() {
    Settings::Lighting = Settings::GraphicLevel;
    Settings::Shaders = Settings::GraphicLevel;
    Settings::Particles = Settings::GraphicLevel;
    Settings::Shadows = Settings::GraphicLevel;
    Settings::SSAntiAllasing = Settings::GraphicLevel;
}

#endif