// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Vector_H
#define Vector_H

// C++ imported files
#include <vector>
#include <array>

// Definitions
#define NULL_Vec1 {0}
#define NULL_Vec2 {0, 0}
#define NULL_Vec3 {0, 0, 0}
#define NULL_Vec4 {0, 0, 0, 0}

namespace Vector {
    template<typename T>
    class Vector1 {
        public:
            Vector1(const std::vector<T> &Value);
            Vector1(T Xvalue);
            Vector1(std::array<T, 1> Value);
        public:
            T X;
    };

    template <typename T>
    inline Vector1<T>::Vector1(const std::vector<T> &Value) {
        if(Value.size() >= 1)
            X = Value[0];
    }

    template <typename T>
    inline Vector1<T>::Vector1(T Xvalue) {
        X = Xvalue;
    }

    template <typename T>
    inline Vector1<T>::Vector1(std::array<T, 1> Value) {
        X = Value[0];
    }

    template<typename T>
    class Vector2 {
        public:
            Vector2(const std::vector<T> &Value);
            Vector2(T Xvalue, T Yvalue);
            Vector2(std::array<T, 2> Value);
        public:
        T X;
        T Y;
    };
    
    template <typename T>
    inline Vector2<T>::Vector2(const std::vector<T> &Value) {
        if(Value.size() >= 1)
            X = Value[0];
        if(Value.size() >= 2)
            Y = Value[1];
    }

    template <typename T>
    inline Vector2<T>::Vector2(T Xvalue, T Yvalue) {
        X = Xvalue;
        Y = Yvalue;
    }
    
    template <typename T>
    inline Vector2<T>::Vector2(std::array<T, 2> Value) {
        X = Value[0];
        Y = Value[1];
    }

    template<typename T>
    class Vector3 {
        public:
            Vector3(const std::vector<T> &Value);
            Vector3(T Xvalue, T Yvalue, T Zvalue);
            Vector3(std::array<T, 3> Value);

            // Int operators
            template <typename U = T>
            typename std::enable_if<std::is_integral<U>::value, Vector3>::type
            operator+(const Vector3& Other) const {
                return Vector3(X + Other.X, Y + Other.Y, Z + Other.Z);
            }

            template <typename U = T>
            typename std::enable_if<std::is_integral<U>::value, Vector3>::type
            operator-(const Vector3& Other) const {
                return Vector3(X - Other.X, Y - Other.Y, Z - Other.Z);
            }

            template <typename U = T>
            typename std::enable_if<std::is_integral<U>::value, Vector3>::type
            operator*(const Vector3& Other) const {
                return Vector3(X * Other.X, Y * Other.Y, Z * Other.Z);
            }

            template <typename U = T>
            typename std::enable_if<std::is_integral<U>::value, Vector3>::type
            operator/(const Vector3& Other) const {
                return Vector3(X / Other.X, Y / Other.Y, Z / Other.Z);
            }

            template <typename U = T>
            typename std::enable_if<std::is_integral<U>::value, Vector3>::type
            operator+(T Other) const {
                return Vector3(X + Other, Y + Other, Z + Other);
            }

            template <typename U = T>
            typename std::enable_if<std::is_integral<U>::value, Vector3>::type
            operator-(T Other) const {
                return Vector3(X - Other, Y - Other, Z - Other);
            }

            template <typename U = T>
            typename std::enable_if<std::is_integral<U>::value, Vector3>::type
            operator*(T Other) const {
                return Vector3(X * Other, Y * Other, Z * Other);
            }

            template <typename U = T>
            typename std::enable_if<std::is_integral<U>::value, Vector3>::type
            operator/(T Other) const {
                return Vector3(X / Other, Y / Other, Z / Other);
            }

            // Float operators
            template <typename U = T>
            typename std::enable_if<std::is_same<U, float>::value, Vector3>::type
            operator+(const Vector3& Other) const {
                return Vector3(X + Other.X, Y + Other.Y, Z + Other.Z);
            }

            template <typename U = T>
            typename std::enable_if<std::is_same<U, float>::value, Vector3>::type
            operator-(const Vector3& Other) const {
                return Vector3(X - Other.X, Y - Other.Y, Z - Other.Z);
            }

            template <typename U = T>
            typename std::enable_if<std::is_same<U, float>::value, Vector3>::type
            operator*(const Vector3& Other) const {
                return Vector3(X * Other.X, Y * Other.Y, Z * Other.Z);
            }

            template <typename U = T>
            typename std::enable_if<std::is_same<U, float>::value, Vector3>::type
            operator/(const Vector3& Other) const {
                return Vector3(X / Other.X, Y / Other.Y, Z / Other.Z);
            }

