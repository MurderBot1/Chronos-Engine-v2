// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Settings_H
#define Settings_H

// C++ imported files
#include <stdint.h>
#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <array>
#include <filesystem>

// Program imported files
#include "Binary.h"
#include "Constants.h"

// Definitions
class Settings {
    public:
        static void LoadSettings(const std::string& LoadSettingsPath);

        // Graphics
            static SettingsValues::GraphicLevels DecodeGraphicLevels(const std::string& GraphicLevel);
            static std::string EncodeGraphicLevels(SettingsValues::GraphicLevels GraphicLevel);
            static void LoadGraphicsSettings(const std::string& FilePath);
            static void LoadAudioSettings(const std::string& FilePath);
            static void LoadRenderingSettings(const std::string& FilePath);
            static void LoadOptionsSettings(const std::string& FilePath);
            // Moniter
            static int16_t ResolutionX; // Horizontal resolution of the display
            static int16_t ResolutionY; // Vertical resolution of the display
            static int MaxFPS; // Maximum FPS the engine will output
            static bool SetFPSAtMonitersMax; // Limit the FPS to the moniters maximum
            // Graphics levels
            static void SetAsGraphicsLevel();
            static SettingsValues::GraphicLevels GraphicLevel; // Sets all settings to this level when Settings::SetAsGraphicsLevel(); Is Ran
            static SettingsValues::GraphicLevels Lighting; // How accurate is the lighting
            static SettingsValues::GraphicLevels Shaders; // What level of shaders are used
            static SettingsValues::GraphicLevels Particles; // What level of particles are used
            static SettingsValues::GraphicLevels Shadows; // What level of shadows are used
            static SettingsValues::GraphicLevels AntiAllasing; // Settings and there levels are shown below
            static float AADropoff;
            static uint8_t DecodeAA(SettingsValues::GraphicLevels AntiAllasing);

        // Audio
        static float Volume;

        // Rendering
        static void LoadInGPUAndCPU();
        static std::map<int, std::string> GPUID;
        static std::map<int, std::string> CPUID;
        static int TotalNumCores;
        static int NumCoresForKeyboard;
        static bool GPURendering;
        static bool UseBounces;
        static int8_t Bounces;

        // Options
        static float FOV;
        static float Sensitivity;
};

#endif