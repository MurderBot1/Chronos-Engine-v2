// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef ScaleClass_CPP
#define ScaleClass_CPP

// Include the C++'s .h file
#include "ScaleClass.h"

// Variable redefinitions


// Definitions
// Scale
void ScaleClass::SetScale(Vector::Vector3<float> Scale_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Scale_MX); // Lock mutex
    ScaleClass::Scale = Scale_I; // Change the value
}

void ScaleClass::SetScale(const std::vector<float> &Scale_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Scale_MX); // Lock mutex
    ScaleClass::Scale = Scale_I; // Change the value
}

void ScaleClass::SetScale(float XScale, float YScale, float ZScale) {
    std::lock_guard<std::mutex> lock(ScaleClass::Scale_MX); // Lock mutex
    ScaleClass::Scale = Vector::Vector3<float>(XScale, YScale, ZScale); // Change the value
}

void ScaleClass::SetScale(std::array<float, 3> Scale_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Scale_MX); // Lock mutex
    ScaleClass::Scale = Scale_I; // Change the value
}

void ScaleClass::Enlarge(Vector::Vector3<float> Scale_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Scale_MX); // Lock mutex
    ScaleClass::Scale += Scale_I; // Change the value
}

void ScaleClass::Enlarge(const std::vector<float> &Scale_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Scale_MX); // Lock mutex
    ScaleClass::Scale += Scale_I; // Change the value
}

void ScaleClass::Enlarge(float XScale, float YScale, float ZScale) {
    std::lock_guard<std::mutex> lock(ScaleClass::Scale_MX); // Lock mutex
    ScaleClass::Scale += Vector::Vector3<float>(XScale, YScale, ZScale); // Change the value
}

void ScaleClass::Enlarge(std::array<float, 3> Scale_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Scale_MX); // Lock mutex
    ScaleClass::Scale += Scale_I; // Change the value
}

// Velocity
void ScaleClass::SetVelocity(Vector::Vector3<float> Velocity_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Velocity_MX); // Lock mutex
    ScaleClass::Velocity = Velocity_I; // Change the value
}

void ScaleClass::SetVelocity(const std::vector<float> &Velocity_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Velocity_MX); // Lock mutex
    ScaleClass::Velocity = Velocity_I; // Change the value
}

void ScaleClass::SetVelocity(float XVelocity, float YVelocity, float ZVelocity) {
    std::lock_guard<std::mutex> lock(ScaleClass::Velocity_MX); // Lock mutex
    ScaleClass::Velocity = Vector::Vector3<float>(XVelocity, YVelocity, ZVelocity); // Change the value
}

void ScaleClass::SetVelocity(std::array<float, 3> Velocity_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Velocity_MX); // Lock mutex
    ScaleClass::Velocity = Velocity_I; // Change the value
}

void ScaleClass::AddVelocity(Vector::Vector3<float> Velocity_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Velocity_MX); // Lock mutex
    ScaleClass::Velocity += Velocity_I; // Change the value
}

void ScaleClass::AddVelocity(const std::vector<float> &Velocity_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Velocity_MX); // Lock mutex
    ScaleClass::Velocity += Velocity_I; // Change the value
}

void ScaleClass::AddVelocity(float XVelocity, float YVelocity, float ZVelocity) {
    std::lock_guard<std::mutex> lock(ScaleClass::Velocity_MX); // Lock mutex
    ScaleClass::Velocity += Vector::Vector3<float>(XVelocity, YVelocity, ZVelocity); // Change the value
}

void ScaleClass::AddVelocity(std::array<float, 3> Velocity_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Velocity_MX); // Lock mutex
    ScaleClass::Velocity += Velocity_I; // Change the value
}

void ScaleClass::SubtractVelocity(Vector::Vector3<float> Velocity_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Velocity_MX); // Lock mutex
    ScaleClass::Velocity -= Velocity_I; // Change the value
}

void ScaleClass::SubtractVelocity(const std::vector<float> &Velocity_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Velocity_MX); // Lock mutex
    ScaleClass::Velocity -= Velocity_I; // Change the value
}

void ScaleClass::SubtractVelocity(float XVelocity, float YVelocity, float ZVelocity) {
    std::lock_guard<std::mutex> lock(ScaleClass::Velocity_MX); // Lock mutex
    ScaleClass::Velocity -= Vector::Vector3<float>(XVelocity, YVelocity, ZVelocity); // Change the value
}

void ScaleClass::SubtractVelocity(std::array<float, 3> Velocity_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Velocity_MX); // Lock mutex
    ScaleClass::Velocity -= Velocity_I; // Change the value
}

void ScaleClass::CancelVelocity() {
    std::lock_guard<std::mutex> lock(ScaleClass::Velocity_MX); // Lock mutex
    ScaleClass::Velocity = NULL_Vec3; // Change the value
}

// Targeted Scale
void ScaleClass::SetTargetedScale(Vector::Vector3<float> Scale_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::TargetedScale_MX); // Lock mutex
    ScaleClass::TargetedScale = Scale_I; // Change the value
}

void ScaleClass::SetTargetedScale(const std::vector<float> &Scale_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::TargetedScale_MX); // Lock mutex
    ScaleClass::TargetedScale = Scale_I; // Change the value
}

void ScaleClass::SetTargetedScale(float XScale, float YScale, float ZScale) {
    std::lock_guard<std::mutex> lock(ScaleClass::TargetedScale_MX); // Lock mutex
    ScaleClass::TargetedScale = Vector::Vector3<float>(XScale, YScale, ZScale); // Change the value
}

// Speed
void ScaleClass::SetSpeed(float Speed_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Speed_MX); // Lock mutex
    ScaleClass::Speed = Speed_I; // Change the value
}

void ScaleClass::AddSpeed(float Speed_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Speed_MX); // Lock mutex
    ScaleClass::Speed += Speed_I; // Change the value
}

void ScaleClass::SubtractSpeed(float Speed_I) {
    std::lock_guard<std::mutex> lock(ScaleClass::Speed_MX); // Lock mutex
    ScaleClass::Speed -= Speed_I; // Change the value
}

// Getters
Vector::Vector3<float> ScaleClass::GetScale() {
    std::lock_guard<std::mutex> lock(Scale_MX); // Lock mutex
    // Get the value
    return Scale;
}

Vector::Vector3<float> ScaleClass::GetVelocity() {
    std::lock_guard<std::mutex> lock(Velocity_MX); // Lock mutex
    // Get the value
    return Velocity;
}

Vector::Vector3<float> ScaleClass::GetTargetedScale() {
    std::lock_guard<std::mutex> lock(TargetedScale_MX); // Lock mutex
    // Get the value
    return TargetedScale;
}

float ScaleClass::GetSpeed() {
    std::lock_guard<std::mutex> lock(Speed_MX); // Lock mutex
    // Get the value
    return Speed;
}

// Update
void ScaleClass::UpdateScale() {

}

#endif