            template <typename U = T>
            typename std::enable_if<std::is_same<U, float>::value, Vector3>::type
            operator+(T Other) const {
                return Vector3(X + Other, Y + Other, Z + Other);
            }

            template <typename U = T>
            typename std::enable_if<std::is_same<U, float>::value, Vector3>::type
            operator-(T Other) const {
                return Vector3(X - Other, Y - Other, Z - Other);
            }

            template <typename U = T>
            typename std::enable_if<std::is_same<U, float>::value, Vector3>::type
            operator*(T Other) const {
                return Vector3(X * Other, Y * Other, Z * Other);
            }

            template <typename U = T>
            typename std::enable_if<std::is_same<U, float>::value, Vector3>::type
            operator/(T Other) const {
                return Vector3(X / Other, Y / Other, Z / Other);
            }       

            // Double operators
            template <typename U = T>
            typename std::enable_if<std::is_same<U, double>::value, Vector3>::type
            operator+(const Vector3& Other) const {
                return Vector3(X + Other.X, Y + Other.Y, Z + Other.Z);
            }

            template <typename U = T>
            typename std::enable_if<std::is_same<U, double>::value, Vector3>::type
            operator-(const Vector3& Other) const {
                return Vector3(X - Other.X, Y - Other.Y, Z - Other.Z);
            }

            template <typename U = T>
            typename std::enable_if<std::is_same<U, double>::value, Vector3>::type
            operator*(const Vector3& Other) const {
                return Vector3(X * Other.X, Y * Other.Y, Z * Other.Z);
            }

            template <typename U = T>
            typename std::enable_if<std::is_same<U, double>::value, Vector3>::type
            operator/(const Vector3& Other) const {
                return Vector3(X / Other.X, Y / Other.Y, Z / Other.Z);
            }

            template <typename U = T>
            typename std::enable_if<std::is_same<U, double>::value, Vector3>::type
            operator+(T Other) const {
                return Vector3(X + Other, Y + Other, Z + Other);
            }

            template <typename U = T>
            typename std::enable_if<std::is_same<U, double>::value, Vector3>::type
            operator-(T Other) const {
                return Vector3(X - Other, Y - Other, Z - Other);
            }

            template <typename U = T>
            typename std::enable_if<std::is_same<U, double>::value, Vector3>::type
            operator*(T Other) const {
                return Vector3(X * Other, Y * Other, Z * Other);
            }

            template <typename U = T>
            typename std::enable_if<std::is_same<U, double>::value, Vector3>::type
            operator/(T Other) const {
                return Vector3(X / Other, Y / Other, Z / Other);
            }            
        public:
            T X;
            T Y;
            T Z;
    };

    template <typename T>
    inline Vector3<T>::Vector3(const std::vector<T> &Value) {
        if(Value.size() >= 1)
            X = Value[0];
        if(Value.size() >= 2)
            Y = Value[1];
        if(Value.size() >= 3)
            Z = Value[2];
    }
    
    template <typename T>
    inline Vector3<T>::Vector3(T Xvalue, T Yvalue, T Zvalue) {
        X = Xvalue;
        Y = Yvalue;
        Z = Zvalue;
    }
    
    template <typename T>
    inline Vector3<T>::Vector3(std::array<T, 3> Value) {
        X = Value[0];
        Y = Value[1];
        Z = Value[2];   
    }

    template<typename T>
    class Vector4 {
        public:
            Vector4(const std::vector<T> &Value);
            Vector4(T Xvalue, T Yvalue, T Zvalue, T Wvalue);
            Vector4(std::array<T, 4> Value);
        public:
            T X;
            T Y;
            T Z;
            T W;
    };
    
    template <typename T>
    inline Vector4<T>::Vector4(const std::vector<T> &Value) {
        if(Value.size() >= 1)
            X = Value[0];
        if(Value.size() >= 2)
            Y = Value[1];
        if(Value.size() >= 3)
            Z = Value[2];
        if(Value.size() >= 4)
            W = Value[3];
    }
    
    template <typename T>
    inline Vector4<T>::Vector4(T Xvalue, T Yvalue, T Zvalue, T Wvalue) {
        X = Xvalue;
        Y = Yvalue;
        Z = Zvalue;
        W = Wvalue;
    }
    
    template <typename T>
    inline Vector4<T>::Vector4(std::array<T, 4> Value) {
        X = Value[0];
        Y = Value[1];
        Z = Value[2];
        W = Value[3];
    }
};

#endif