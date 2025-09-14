#ifndef Triangles_H
#define Triangles_H

#include "Vector.h"
#include "Image.h"

#include <memory>
#include <cmath>

struct TrianglePoints {
    Vector::Vector3<float> X, Y, Z;
};

struct TexturePoints {
    Vector::Vector2<float> X, Y, Z;
};

struct TextureImages {
    std::shared_ptr<ChronosImage> AlbedoMap;
    std::shared_ptr<ChronosImage> NormalMap;
    std::shared_ptr<ChronosImage> MetalnessMap;
    std::shared_ptr<ChronosImage> RoughnessMap;
    std::shared_ptr<ChronosImage> AOMap;
    std::shared_ptr<ChronosImage> EmissionMap;
    std::shared_ptr<ChronosImage> OpacityMap;
    std::shared_ptr<ChronosImage> HeightMap;
};

struct Texture {
    TextureImages Images;
    TexturePoints TextureMappingPoints;
};

class Triangle {
    public:
        Triangle() {
            Color = {0, 255, 0, 0};
        }
        Triangle(Vector::Vector3<float> X, Vector::Vector3<float> Y, Vector::Vector3<float> Z, ChronosPixel::Pixel ColorOfTriangle) {
            Color = ColorOfTriangle;
            Points = TrianglePoints({X, Y, Z});
        }
        TrianglePoints Points;
        Texture TriangleTexture;

        bool Intersect(const Vector::Vector3<float>& RayOrgin, const Vector::Vector3<float>& RayDirection);

        void RotateX(float Degrees);
        void RotateY(float Degrees);
        void RotateZ(float Degrees);
        void Rotate(float X, float Y, float Z);

        // Temp Var For Dev
        ChronosPixel::Pixel Color;
};

#endif