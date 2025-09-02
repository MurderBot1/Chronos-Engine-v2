#ifndef Object_CPP
#define Object_CPP

#include "Object.h"

IdentityToken Object::Identity;

Object::Object() {
    // Load identity
    Identity.LoadIdentity();
    
}

Object::~Object() {

}

void Object::AddTriangle(float P1, float P2, float P3, float P4, float P5, float P6, float P7, float P8, float P9) {
    Triangles.emplace_back(
        Triangle(
            Vector::Vector3<float>(P1, P2, P3),
            Vector::Vector3<float>(P4, P5, P6),
            Vector::Vector3<float>(P7, P8, P9),
            {255, 255, 255, 0}
        )
    );
}

Cube::Cube() {
    #define P 0.5f
    #define N -0.5f
    AddTriangle( N, P, N, P, P, N, N, P, P );
    AddTriangle( P, P, N, N, P, P, P, P, P );
    AddTriangle( N, P, N, N, P, P, N, N, N );
    AddTriangle( N, P, P, N, N, N, N, N, P );
    AddTriangle( N, P, P, P, P, P, N, N, P );
    AddTriangle( P, P, P, N, N, P, P, N, P );
    AddTriangle( N, P, N, P, P, N, N, N, N );
    AddTriangle( P, P, N, N, N, N, P, N, N );
    AddTriangle( P, P, N, P, P, P, P, N, N );
    AddTriangle( P, P, P, P, N, N, P, N, P );
    AddTriangle( N, N, N, P, N, N, N, N, P );
    AddTriangle( P, N, N, N, N, P, P, N, P );
    #undef P
    #undef N
}

Cube::~Cube() {

}

#endif