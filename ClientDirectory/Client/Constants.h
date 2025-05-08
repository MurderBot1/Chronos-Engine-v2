// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Constants_H
#define Constants_H

// C++ imported files
#include <string>
#include <stdint.h>
#include <filesystem>

// Definitions
const std::filesystem::path CurrentPath = std::filesystem::current_path();
constexpr std::string_view GameName_SV = "ExampleGame";
const std::string GameName = std::string{GameName_SV};

constexpr uint8_t INDEX_START = 0; 

namespace BinaryValues {
    constexpr char BIT_ONE  = '1';
    constexpr char BIT_ZERO = '0';
}

namespace LogValues {
    constexpr uint8_t LINES_IN_LOG_SETUP_FILE = 2;
}

namespace SettingsValues {
    enum GraphicLevels {
        UltraLow,
        Low,
        MediumLow, 
        Medium,
        MediumHigh,
        High,
        VeryHigh,
        Ultra,
        Realistic,
        Unreal
    };

    constexpr uint8_t LINES_IN_GRAPHICS_SETUP_FILE = 11;
    constexpr uint8_t LINES_IN_AUDIO_SETUP_FILE = 1;
    constexpr uint8_t LINES_IN_RENDERING_SETUP_FILE = 3;
    constexpr uint8_t LINES_IN_OPTIONS_SETUP_FILE = 2;
    constexpr uint8_t LINES_IN_LOAD_SETTINGS_SETUP_FILE = 4;

    const std::string_view LOAD_GRAPHICS_SETTINGS_DEFAULT_PATH = CurrentPath.string() + "/Settings/Graphics/Graphics.txt";
    const std::string_view LOAD_AUDIO_SETTINGS_DEFAULT_PATH = CurrentPath.string() + "/Settings/Audio/Audio.txt";
    const std::string_view LOAD_RENDERING_SETTINGS_DEFAULT_PATH = CurrentPath.string() + "/Settings/Rendering/Rendering.txt";
    const std::string_view LOAD_OPTIONS_SETTINGS_DEFAULT_PATH = CurrentPath.string() + "/Settings/Options/Options.txt";

    constexpr float DEFAULT_FOV = 100.0f;
    constexpr float DEFAULT_SENSITIVITY = 1.0f;

    constexpr bool USE_GPU_RENDERING = false;
    constexpr bool USE_BOUNCES = true;
    constexpr int8_t DEFAULT_NUMBER_OF_BOUNCES = 2;
    constexpr int8_t NUMBER_OF_FRAMES_BUFFERED = 2;

    constexpr float DEFAULT_VOLUME = 100.0f;

    constexpr SettingsValues::GraphicLevels DEFAULT_GRAPHIC_LEVEL = SettingsValues::GraphicLevels::UltraLow;
    constexpr SettingsValues::GraphicLevels DEFAULT_LIGHTING_LEVEL = SettingsValues::GraphicLevels::UltraLow;
    constexpr SettingsValues::GraphicLevels DEFAULT_SHADERS_LEVEL = SettingsValues::GraphicLevels::UltraLow;
    constexpr SettingsValues::GraphicLevels DEFAULT_PARTICLEs_LEVEL = SettingsValues::GraphicLevels::UltraLow;
    constexpr SettingsValues::GraphicLevels DEFAULT_SHADOW_LEVEL = SettingsValues::GraphicLevels::UltraLow;
    constexpr SettingsValues::GraphicLevels DEFAULT_AntiAllasing_LEVEL = SettingsValues::GraphicLevels::UltraLow;
    constexpr float DEFAULT_AADROPOFF = 1.5f;

    constexpr int16_t DEFAULT_RESOLUTION_X = 1920;
    constexpr int16_t DEFAULT_RESOLUTION_Y = 1080;
    constexpr int DEFAULT_MAX_FPS = 120;
    constexpr bool USE_MONITERS_MAX_FPS = false;
}

namespace KeyboardValues {
    constexpr char KEY_A = 'A';
    constexpr char KEY_B = 'B';
    constexpr char KEY_C = 'C';
    constexpr char KEY_D = 'D';
    constexpr char KEY_E = 'E';
    constexpr char KEY_F = 'F';
    constexpr char KEY_G = 'G';
    constexpr char KEY_H = 'H';
    constexpr char KEY_I = 'I';
    constexpr char KEY_J = 'J';
    constexpr char KEY_K = 'K';
    constexpr char KEY_L = 'L';
    constexpr char KEY_M = 'M';
    constexpr char KEY_N = 'N';
    constexpr char KEY_O = 'O';
    constexpr char KEY_P = 'P';
    constexpr char KEY_Q = 'Q';
    constexpr char KEY_R = 'R';
    constexpr char KEY_S = 'S';
    constexpr char KEY_T = 'T';
    constexpr char KEY_U = 'U';
    constexpr char KEY_V = 'V';
    constexpr char KEY_W = 'W';
    constexpr char KEY_X = 'X';
    constexpr char KEY_Y = 'Y';
    constexpr char KEY_Z = 'Z';
    constexpr char KEY_1 = '1';
    constexpr char KEY_2 = '2';
    constexpr char KEY_3 = '3';
    constexpr char KEY_4 = '4';
    constexpr char KEY_5 = '5';
    constexpr char KEY_6 = '6';
    constexpr char KEY_7 = '7';
    constexpr char KEY_8 = '8';
    constexpr char KEY_9 = '9';
    constexpr char KEY_0 = '0';
}

#endif