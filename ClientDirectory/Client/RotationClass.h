#ifndef RotationClass_H
#define RotationClass_H

#include <mutex>

#include "Vector.h"

class RotationClass {
    public:
        // Rotation
        void SetRotation(Vector::Vector3<float> Rotation);
        void SetRotation(const std::vector<float> &Rotation);
        void SetRotation(float XRotation, float YRotation, float ZRotation);
        void SetRotation(std::array<float, 3> Rotation);
        void Translate(Vector::Vector3<float> Rotation);
        void Translate(const std::vector<float> &Rotation);
        void Translate(float XRotation, float YRotation, float ZRotation);
        void Translate(std::array<float, 3> Rotation);

        // Rotation Velocity
        void SetRotationVelocity(Vector::Vector3<float> Rotation);
        void SetRotationVelocity(const std::vector<float> &RotationVelocity);
        void SetRotationVelocity(float XRotationVelocity, float YRotationVelocity, float ZRotationVelocity);
        void SetRotationVelocity(std::array<float, 3> RotationVelocity);
        void AddRotationVelocity(Vector::Vector3<float> Rotation);
        void AddRotationVelocity(const std::vector<float> &RotationVelocity);
        void AddRotationVelocity(float XRotationVelocity, float YRotationVelocity, float ZRotationVelocity);
        void AddRotationVelocity(std::array<float, 3> RotationVelocity);
        void SubtractRotationVelocity(Vector::Vector3<float> Rotation);
        void SubtractRotationVelocity(const std::vector<float> &RotationVelocity);
        void SubtractRotationVelocity(float XRotationVelocity, float YRotationVelocity, float ZRotationVelocity);
        void SubtractRotationVelocity(std::array<float, 3> RotationVelocity);
        void CancelRotationVelocity();
        
        // Targeted Rotation
        void SetTargetedRotation(Vector::Vector3<float> Rotation);
        void SetTargetedRotation(const std::vector<float> &Rotation);
        void SetTargetedRotation(float XRotation, float YRotation, float ZRotation);

        // Speed
        void SetSpeed(float Speed);
        void AddSpeed(float Speed);
        void SubtractSpeed(float Speed);

        // Update
        void UpdateRotation();

        // Getters
        Vector::Vector3<float> GetRotation();
        Vector::Vector3<float> GetRotationVelocity();
        Vector::Vector3<float> GetTargetedRotation();
        float GetSpeed();
    private:
        Vector::Vector3<float> Rotation;
        std::mutex Rotation_MX;
        Vector::Vector3<float> RotationVelocity;
        std::mutex RotationVelocity_MX;
        Vector::Vector3<float> TargetedRotation;
        std::mutex TargetedRotation_MX;
        float Speed;
        std::mutex Speed_MX;
};


#endif