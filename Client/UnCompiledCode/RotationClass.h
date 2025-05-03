// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef RotationClass_H
#define RotationClass_H

// C++ imported files


// Program imported files
#include "VariableTypes.h"

// Definitions
class RotationClass {
    public:
        // The main class variable
        Vector::Vector3_f Rotation;

        // Functions that can set the rotation variable 
        void SetRotation(Vector::Vector3_f Rotation);
        void SetRotation(float x, float y, float z);

        // Variables that affect rotation
        bool IsRotationVelocityLocked;
        Vector::Vector3_f RotationVelocity;
        bool IsTargetRotationLocked;
        Vector::Vector3_f TargetRotation;
        bool UseSeparateSpeedsForRotationAxes;
        Vector::Vector3_f RotationAxisSpeeds;
        float TargetRotationSpeed;
        
        // Functions that affect rotation
        constexpr bool LockRotationVelocity();
        constexpr bool UnlockRotationVelocity();
        void SetRotationVelocity(Vector::Vector3_f velocity);
        void SetRotationVelocity(float x, float y, float z);
        constexpr bool LockTargetRotation();
        constexpr bool UnlockTargetRotation();
        void SetTargetRotation(Vector::Vector3_f Rotation);
        void SetTargetRotation(float x, float y, float z);
        constexpr bool EnableSeparateRotationAxisSpeeds();
        constexpr bool DisableSeparateRotationAxisSpeeds();
        void SetTargetRotationSpeed(Vector::Vector3_f speed);
        void SetTargetRotationSpeed(float x, float y, float z);
        void SetTargetRotationSpeed(float speed);
};

#endif