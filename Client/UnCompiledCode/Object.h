// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Object_H
#define Object_H

// C++ imported files
#include <vector>

// Program imported files
#include "VariableTypes.h"

// Function definitions
class Object {
    public:
        // Constructor and Deconstructor
        Object();
        ~Object();

        // List of pointers to objects
        static std::vector<Object*> ListOfObjects;
        
        // Current location, rotation, and scale
        Vector::Vector3_f Location;
        Vector::Vector3_f Rotation;
        Vector::Vector3_f Scale;

        // Functions to set current location, rotation, and scale
        void SetLocation(Vector::Vector3_f Location);
        void SetLocation(float X, float Y, float Z);
        void SetRotation(Vector::Vector3_f Rotation);
        void SetRotation(float X, float Y, float Z);
        void SetScale(Vector::Vector3_f Scale);
        void SetScale(float X, float Y, float Z);

        // Variables that change the location of the object
        bool LockLocationalVolocity;
        Vector::Vector3_f Volocity;
        bool LockTargetedLocation;
        Vector::Vector3_f TargetedLocation;
        bool UseSeperateSpeedsForDifferentLocationalDirections;
        Vector::Vector3_f SpeedOfEachDirectionForLocation;
        float SpeedToTargetedLocation;

        // Functions that change the location of the object
        constexpr bool LockTheLocationalVolocity();
        constexpr bool UnLockTheLocationalVolocity();
        void SetLocationVolocity(Vector::Vector3_f Location);
        void SetLocationVolocity(float X, float Y, float Z);
        constexpr bool LockTheTargetedLocation();
        constexpr bool UnLockTheTargetedLocation();
        void SetTargetedLocation(Vector::Vector3_f Location);
        void SetTargetedLocation(float X, float Y, float Z);
        constexpr bool DoUseSeperateSpeedsForDifferentLocationalDirections();
        constexpr bool DontUseSeperateSpeedsForDifferentLocationalDirections();
        void CurrentSpeedOfTargetedLocation(Vector::Vector3_f Speed);
        void CurrentSpeedOfTargetedLocation(float X, float Y, float Z);
        void CurrentSpeedOfTargetedLocation(float Speed);

        // Variables that change the rotation of the object
        bool LockRotationalVolocity;
        Vector::Vector3_f RotationalVolocity;
        bool LockTargetedRotation;
        Vector::Vector3_f TargetedRotation;
        bool UseSeperateSpeedsForDifferentRotationalDirections;
        Vector::Vector3_f SpeedOfEachDirectionForRotation;
        float SpeedToTargetedRotation;
        
        // Functions that change the rotation of the object
        constexpr bool LockTheRotationalVolocity();
        constexpr bool UnLockTheRotationalVolocity();
        void SetRotationVolocity(Vector::Vector3_f Rotation);
        void SetRotationVolocity(float X, float Y, float Z);
        constexpr bool LockTheTargetedRotation();
        constexpr bool UnLockTheTargetedRotation();
        void SetTargetedRotation(Vector::Vector3_f Rotation);
        void SetTargetedRotation(float X, float Y, float Z);
        constexpr bool DoUseSeperateSpeedsForDifferentRotationalDirections();
        constexpr bool DontUseSeperateSpeedsForDifferentRotationalDirections();
        void CurrentSpeedOfTargetedVolocity(Vector::Vector3_f Speed);
        void CurrentSpeedOfTargetedVolocity(float X, float Y, float Z);
        void CurrentSpeedOfTargetedVolocity(float Speed);

        // Variables that change the scale of the object
        bool LockScaleVolocity;
        Vector::Vector3_f ScaleVolocity;
        bool LockTargetedScale;
        Vector::Vector3_f TargetedScale;
        bool UseSeperateSpeedsForDifferentScaleDirections;
        Vector::Vector3_f SpeedOfEachDirectionForScale;
        float SpeedToTargetedScale;

        // Functions that change the scale of the object
        constexpr bool LockTheScaleVolocity();
        constexpr bool UnLockTheScaleVolocity();
        void SetScaleVolocity(Vector::Vector3_f Scale);
        void SetScaleVolocity(float X, float Y, float Z);
        constexpr bool LockTheTargetedScale();
        constexpr bool UnLockTheTargetedScale();
        void SetTargetedScale(Vector::Vector3_f Scale);
        void SetTargetedScale(float X, float Y, float Z);
        constexpr bool DoUseSeperateSpeedsForDifferentScaleDirections();
        constexpr bool DontUseSeperateSpeedsForDifferentScaleDirections();
        void CurrentSpeedOfTargetedScale(Vector::Vector3_f Speed);
        void CurrentSpeedOfTargetedScale(float X, float Y, float Z);
        void CurrentSpeedOfTargetedScale(float Speed);

        // Rendering variables
        bool RenderObject;

        // Functions for rendering variables
        void DoRenderObject();
        void DontRenderObject();
};

#endif