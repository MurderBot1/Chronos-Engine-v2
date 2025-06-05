// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef LocationClass_H
#define LocationClass_H

// C++ imported files


// Program imported files
#include "Vector.h"

// Definitions
class LocatoinClass {
    public:
        // Location
        void SetLocation(Vector::Vector3<float> Location);
        void SetLocation(const std::vector<float> &Value);
        void SetLocation(float Xvalue, float Yvalue, float Zvalue);
        void SetLocation(std::array<float, 3> Value);
        void Translate(Vector::Vector3<float> Location);
        void Translate(const std::vector<float> &Value);
        void Translate(float Xvalue, float Yvalue, float Zvalue);
        void Translate(std::array<float, 3> Value);

        // Velocity
        void SetVelocity(Vector::Vector3<float> Location);
        void SetVelocity(const std::vector<float> &Value);
        void SetVelocity(float Xvalue, float Yvalue, float Zvalue);
        void SetVelocity(std::array<float, 3> Value);
        void AddVelocity(Vector::Vector3<float> Location);
        void AddVelocity(const std::vector<float> &Value);
        void AddVelocity(float Xvalue, float Yvalue, float Zvalue);
        void AddVelocity(std::array<float, 3> Value);
        void SubtractVelocity(Vector::Vector3<float> Location);
        void SubtractVelocity(const std::vector<float> &Value);
        void SubtractVelocity(float Xvalue, float Yvalue, float Zvalue);
        void SubtractVelocity(std::array<float, 3> Value);
        void CancelVelocity();
        
        // Targeted location
    private:
        Vector::Vector3<float> Location;
        Vector::Vector3<float> Velocity;
        Vector::Vector3<float> TargetedLocation;
};

#endif