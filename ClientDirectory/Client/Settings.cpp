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
SettingsValues::GraphicLevels Settings::AntiAllasing; // Settings and there levels are shown below
int16_t Settings::ResolutionX; // Horizontal resolution of the display
int16_t Settings::ResolutionY; // Vertical resolution of the display
int Settings::MaxFPS; // Maximum FPS the engine will output
bool Settings::SetFPSAtMonitersMax; // Limit the FPS to the moniters maximum
float Settings::Sensitivity; // The current multipier to the mouse DPI
float Settings::FOV; // The current field of vision for the camera
int8_t Settings::Bounces; // The current number of bounces each ray makes while rendering the scene
bool Settings::UseBounces; // Does the ray bounce while rendering the scene
bool Settings::GPURendering; // Does the engine use the GPU
float Settings::Volume; // The current volume multipier for the engine
float Settings::AADropoff; // The amount that the color drops of in the antiA. function

void Settings::LoadGraphicsSettings(const std::string& FilePath) {
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
        Settings::ResolutionX = SettingsValues::DEFAULT_RESOLUTION_X;
        Settings::ResolutionY = SettingsValues::DEFAULT_RESOLUTION_Y;
        Settings::MaxFPS = SettingsValues::DEFAULT_MAX_FPS;
        Settings::SetFPSAtMonitersMax = SettingsValues::USE_MONITERS_MAX_FPS;

        // Graphics levels
        Settings::GraphicLevel = SettingsValues::DEFAULT_GRAPHIC_LEVEL;
        Settings::Lighting = SettingsValues::DEFAULT_LIGHTING_LEVEL;
        Settings::Shaders = SettingsValues::DEFAULT_SHADERS_LEVEL;
        Settings::Particles = SettingsValues::DEFAULT_PARTICLEs_LEVEL;
        Settings::Shadows = SettingsValues::DEFAULT_SHADOW_LEVEL;
        Settings::AntiAllasing = SettingsValues::DEFAULT_AntiAllasing_LEVEL;
        Settings::AADropoff = SettingsValues::DEFAULT_AADROPOFF;

        std::cout << "Can't load settings. Chronos engine will use defaults\n";
        std::cout << "Settings files should be at : \n";
        std::cout << "The file at : " << FilePath << " could not be loaded by the settings loader\n";

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
    Settings::AntiAllasing = Settings::DecodeGraphicLevels(Lines[9]);
    Settings::AADropoff = FromBinary::BinaryToFloat(Lines[10]);

    SettingsFile.close(); // Close the file

    return;
}

