#ifndef Triangles_H
#define Triangles_H

#include "Vector.h"
#include "Image.h"

#include <memory>

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
        TrianglePoints Points;
        Texture TriangleTexture;
};

#endif