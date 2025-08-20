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
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX);

    // Change the value
    LocationClass::Location = Location_I; 
}

void LocationClass::SetLocation(const std::vector<float> &Location_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX);

    // Change the value
    LocationClass::Location = Location_I; 
}

void LocationClass::SetLocation(float XLocation, float YLocation, float ZLocation) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX);

    // Change the value
    LocationClass::Location = Vector::Vector3<float>(XLocation, YLocation, ZLocation); 
}

void LocationClass::SetLocation(std::array<float, 3> Location_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX);

    // Change the value
    LocationClass::Location = Location_I; 
}

void LocationClass::Translate(Vector::Vector3<float> Location_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX);

    // Change the value
    LocationClass::Location += Location_I;
}

void LocationClass::Translate(const std::vector<float> &Location_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX);

    // Change the value
    LocationClass::Location += Location_I; 
}

void LocationClass::Translate(float XLocation, float YLocation, float ZLocation) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX);

    // Change the value
    LocationClass::Location += Vector::Vector3<float>(XLocation, YLocation, ZLocation);
}

void LocationClass::Translate(std::array<float, 3> Location_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Location_MX);

    // Change the value
    LocationClass::Location += Location_I;
}

// Velocity
void LocationClass::SetVelocity(Vector::Vector3<float> Velocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX);

    // Change the value
    LocationClass::Velocity = Velocity_I;
}

void LocationClass::SetVelocity(const std::vector<float> &Velocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX);

    // Change the value
    LocationClass::Velocity = Velocity_I;
}

void LocationClass::SetVelocity(float XVelocity, float YVelocity, float ZVelocity) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX);

    // Change the value
    LocationClass::Velocity = Vector::Vector3<float>(XVelocity, YVelocity, ZVelocity);
}

void LocationClass::SetVelocity(std::array<float, 3> Velocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX);

    // Change the value
    LocationClass::Velocity = Velocity_I;
}

void LocationClass::AddVelocity(Vector::Vector3<float> Velocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX);

    // Change the value
    LocationClass::Velocity += Velocity_I;
}

void LocationClass::AddVelocity(const std::vector<float> &Velocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX);

    // Change the value
    LocationClass::Velocity += Velocity_I;
}

void LocationClass::AddVelocity(float XVelocity, float YVelocity, float ZVelocity) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX);

    // Change the value
    LocationClass::Velocity += Vector::Vector3<float>(XVelocity, YVelocity, ZVelocity);
}

void LocationClass::AddVelocity(std::array<float, 3> Velocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX);

    // Change the value
    LocationClass::Velocity += Velocity_I;
}

void LocationClass::SubtractVelocity(Vector::Vector3<float> Velocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX);

    // Change the value
    LocationClass::Velocity -= Velocity_I;
}

void LocationClass::SubtractVelocity(const std::vector<float> &Velocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX);

    // Change the value
    LocationClass::Velocity -= Velocity_I;
}

void LocationClass::SubtractVelocity(float XVelocity, float YVelocity, float ZVelocity) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX);

    // Change the value
    LocationClass::Velocity -= Vector::Vector3<float>(XVelocity, YVelocity, ZVelocity);
}

void LocationClass::SubtractVelocity(std::array<float, 3> Velocity_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX);

    // Change the value
    LocationClass::Velocity -= Velocity_I;
}

void LocationClass::CancelVelocity() {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Velocity_MX);

    // Change the value
    LocationClass::Velocity = NULL_Vec3;
}

// Targeted location
void LocationClass::SetTargetedLocation(Vector::Vector3<float> Location_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::TargetedLocation_MX);

    // Change the value
    LocationClass::TargetedLocation = Location_I;
}

void LocationClass::SetTargetedLocation(const std::vector<float> &Location_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::TargetedLocation_MX);

    // Change the value
    LocationClass::TargetedLocation = Location_I;
}

void LocationClass::SetTargetedLocation(float XLocation, float YLocation, float ZLocation) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::TargetedLocation_MX);

    // Change the value
    LocationClass::TargetedLocation = Vector::Vector3<float>(XLocation, YLocation, ZLocation);
}

// Speed
void LocationClass::SetSpeed(float Speed_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Speed_MX);

    // Change the value
    LocationClass::Speed = Speed_I;
}

void LocationClass::AddSpeed(float Speed_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Speed_MX);

    // Change the value
    LocationClass::Speed += Speed_I;
}

void LocationClass::SubtractSpeed(float Speed_I) {
    // Lock mutex
    std::lock_guard<std::mutex> lock(LocationClass::Speed_MX);

    // Change the value
    LocationClass::Speed -= Speed_I;
}

// Getters
Vector::Vector3<float> LocationClass::GetLocation() {
    // Lock mutex
    std::lock_guard<std::mutex> lock(Location_MX);

    // Get the value
    return Location;
}

Vector::Vector3<float> LocationClass::GetVelocity() {
    // Lock mutex
    std::lock_guard<std::mutex> lock(Velocity_MX);

    // Get the value
    return Velocity;
}

Vector::Vector3<float> LocationClass::GetTargetedLocation() {
    // Lock mutex
    std::lock_guard<std::mutex> lock(TargetedLocation_MX);

    // Get the value
    return TargetedLocation;
}

float LocationClass::GetSpeed() {
    // Lock mutex
    std::lock_guard<std::mutex> lock(Speed_MX);

    // Get the value
    return Speed;
}



// Update
void LocationClass::UpdateLocation() {

}

#endif