// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Object_CPP
#define Object_CPP

// CPP files .h file
#include "Object.h"

// Redefine vars if needed


// Start of program
Object::Object() {

}

Object::~Object() {

}

void Object::SetLocation(Vector::Vector3_f Location) {
    this->Location = Location;
}

void Object::SetLocation(float X, float Y, float Z) {
    this->Location = {X, Y, Z};
}

void Object::SetRotation(Vector::Vector3_f Rotation) {
    this->Rotation = Rotation;
}

void Object::SetRotation(float X, float Y, float Z) {
    this->Rotation = {X, Y, Z};
}

void Object::SetScale(Vector::Vector3_f Scale) {
    this->Scale = Scale;
}

void Object::SetScale(float X, float Y, float Z) {
    this->Scale = {X, Y, Z};
}

#endif