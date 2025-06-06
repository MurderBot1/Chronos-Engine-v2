// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Constants_H
#define Constants_H

// C++ imported files
#include <string>
#include <vector>
#include <array>
#include <cstdint>
#include <string_view>
#include <filesystem>
#include <unordered_map>
#include <algorithm>

// Definitions
const std::filesystem::path CurrentPath = std::filesystem::current_path();

constexpr uint8_t INDEX_START = 0; 

namespace BinaryValues {
    constexpr char BIT_ONE  = '1';
    constexpr char BIT_ZERO = '0';
}

namespace LogValues {
    constexpr uint8_t LINES_IN_LOG_SETUP_FILE = 2;
}

namespace ChronosPixel {
    struct RGB {
        uint16_t R, G, B;
    };

    struct LightLevel {
        uint16_t Level;
    };

    struct ScreenLocation {
        int X, Y;    
    };

    struct Pixel {
        RGB Color;
        LightLevel Brightness;
        ScreenLocation Location;
    };
}

namespace RendererInfo {
    struct Direction {
        float X, Y, Z;
    };
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

#endif