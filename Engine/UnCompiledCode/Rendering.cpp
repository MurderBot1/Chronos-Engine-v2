// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Rendering_CPP
#define Rendering_CPP

// CPP files .h file
#include "Rendering.h"

// Redefine vars if needed


// Start of program
bool VideoRendering::RayIntersectsTriangle(Vector::Vector3_f TL1, Vector::Vector3_f TL2, Vector::Vector3_f TL3, Vector::Vector3_f Start, Vector::Vector3_f Direction) {
    /**
    *  @brief Determines if a ray intersects with a triangle in 3D space.
    *  @param TL1 The first vertex of the triangle (Vector3_f).
    *  @param TL2 The second vertex of the triangle (Vector3_f).
    *  @param TL3 The third vertex of the triangle (Vector3_f).
    *  @param Start The starting point of the ray (Vector3_f).
    *  @param Direction The direction vector of the ray (Vector3_f).
    *  @return true if the ray intersects the triangle, false otherwise.
    */

}


bool VideoRendering::IsObjectHit(Object* Obj, Vector::Vector3_f Start, Vector::Vector3_f Direction) {
    /**
    * @brief Determines if a given object is hit by a ray defined by a start point and direction.
    * 
    * @param Obj Pointer to the object to check for a hit.
    * @param Start The starting point of the ray in 3D space.
    * @param Direction The direction vector of the ray in 3D space.
    * @return true if the object is hit by the ray, false otherwise.
    */
}


std::vector<Object*> VideoRendering::ListPossableObjects(Vector::Vector3_f Start, Vector::Vector3_f Direction) {
    /**
    * @brief Retrieves a list of possible objects intersected by a given ray.
    * 
    * This function calculates and returns a list of objects that may be intersected
    * by a ray defined by a starting point and a direction vector. It is typically
    * used for raycasting or collision detection in a 3D environment.
    * 
    * @param Start The starting point of the ray in 3D space.
    * @param Direction The direction vector of the ray in 3D space.
    * @return A vector of pointers to objects that are potential intersections.
    */
}


Object* VideoRendering::FindHitObject(std::vector<Object*> ObjList) {
    /**
    * @brief Finds the object that was hit during video rendering from a list of objects.
    * 
    * @param ObjList A vector containing pointers to objects to be checked for a hit.
    * @return A pointer to the object that was hit, or nullptr if no object was hit.
    */
    
}


VideoRendering::RenderingOutput VideoRendering::RetriveObjectColorData(Object* Obj) {
    /**
    * @brief Retrieves the color data of a specified object.
    * 
    * This function is responsible for extracting and returning the color-related
    * rendering data of the given object. The returned data can be used for 
    * rendering or other processing tasks.
    * 
    * @param Obj A pointer to the object whose color data is to be retrieved.
    *            The object must be valid and properly initialized.
    * 
    * @return RenderingOutput containing the color data of the specified object.
    */

}

Vector::Vector3_f VideoRendering::FindNewReflectionDirection(Vector::Vector3_f Start, Vector::Vector3_f Direction, Triangle *TrianglePtr) {
    /**
    * @brief Calculates the new reflection direction of a vector after it hits a triangle surface.
    * 
    * @param Start The starting point of the vector in 3D space.
    * @param Direction The direction of the incoming vector in 3D space.
    * @param TrianglePtr Pointer to the triangle that the vector intersects with.
    * @return Vector::Vector3_f The calculated reflection direction as a 3D vector.
    */

}

VideoRendering::RenderingOutput VideoRendering::RenderPixel(int Bounces, Vector::Vector3_f Start, Vector::Vector3_f Direction) {
    std::vector<Object*> ObjList = VideoRendering::ListPossableObjects(Start, Direction);
    Object* Obj = VideoRendering::FindHitObject(ObjList);
    VideoRendering::RenderingOutput HitObjectsData = VideoRendering::RetriveObjectColorData(Obj); 
    Vector::Vector3_f NewDirection = VideoRendering::FindNewReflectionDirection(Start, Direction, HitObjectsData.TrianglePtr);
    if(Bounces > 0) {
        VideoRendering::RenderingOutput ReflectionData = VideoRendering::RenderPixel(Bounces - 1, HitObjectsData.HitLocation, NewDirection);
        VideoRendering::RenderingOutput TransparentData = VideoRendering::RenderPixel(Bounces - 1, HitObjectsData.HitLocation, Direction);
    } else {
        return HitObjectsData;
    }
}

std::vector<std::vector<VideoRendering::RenderingOutput>> VideoRendering::RenderTheScene() {

}

#endif