// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef VariableTypes_CPP
#define VariableTypes_CPP

// CPP files .h file
#include "VariableTypes.h"

// Redefine vars if needed


// Start of program
Vector::Vector2_i::Vector2_i() {
    this->X = 0;
    this->Y = 0;
}

Vector::Vector2_i::Vector2_i(int X, int Y) {
    this->X = X;
    this->Y = Y;
}

Vector::Vector2_i::Vector2_i(Vector2_i *Data) {
    this->X = Data->X;
    this->Y = Data->Y;
}

Vector::Vector2_i::Vector2_i(Vector2_f *Data) {
    this->X = Data->X;
    this->Y = Data->Y;
}

Vector::Vector2_i::Vector2_i(Vector2_d *Data) {
    this->X = Data->X;
    this->Y = Data->Y;
}

Vector::Vector2_i::Vector2_i(Vector2_f Data) {
    this->X = Data.X;
    this->Y = Data.Y;
}

Vector::Vector2_i::Vector2_i(Vector2_d Data) {
    this->X = Data.X;
    this->Y = Data.Y;
}

Vector::Vector2_i Vector::Vector2_i::operator+(Vector::Vector2_i Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator+(Vector::Vector2_f Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator+(Vector::Vector2_d Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator+(int Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator-(Vector::Vector2_i Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator-(Vector::Vector2_f Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator-(Vector::Vector2_d Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator-(int Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator*(Vector::Vector2_i Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator*(Vector::Vector2_f Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator*(Vector::Vector2_d Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator*(int Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator/(Vector::Vector2_i Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator/(Vector::Vector2_f Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator/(Vector::Vector2_d Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator/(int Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator%(Vector::Vector2_i Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator%(Vector::Vector2_f Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator%(Vector::Vector2_d Other) {
    return Vector2_i();
}

Vector::Vector2_i Vector::Vector2_i::operator%(int Other) {
    return Vector2_i();
}

bool Vector::Vector2_i::operator>(Vector::Vector2_i Other) {
    return false;
}

bool Vector::Vector2_i::operator>(Vector::Vector2_f Other) {
    return false;
}

bool Vector::Vector2_i::operator>(Vector::Vector2_d Other) {
    return false;
}

#endif