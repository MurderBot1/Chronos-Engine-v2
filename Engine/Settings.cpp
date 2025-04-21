// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

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