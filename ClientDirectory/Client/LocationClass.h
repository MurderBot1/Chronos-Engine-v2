// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef LocationClass_H
#define LocationClass_H

// C++ imported files
#include <mutex>

// Program imported files
#include "Vector.h"

// Definitions
class LocationClass {
    public:
        // Location
        void SetLocation(Vector::Vector3<float> Location);
        void SetLocation(const std::vector<float> &Location);
        void SetLocation(float XLocation, float YLocation, float ZLocation);
        void SetLocation(std::array<float, 3> Location);
        void Translate(Vector::Vector3<float> Location);
        void Translate(const std::vector<float> &Location);
        void Translate(float XLocation, float YLocation, float ZLocation);
        void Translate(std::array<float, 3> Location);

        // Velocity
        void SetVelocity(Vector::Vector3<float> Location);
        void SetVelocity(const std::vector<float> &Velocity);
        void SetVelocity(float XVelocity, float YVelocity, float ZVelocity);
        void SetVelocity(std::array<float, 3> Velocity);
        void AddVelocity(Vector::Vector3<float> Location);
        void AddVelocity(const std::vector<float> &Velocity);
        void AddVelocity(float XVelocity, float YVelocity, float ZVelocity);
        void AddVelocity(std::array<float, 3> Velocity);
        void SubtractVelocity(Vector::Vector3<float> Location);
        void SubtractVelocity(const std::vector<float> &Velocity);
        void SubtractVelocity(float XVelocity, float YVelocity, float ZVelocity);
        void SubtractVelocity(std::array<float, 3> Velocity);
        void CancelVelocity();
        
        // Targeted location
        void SetTargetedLocation(Vector::Vector3<float> Location);
        void SetTargetedLocation(const std::vector<float> &Location);
        void SetTargetedLocation(float XLocation, float YLocation, float ZLocation);

        // Speed
        void SetSpeed(float Speed);
        void AddSpeed(float Speed);
        void SubtractSpeed(float Speed);

        // Update
        void UpdateLocation();
    private:
        Vector::Vector3<float> Location;
        std::mutex Location_MX;
        Vector::Vector3<float> Velocity;
        std::mutex Velocity_MX;
        Vector::Vector3<float> TargetedLocation;
        std::mutex TargetedLocation_MX;
        float Speed;
        std::mutex Speed_MX;
    };

#endif