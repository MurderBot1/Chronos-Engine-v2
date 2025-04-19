// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef Settings_CPP
#define Settings_CPP

// CPP files .h file
#include "Settings.h"

// Redefine vars if needed
GraphicLevels Settings::Lighting;
GraphicLevels Settings::Shaders;
GraphicLevels Settings::Particles;
GraphicLevels Settings::Shadows;
GraphicLevels Settings::SSAntiAllasing;
GraphicLevels Settings::GraphicLevel;

// Start of program
void Settings::SetAsGraphicsLevel() {
    Settings::Lighting = Settings::GraphicLevel;
    Settings::Shaders = Settings::GraphicLevel;
    Settings::Particles = Settings::GraphicLevel;
    Settings::Shadows = Settings::GraphicLevel;
    Settings::SSAntiAllasing = Settings::GraphicLevel;
}

#endif