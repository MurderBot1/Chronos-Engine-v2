#include "Triangles.h"
#ifndef Triangles_CPP
#define Triangles_CPP

bool Triangle::Intersect(const Vector::Vector3<float>& RayOrgin, const Vector::Vector3<float>& RayDirection) {
    const double EPSILON = 1e-8;

    // Find vectors for two edges sharing v0
    Vector::Vector3<float> Edge1 = Points.Y - Points.X;
    Vector::Vector3<float> Edge2 = Points.Z - Points.X;

    // Begin calculating the determinant
    Vector::Vector3<float> H = RayDirection.Cross(Edge2);

    double A = Edge1.Dot(H);

    // If the determinant is near 0.0f, the ray is parallel to the triangle
    if (A > -EPSILON && A < EPSILON) {
        return false;
    }

    double F = 1.0 / A;
    Vector::Vector3<float> s = RayOrgin - Points.X;
    double U = F * s.Dot(H);

    // Check if the intersection is outside the triangle
    if (U < 0.0 || U > 1.0) {
        return false;
    }

    Vector::Vector3<float> Q = s.Cross(Edge1);
    double V = F * RayDirection.Dot(Q);

    // The intersection is outside the triangle
    if (V < 0.0 || U + V > 1.0) {
        return false;
    }

    // At this stage, we can compute t to find out where the intersection point is on the line
    double T = F * Edge2.Dot(Q);

    // Ray intersection
    if (T > EPSILON) {
        return true; // There is a ray intersection
    }

    return false; // There is a line intersection but not a ray intersection
}

void Triangle::RotateX(float Degrees) {
    float Rad = Degrees * DEG2RAD;
    float CosA = std::cos(Rad);
    float SinA = std::sin(Rad);
    // Point X
    Points.X = Vector::Vector3<float>(
        Points.X.X(),
        Points.X.Y() * CosA - Points.X.Z() * SinA,
        Points.X.Y() * SinA + Points.X.Z() * CosA
    );
    // Point Y
    Points.Y = Vector::Vector3<float>(
        Points.Y.X(),
        Points.Y.Y() * CosA - Points.Y.Z() * SinA,
        Points.Y.Y() * SinA + Points.Y.Z() * CosA
    );
    // Point Z
    Points.Z = Vector::Vector3<float>(
        Points.Z.X(),
        Points.Z.Y() * CosA - Points.Z.Z() * SinA,
        Points.Z.Y() * SinA + Points.Z.Z() * CosA
    );
}

void Triangle::RotateY(float Degrees) {
    float Rad = Degrees * DEG2RAD;
    float CosA = std::cos(Rad);
    float SinA = std::sin(Rad);
    // Point X
    Points.X = Vector::Vector3<float>(
        Points.X.X() * CosA + Points.X.Z() * SinA,
        Points.X.Y(),
        -Points.X.X() * SinA + Points.X.Z() * CosA
    );
    // Point Y
    Points.Y = Vector::Vector3<float>(
        Points.Y.X() * CosA + Points.Y.Z() * SinA,
        Points.Y.Y(),
        -Points.Y.X() * SinA + Points.Y.Z() * CosA
    );
    // Point Z
    Points.Z = Vector::Vector3<float>(
        Points.Z.X() * CosA + Points.Z.Z() * SinA,
        Points.Z.Y(),
        -Points.Z.X() * SinA + Points.Z.Z() * CosA
    );
}

void Triangle::RotateZ(float Degrees) {
    float Rad = Degrees * DEG2RAD;
    float CosA = std::cos(Rad);
    float SinA = std::sin(Rad);
    // Point X
    Points.X = Vector::Vector3<float>(
        Points.X.X() * CosA - Points.X.Y() * SinA,
        Points.X.X() * SinA + Points.X.Y() * CosA,
        Points.X.Z()
    );
    // Point Y
    Points.Y = Vector::Vector3<float>(
        Points.Y.X() * CosA - Points.Y.Y() * SinA,
        Points.Y.X() * SinA + Points.Y.Y() * CosA,
        Points.Y.Z()
    );
    // Point Z
    Points.Z = Vector::Vector3<float>(
        Points.Z.X() * CosA - Points.Z.Y() * SinA,
        Points.Z.X() * SinA + Points.Z.Y() * CosA,
        Points.Z.Z()
    );
}

void Triangle::Rotate(float X, float Y, float Z) {
    float RadX = X * DEG2RAD;
    float CosAX = std::cos(RadX);
    float SinAX = std::sin(RadX);
    // Point X
    Points.X = Vector::Vector3<float>(
        Points.X.X(),
        Points.X.Y() * CosAX - Points.X.Z() * SinAX,
        Points.X.Y() * SinAX + Points.X.Z() * CosAX
    );
    // Point Y
    Points.Y = Vector::Vector3<float>(
        Points.Y.X(),
        Points.Y.Y() * CosAX - Points.Y.Z() * SinAX,
        Points.Y.Y() * SinAX + Points.Y.Z() * CosAX
    );
    // Point Z
    Points.Z = Vector::Vector3<float>(
        Points.Z.X(),
        Points.Z.Y() * CosAX - Points.Z.Z() * SinAX,
        Points.Z.Y() * SinAX + Points.Z.Z() * CosAX
    );
}

#endif