void Settings::LoadAudioSettings(const std::string& FilePath) {
    // Audio
    // Define the variables to load the file in
    std::ifstream SettingsFile(FilePath);
    std::array<std::string, SettingsValues::LINES_IN_AUDIO_SETUP_FILE> Lines;
    std::string Line;
    size_t Index = INDEX_START;

    // Check if the file can be opened
    if(!SettingsFile.is_open()) {
        // Set default settings
        Settings::Volume = SettingsValues::DEFAULT_VOLUME;

        std::cout << "Can't load settings. Chronos engine will use defaults\n";
        std::cout << "Settings files should be at : \n";
        std::cout << "The file at : " << FilePath << " could not be loaded by the settings loader\n";

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

    return;
}

void Settings::LoadRenderingSettings(const std::string& FilePath) {
    // Rendering
    // Define the variables to load the file in
    std::ifstream SettingsFile(FilePath);
    std::array<std::string, SettingsValues::LINES_IN_RENDERING_SETUP_FILE> Lines;
    std::string Line;
    size_t Index = INDEX_START;

    // Check if the file can be opened
    if(!SettingsFile.is_open()) {
        // Set default settings
        Settings::GPURendering = SettingsValues::USE_GPU_RENDERING;
        Settings::UseBounces = SettingsValues::USE_BOUNCES;
        Settings::Bounces = SettingsValues::DEFAULT_NUMBER_OF_BOUNCES;

        std::cout << "Can't load settings. Chronos engine will use defaults\n";
        std::cout << "Settings files should be at : \n";
        std::cout << "The file at : " << FilePath << " could not be loaded by the settings loader\n";

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

    return;
}

void Settings::LoadOptionsSettings(const std::string& FilePath) {
    // Options
    // Define the variables to load the file in
    std::ifstream SettingsFile(FilePath);
    std::array<std::string, SettingsValues::LINES_IN_OPTIONS_SETUP_FILE> Lines;
    std::string Line;
    size_t Index = INDEX_START;

    // Check if the file can be opened
    if(!SettingsFile.is_open()) {
        // Set default settings
        Settings::FOV = SettingsValues::DEFAULT_FOV;
        Settings::Sensitivity = SettingsValues::DEFAULT_SENSITIVITY;

        std::cout << "Can't load settings. Chronos engine will use defaults\n";
        std::cout << "Settings files should be at : \n";
        std::cout << "The file at : " << FilePath << " could not be loaded by the settings loader\n";

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

    return;
}


void Settings::LoadSettings(const std::string& LoadSettingsPath) {
    // Options
    // Define the variables to load the file in
    std::ifstream SettingsFile(LoadSettingsPath);
    std::array<std::string, SettingsValues::LINES_IN_LOAD_SETTINGS_SETUP_FILE> Lines;
    std::string Line;
    size_t Index = INDEX_START;

    // Check if the file can be opened
    if(!SettingsFile.is_open()) {
        // Set default settings
        Settings::LoadGraphicsSettings("");
        Settings::LoadAudioSettings("");
        Settings::LoadRenderingSettings("");
        Settings::LoadOptionsSettings("");

        std::cout << "Can't load settings. Chronos engine will use defaults\n";
        std::cout << "Settings files should be at\n";
        std::cout << CurrentPath.string() << "\\" << std::string{Args::Game} << Lines[0] << "\n";
        std::cout << CurrentPath.string() << "\\" << std::string{Args::Game} << Lines[1] << "\n";
        std::cout << CurrentPath.string() << "\\" << std::string{Args::Game} << Lines[2] << "\n";
        std::cout << CurrentPath.string() << "\\" << std::string{Args::Game} << Lines[3] << "\n";

        // Exit out of the function
        return;
    };

    // Load the file in
    while (std::getline(SettingsFile, Line) && Index < SettingsValues::LINES_IN_LOAD_SETTINGS_SETUP_FILE) {
        Lines[Index++] = Line;
    }

    // Load the variables from the file
    Settings::LoadGraphicsSettings(CurrentPath.string() + "\\" + std::string{Args::Game} + Lines[0]);
    Settings::LoadAudioSettings(CurrentPath.string() + "\\" + std::string{Args::Game} + Lines[1]);
    Settings::LoadRenderingSettings(CurrentPath.string() + "\\" + std::string{Args::Game} + Lines[2]);
    Settings::LoadOptionsSettings(CurrentPath.string() + "\\" + std::string{Args::Game} + Lines[3]);
    


    SettingsFile.close(); // Close the file
}

SettingsValues::GraphicLevels Settings::DecodeGraphicLevels(const std::string& GraphicLevel){
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
        default: // Returns ultra low if nothing is found or if it is Ultralow
            return "UltraLow";
           break;
    }
}

uint8_t Settings::DecodeAA(SettingsValues::GraphicLevels AntiAllasing) {
    switch (GraphicLevel) {
        case SettingsValues::GraphicLevels::Unreal:
            return 16;
        case SettingsValues::GraphicLevels::Realistic:
            return 16;
        case SettingsValues::GraphicLevels::Ultra:
            return 8;
        case SettingsValues::GraphicLevels::VeryHigh:
            return 8;
        case SettingsValues::GraphicLevels::High:
            return 4;
        case SettingsValues::GraphicLevels::MediumHigh:
            return 4;
        case SettingsValues::GraphicLevels::Medium:
            return 2;
        case SettingsValues::GraphicLevels::MediumLow:
            return 2;
        case SettingsValues::GraphicLevels::Low:
            return 1;
        default: // Returns ultra low if nothing is found or if it is Ultralow
            return 1;
           break;
    }
}

void Settings::LoadInGPUAndCPU()
{
}

// Definitions
void Settings::SetAsGraphicsLevel() {
    SettingsValues::GraphicLevels CurrentGraphicLevel = Settings::GraphicLevel;
    Settings::Lighting = CurrentGraphicLevel;
    Settings::Shaders = CurrentGraphicLevel;
    Settings::Particles = CurrentGraphicLevel;
    Settings::Shadows = CurrentGraphicLevel;
    Settings::AntiAllasing = CurrentGraphicLevel;
}

#endif