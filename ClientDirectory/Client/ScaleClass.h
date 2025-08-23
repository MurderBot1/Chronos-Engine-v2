// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef ScaleClass_H
#define ScaleClass_H

// C++ imported files
#include <mutex>

// Program imported files
#include "Vector.h"

// Definitions
class ScaleClass {
    public:
        // Scale
        void SetScale(Vector::Vector3<float> Scale);
        void SetScale(const std::vector<float> &Scale);
        void SetScale(float XScale, float YScale, float ZScale);
        void SetScale(std::array<float, 3> Scale);
        void Enlarge(Vector::Vector3<float> Scale);
        void Enlarge(const std::vector<float> &Scale);
        void Enlarge(float XScale, float YScale, float ZScale);
        void Enlarge(std::array<float, 3> Scale);

        // Velocity
        void SetVelocity(Vector::Vector3<float> Scale);
        void SetVelocity(const std::vector<float> &Velocity);
        void SetVelocity(float XVelocity, float YVelocity, float ZVelocity);
        void SetVelocity(std::array<float, 3> Velocity);
        void AddVelocity(Vector::Vector3<float> Scale);
        void AddVelocity(const std::vector<float> &Velocity);
        void AddVelocity(float XVelocity, float YVelocity, float ZVelocity);
        void AddVelocity(std::array<float, 3> Velocity);
        void SubtractVelocity(Vector::Vector3<float> Scale);
        void SubtractVelocity(const std::vector<float> &Velocity);
        void SubtractVelocity(float XVelocity, float YVelocity, float ZVelocity);
        void SubtractVelocity(std::array<float, 3> Velocity);
        void CancelVelocity();
        
        // Targeted Scale
        void SetTargetedScale(Vector::Vector3<float> Scale);
        void SetTargetedScale(const std::vector<float> &Scale);
        void SetTargetedScale(float XScale, float YScale, float ZScale);

        // Speed
        void SetSpeed(float Speed);
        void AddSpeed(float Speed);
        void SubtractSpeed(float Speed);

        // Update
        void UpdateScale();

        // Getters
        Vector::Vector3<float> GetScale();
        Vector::Vector3<float> GetVelocity();
        Vector::Vector3<float> GetTargetedScale();
        float GetSpeed();
    private:
        Vector::Vector3<float> Scale;
        std::mutex Scale_MX;
        Vector::Vector3<float> Velocity;
        std::mutex Velocity_MX;
        Vector::Vector3<float> TargetedScale;
        std::mutex TargetedScale_MX;
        float Speed;
        std::mutex Speed_MX;
};

#endif