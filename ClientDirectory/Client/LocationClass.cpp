// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef LocationClass_CPP
#define LocationClass_CPP

// Include the C++'s .h file
#include "LocationClass.h"

// Variable redefinitions


// Definitions
// Location
void LocationClass::SetLocation(Vector::Vector3<float> Location_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX); // Lock mutex
    LocationClass::Location = Location_I; // Change the value
}

void LocationClass::SetLocation(const std::vector<float> &Location_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX); // Lock mutex
    LocationClass::Location = Location_I; // Change the value
}

void LocationClass::SetLocation(float XLocation, float YLocation, float ZLocation) {
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX); // Lock mutex
    LocationClass::Location = Vector::Vector3<float>(XLocation, YLocation, ZLocation); // Change the value
}

void LocationClass::SetLocation(std::array<float, 3> Location_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX); // Lock mutex
    LocationClass::Location = Location_I; // Change the value
}

void LocationClass::Translate(Vector::Vector3<float> Location_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX); // Lock mutex
    LocationClass::Location += Location_I; // Change the value
}

void LocationClass::Translate(const std::vector<float> &Location_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX); // Lock mutex
    LocationClass::Location += Location_I; // Change the value
}

void LocationClass::Translate(float XLocation, float YLocation, float ZLocation) {
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX); // Lock mutex
    LocationClass::Location += Vector::Vector3<float>(XLocation, YLocation, ZLocation); // Change the value
}

void LocationClass::Translate(std::array<float, 3> Location_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX); // Lock mutex
    LocationClass::Location += Location_I; // Change the value
}

// Velocity
void LocationClass::SetVelocity(Vector::Vector3<float> Velocity_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX); // Lock mutex
    LocationClass::Velocity = Velocity_I; // Change the value
}

void LocationClass::SetVelocity(const std::vector<float> &Velocity_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX); // Lock mutex
    LocationClass::Velocity = Velocity_I; // Change the value
}

void LocationClass::SetVelocity(float XVelocity, float YVelocity, float ZVelocity) {
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX); // Lock mutex
    LocationClass::Velocity = Vector::Vector3<float>(XVelocity, YVelocity, ZVelocity); // Change the value
}

void LocationClass::SetVelocity(std::array<float, 3> Velocity_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX); // Lock mutex
    LocationClass::Velocity = Velocity_I; // Change the value
}

void LocationClass::AddVelocity(Vector::Vector3<float> Velocity_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX); // Lock mutex
    LocationClass::Velocity += Velocity_I; // Change the value
}

void LocationClass::AddVelocity(const std::vector<float> &Velocity_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX); // Lock mutex
    LocationClass::Velocity += Velocity_I; // Change the value
}

void LocationClass::AddVelocity(float XVelocity, float YVelocity, float ZVelocity) {
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX); // Lock mutex
    LocationClass::Velocity += Vector::Vector3<float>(XVelocity, YVelocity, ZVelocity); // Change the value
}

void LocationClass::AddVelocity(std::array<float, 3> Velocity_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX); // Lock mutex
    LocationClass::Velocity += Velocity_I; // Change the value
}

void LocationClass::SubtractVelocity(Vector::Vector3<float> Velocity_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX); // Lock mutex
    LocationClass::Velocity -= Velocity_I; // Change the value
}

void LocationClass::SubtractVelocity(const std::vector<float> &Velocity_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX); // Lock mutex
    LocationClass::Velocity -= Velocity_I; // Change the value
}

void LocationClass::SubtractVelocity(float XVelocity, float YVelocity, float ZVelocity) {
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX); // Lock mutex
    LocationClass::Velocity -= Vector::Vector3<float>(XVelocity, YVelocity, ZVelocity); // Change the value
}

void LocationClass::SubtractVelocity(std::array<float, 3> Velocity_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX); // Lock mutex
    LocationClass::Velocity -= Velocity_I; // Change the value
}

void LocationClass::CancelVelocity() {
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX); // Lock mutex
    LocationClass::Velocity = NULL_Vec3; // Change the value
}

// Targeted location
void LocationClass::SetTargetedLocation(Vector::Vector3<float> Location_I) {
    std::lock_guard<std::mutex> lock(LocationClass::TargetedLocation_MX); // Lock mutex
    LocationClass::TargetedLocation = Location_I; // Change the value
}

void LocationClass::SetTargetedLocation(const std::vector<float> &Location_I) {
    std::lock_guard<std::mutex> lock(LocationClass::TargetedLocation_MX); // Lock mutex
    LocationClass::TargetedLocation = Location_I; // Change the value
}

void LocationClass::SetTargetedLocation(float XLocation, float YLocation, float ZLocation) {
    std::lock_guard<std::mutex> lock(LocationClass::TargetedLocation_MX); // Lock mutex
    LocationClass::TargetedLocation = Vector::Vector3<float>(XLocation, YLocation, ZLocation); // Change the value
}

// Speed
void LocationClass::SetSpeed(float Speed_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Speed_MX); // Lock mutex
    LocationClass::Speed = Speed_I; // Change the value
}

void LocationClass::AddSpeed(float Speed_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Speed_MX); // Lock mutex
    LocationClass::Speed += Speed_I; // Change the value
}

void LocationClass::SubtractSpeed(float Speed_I) {
    std::lock_guard<std::mutex> lock(LocationClass::Speed_MX); // Lock mutex
    LocationClass::Speed -= Speed_I; // Change the value
}

// Getters
Vector::Vector3<float> LocationClass::GetLocation() {
    std::lock_guard<std::mutex> lock(Location_MX); // Lock mutex
    // Get the value
    return Location;
}

Vector::Vector3<float> LocationClass::GetVelocity() {
    std::lock_guard<std::mutex> lock(Velocity_MX); // Lock mutex
    // Get the value
    return Velocity;
}

Vector::Vector3<float> LocationClass::GetTargetedLocation() {
    std::lock_guard<std::mutex> lock(TargetedLocation_MX); // Lock mutex
    // Get the value
    return TargetedLocation;
}

float LocationClass::GetSpeed() {
    std::lock_guard<std::mutex> lock(Speed_MX); // Lock mutex
    // Get the value
    return Speed;
}

// Update
void LocationClass::UpdateLocation() {

}

#endif