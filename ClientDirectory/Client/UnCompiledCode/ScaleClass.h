// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef ScaleClass_H
#define ScaleClass_H

// C++ imported files


// Program imported files
#include "VariableTypes.h"

// Definitions
class ScaleClass {
    public:
        // The main class variable
        Vector::Vector3_f Scale;

        // Functions to set current location, rotation, and scale
        void SetScale(Vector::Vector3_f Scale);
        void SetScale(float x, float y, float z);

        // Variables that affect scale
        bool IsScaleVelocityLocked;
        Vector::Vector3_f ScaleVelocity;
        bool IsTargetScaleLocked;
        Vector::Vector3_f TargetScale;
        bool UseSeparateSpeedsForScaleAxes;
        Vector::Vector3_f ScaleAxisSpeeds;
        float TargetScaleSpeed;

        // Functions that affect scale
        constexpr bool LockScaleVelocity();
        constexpr bool UnlockScaleVelocity();
        void SetScaleVelocity(Vector::Vector3_f velocity);
        void SetScaleVelocity(float x, float y, float z);
        constexpr bool LockTargetScale();
        constexpr bool UnlockTargetScale();
        void SetTargetScale(Vector::Vector3_f Scale);
        void SetTargetScale(float x, float y, float z);
        constexpr bool EnableSeparateScaleAxisSpeeds();
        constexpr bool DisableSeparateScaleAxisSpeeds();
        void SetTargetScaleSpeed(Vector::Vector3_f speed);
        void SetTargetScaleSpeed(float x, float y, float z);
        void SetTargetScaleSpeed(float speed);
};

#endif