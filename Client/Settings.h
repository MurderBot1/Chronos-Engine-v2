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

// Program imported files
#include "Binary.h"

// Function definitions
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

class Settings {
    public:
        static void LoadSettings(std::string LoadSettingsPath);

        // Graphics
            static GraphicLevels DecodeGraphicLevels(std::string GraphicLevel);
            static std::string EncodeGraphicLevels(GraphicLevels GraphicLevel);
            static void LoadGraphicsSettings(std::string FilePath);
            static void LoadAudioSettings(std::string FilePath);
            static void LoadRenderingSettings(std::string FilePath);
            static void LoadOptionsSettings(std::string FilePath);
            // Moniter
            static int16_t ResolutionX; // Horizontal resolution of the display
            static int16_t ResolutionY; // Vertical resolution of the display
            static int16_t MaxFPS; // Maximum FPS the engine will output
            static bool SetFPSAtMonitersMax; // Limit the FPS to the moniters maximum
            // Graphics levels
            static void SetAsGraphicsLevel();
            static GraphicLevels GraphicLevel; // Sets all settings to this level when Settings::SetAsGraphicsLevel(); Is Ran
            static GraphicLevels Lighting; // How accurate is the lighting
            static GraphicLevels Shaders; // What level of shaders are used
            static GraphicLevels Particles; // What level of particles are used
            static GraphicLevels Shadows; // What level of shadows are used
            static GraphicLevels SSAntiAllasing; // Settings and there levels are shown below
                /*
                    UltraLow = 1x
                        With 4k texture files they would be 4k
                    Low = 1x
                        With 4k texture files they would be 4k
                    MediumLow = 2x
                        With 4k texture files they would be 8k
                    Medium = 2x
                        With 4k texture files they would be 8k
                    MediumHigh = 4x
                        With 4k texture files they would be 16k
                    High = 4x
                        With 4k texture files they would be 16k
                    VeryHigh = 8x
                        With 4k texture files they would be 32k
                    Ultra = 8x
                        With 4k texture files they would be 32k
                    Realistic = 16x
                        With 4k texture files they would be 64k
                    Unreal = 16x
                        With 4k texture files they would be 64k
                */

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