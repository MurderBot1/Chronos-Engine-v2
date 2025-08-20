#ifndef RotationClass_CPP
#define RotationClass_CPP

#include "RotationClass.h"

// Definitions
// Rotation
void RotationClass::SetRotation(Vector::Vector3<float> Rotation_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::Rotation_MX);

    // Change the value
    RotationClass::Rotation = Rotation_I; 
}

void RotationClass::SetRotation(const std::vector<float> &Rotation_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::Rotation_MX);

    // Change the value
    RotationClass::Rotation = Rotation_I; 
}

void RotationClass::SetRotation(float XRotation, float YRotation, float ZRotation) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::Rotation_MX);

    // Change the value
    RotationClass::Rotation = Vector::Vector3<float>(XRotation, YRotation, ZRotation); 
}

void RotationClass::SetRotation(std::array<float, 3> Rotation_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::Rotation_MX);

    // Change the value
    RotationClass::Rotation = Rotation_I; 
}

void RotationClass::Translate(Vector::Vector3<float> Rotation_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::Rotation_MX);

    // Change the value
    RotationClass::Rotation += Rotation_I;
}

void RotationClass::Translate(const std::vector<float> &Rotation_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::Rotation_MX);

    // Change the value
    RotationClass::Rotation += Rotation_I; 
}

void RotationClass::Translate(float XRotation, float YRotation, float ZRotation) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::Rotation_MX);

    // Change the value
    RotationClass::Rotation += Vector::Vector3<float>(XRotation, YRotation, ZRotation);
}

void RotationClass::Translate(std::array<float, 3> Rotation_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::Rotation_MX);

    // Change the value
    RotationClass::Rotation += Rotation_I;
}

// RotationVelocity
void RotationClass::SetRotationVelocity(Vector::Vector3<float> RotationVelocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::RotationVelocity_MX);

    // Change the value
    RotationClass::RotationVelocity = RotationVelocity_I;
}

void RotationClass::SetRotationVelocity(const std::vector<float> &RotationVelocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::RotationVelocity_MX);

    // Change the value
    RotationClass::RotationVelocity = RotationVelocity_I;
}

void RotationClass::SetRotationVelocity(float XRotationVelocity, float YRotationVelocity, float ZRotationVelocity) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::RotationVelocity_MX);

    // Change the value
    RotationClass::RotationVelocity = Vector::Vector3<float>(XRotationVelocity, YRotationVelocity, ZRotationVelocity);
}

void RotationClass::SetRotationVelocity(std::array<float, 3> RotationVelocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::RotationVelocity_MX);

    // Change the value
    RotationClass::RotationVelocity = RotationVelocity_I;
}

void RotationClass::AddRotationVelocity(Vector::Vector3<float> RotationVelocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::RotationVelocity_MX);

    // Change the value
    RotationClass::RotationVelocity += RotationVelocity_I;
}

void RotationClass::AddRotationVelocity(const std::vector<float> &RotationVelocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::RotationVelocity_MX);

    // Change the value
    RotationClass::RotationVelocity += RotationVelocity_I;
}

void RotationClass::AddRotationVelocity(float XRotationVelocity, float YRotationVelocity, float ZRotationVelocity) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::RotationVelocity_MX);

    // Change the value
    RotationClass::RotationVelocity += Vector::Vector3<float>(XRotationVelocity, YRotationVelocity, ZRotationVelocity);
}

void RotationClass::AddRotationVelocity(std::array<float, 3> RotationVelocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::RotationVelocity_MX);

    // Change the value
    RotationClass::RotationVelocity += RotationVelocity_I;
}

void RotationClass::SubtractRotationVelocity(Vector::Vector3<float> RotationVelocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::RotationVelocity_MX);

    // Change the value
    RotationClass::RotationVelocity -= RotationVelocity_I;
}

void RotationClass::SubtractRotationVelocity(const std::vector<float> &RotationVelocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::RotationVelocity_MX);

    // Change the value
    RotationClass::RotationVelocity -= RotationVelocity_I;
}

void RotationClass::SubtractRotationVelocity(float XRotationVelocity, float YRotationVelocity, float ZRotationVelocity) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::RotationVelocity_MX);

    // Change the value
    RotationClass::RotationVelocity -= Vector::Vector3<float>(XRotationVelocity, YRotationVelocity, ZRotationVelocity);
}

void RotationClass::SubtractRotationVelocity(std::array<float, 3> RotationVelocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::RotationVelocity_MX);

    // Change the value
    RotationClass::RotationVelocity -= RotationVelocity_I;
}

void RotationClass::CancelRotationVelocity() {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::RotationVelocity_MX);

    // Change the value
    RotationClass::RotationVelocity = NULL_Vec3;
}

// Targeted Rotation
void RotationClass::SetTargetedRotation(Vector::Vector3<float> Rotation_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::TargetedRotation_MX);

    // Change the value
    RotationClass::TargetedRotation = Rotation_I;
}

void RotationClass::SetTargetedRotation(const std::vector<float> &Rotation_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::TargetedRotation_MX);

    // Change the value
    RotationClass::TargetedRotation = Rotation_I;
}

void RotationClass::SetTargetedRotation(float XRotation, float YRotation, float ZRotation) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::TargetedRotation_MX);

    // Change the value
    RotationClass::TargetedRotation = Vector::Vector3<float>(XRotation, YRotation, ZRotation);
}

// Speed
void RotationClass::SetSpeed(float Speed_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::Speed_MX);

    // Change the value
    RotationClass::Speed = Speed_I;
}

void RotationClass::AddSpeed(float Speed_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::Speed_MX);

    // Change the value
    RotationClass::Speed += Speed_I;
}

void RotationClass::SubtractSpeed(float Speed_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationClass::Speed_MX);

    // Change the value
    RotationClass::Speed -= Speed_I;
}

// Getters
Vector::Vector3<float> RotationClass::GetRotation() {
    // Lock mutex
    std::lock_guard<std::mutex> lock(Rotation_MX);

    // Get the value
    return Rotation;
}

Vector::Vector3<float> RotationClass::GetRotationVelocity() {
    // Lock mutex
    std::lock_guard<std::mutex> lock(RotationVelocity_MX);

    // Get the value
    return RotationVelocity;
}

Vector::Vector3<float> RotationClass::GetTargetedRotation() {
    // Lock mutex
    std::lock_guard<std::mutex> lock(TargetedRotation_MX);

    // Get the value
    return TargetedRotation;
}

float RotationClass::GetSpeed() {
    // Lock mutex
    std::lock_guard<std::mutex> lock(Speed_MX);

    // Get the value
    return Speed;
}

// Update
void RotationClass::UpdateRotation() {

}

#endif