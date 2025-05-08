// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef LocationClass_H
#define LocationClass_H

// C++ imported files


// Program imported files
#include "VariableTypes.h"

// Definitions
class LocationClass {
    public:
        // The main class variable
        Vector::Vector3_f Location;

        // Functions to set that variable
        void SetLocation(Vector::Vector3_f Location);
        void SetLocation(float x, float y, float z);

        // Variables that affect location
        bool IsLocationVelocityLocked;
        Vector::Vector3_f LocationVelocity;
        bool IsTargetLocationLocked;
        Vector::Vector3_f TargetLocation;
        bool UseSeparateSpeedsForLocationAxes;
        Vector::Vector3_f LocationAxisSpeeds;
        float TargetLocationSpeed;

        // Functions that affect location
        constexpr bool LockLocationVelocity();
        constexpr bool UnlockLocationVelocity();
        void SetLocationVelocity(Vector::Vector3_f velocity);
        void SetLocationVelocity(float x, float y, float z);
        constexpr bool LockTargetLocation();
        constexpr bool UnlockTargetLocation();
        void SetTargetLocation(Vector::Vector3_f Location);
        void SetTargetLocation(float x, float y, float z);
        constexpr bool EnableSeparateLocationAxisSpeeds();
        constexpr bool DisableSeparateLocationAxisSpeeds();
        void SetTargetLocationSpeed(Vector::Vector3_f speed);
        void SetTargetLocationSpeed(float x, float y, float z);
        void SetTargetLocationSpeed(float speed);
};

#endif