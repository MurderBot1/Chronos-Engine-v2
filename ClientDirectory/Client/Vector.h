// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Vector_H
#define Vector_H

#pragma once
#include <vector>
#include <array>
#include <cstddef> // for size_t

namespace Vector
{
    template<typename T, std::size_t N>
    class VectorN {
    public:
        std::array<T, N> Data{};

        // Constructors
        VectorN();
        VectorN(const std::vector<T> &Value);
        VectorN(const std::array<T, N> &Value);
        template<typename... Args, typename = std::enable_if_t<sizeof...(Args) == N>> VectorN(Args... values) : Data{{ static_cast<T>(values)... }} {}

        // Assignment from containers
        VectorN<T, N>& operator=(const std::vector<T> &Value);
        VectorN<T, N>& operator=(const std::array<T, N> &Value);

        // Mutating operators
        // VectorN
        VectorN<T, N>& operator+=(const VectorN<T, N> &RHS);
        VectorN<T, N>& operator-=(const VectorN<T, N> &RHS);
        VectorN<T, N>& operator*=(const VectorN<T, N> &RHS);
        VectorN<T, N>& operator/=(const VectorN<T, N> &RHS);

        // std::vector
        VectorN<T, N>& operator+=(const std::vector<T> &RHS);
        VectorN<T, N>& operator-=(const std::vector<T> &RHS);
        VectorN<T, N>& operator*=(const std::vector<T> &RHS);
        VectorN<T, N>& operator/=(const std::vector<T> &RHS);

        // std::array
        VectorN<T, N>& operator+=(const std::array<T, N> &RHS);
        VectorN<T, N>& operator-=(const std::array<T, N> &RHS);
        VectorN<T, N>& operator*=(const std::array<T, N> &RHS);
        VectorN<T, N>& operator/=(const std::array<T, N> &RHS);

        // Scalar
        VectorN<T, N>& operator+=(T Scalar);
        VectorN<T, N>& operator-=(T Scalar);
        VectorN<T, N>& operator*=(T Scalar);
        VectorN<T, N>& operator/=(T Scalar);
        
        // Non‑mutating operators
        VectorN<T, N> operator+(const VectorN<T, N> &RHS) const { return VectorN<T, N>(*this) += RHS; }
        VectorN<T, N> operator-(const VectorN<T, N> &RHS) const { return VectorN<T, N>(*this) -= RHS; }
        VectorN<T, N> operator*(const VectorN<T, N> &RHS) const { return VectorN<T, N>(*this) *= RHS; }
        VectorN<T, N> operator/(const VectorN<T, N> &RHS) const { return VectorN<T, N>(*this) /= RHS; }
        
        VectorN<T, N> operator+(const std::vector<T> &RHS) const { return VectorN<T, N>(*this) += RHS; }
        VectorN<T, N> operator-(const std::vector<T> &RHS) const { return VectorN<T, N>(*this) -= RHS; }
        VectorN<T, N> operator*(const std::vector<T> &RHS) const { return VectorN<T, N>(*this) *= RHS; }
        VectorN<T, N> operator/(const std::vector<T> &RHS) const { return VectorN<T, N>(*this) /= RHS; }
        
        VectorN<T, N> operator+(const std::array<T, N> &RHS) const { return VectorN<T, N>(*this) += RHS; }
        VectorN<T, N> operator-(const std::array<T, N> &RHS) const { return VectorN<T, N>(*this) -= RHS; }
        VectorN<T, N> operator*(const std::array<T, N> &RHS) const { return VectorN<T, N>(*this) *= RHS; }
        VectorN<T, N> operator/(const std::array<T, N> &RHS) const { return VectorN<T, N>(*this) /= RHS; }
        
        VectorN<T, N> operator+(T Scalar) const { return VectorN<T, N>(*this) += Scalar; }
        VectorN<T, N> operator-(T Scalar) const { return VectorN<T, N>(*this) -= Scalar; }
        VectorN<T, N> operator*(T Scalar) const { return VectorN<T, N>(*this) *= Scalar; }
        VectorN<T, N> operator/(T Scalar) const { return VectorN<T, N>(*this) /= Scalar; }

        // Convenient accessors for X/Y/Z/W if N allows
        T& X() { static_assert(N >= 1, "X not available"); return Data[0]; }
        T& Y() { static_assert(N >= 2, "Y not available"); return Data[1]; }
        T& Z() { static_assert(N >= 3, "Z not available"); return Data[2]; }
        T& W() { static_assert(N >= 4, "W not available"); return Data[3]; }
        T& U() { static_assert(N >= 5, "U not available"); return Data[4]; }
        T& V() { static_assert(N >= 6, "V not available"); return Data[5]; }
        T& A() { static_assert(N >= 7, "A not available"); return Data[6]; }
        T& Q() { static_assert(N >= 8, "Q not available"); return Data[7]; }
        T& R() { static_assert(N >= 9, "R not available"); return Data[8]; }
        T& S() { static_assert(N >= 10, "S not available"); return Data[9]; }
        
        const T& X() const { static_assert(N >= 1, "X not available"); return Data[0]; }
        const T& Y() const { static_assert(N >= 2, "Y not available"); return Data[1]; }
        const T& Z() const { static_assert(N >= 3, "Z not available"); return Data[2]; }
        const T& W() const { static_assert(N >= 4, "W not available"); return Data[3]; }
        const T& U() const { static_assert(N >= 5, "U not available"); return Data[4]; }
        const T& V() const { static_assert(N >= 6, "V not available"); return Data[5]; }
        const T& A() const { static_assert(N >= 7, "A not available"); return Data[6]; }
        const T& Q() const { static_assert(N >= 8, "Q not available"); return Data[7]; }
        const T& R() const { static_assert(N >= 9, "R not available"); return Data[8]; }
        const T& S() const { static_assert(N >= 10, "S not available"); return Data[9]; }
    };

    // Convenient aliases
    template<typename T> using Vector1 = VectorN<T, 1>;
    template<typename T> using Vector2 = VectorN<T, 2>;
    template<typename T> using Vector3 = VectorN<T, 3>;
    template<typename T> using Vector4 = VectorN<T, 4>;
    template<typename T> using Vector5 = VectorN<T, 5>;
    template<typename T> using Vector6 = VectorN<T, 6>;
    template<typename T> using Vector7 = VectorN<T, 7>;
    template<typename T> using Vector8 = VectorN<T, 8>;
    template<typename T> using Vector9 = VectorN<T, 9>;
    template<typename T> using Vector10 = VectorN<T, 10>;

    // Null vectors
    #define NULL_Vec1   Vector::Vector1<float>( 0.0f )
    #define NULL_Vec2   Vector::Vector2<float>( 0.0f, 0.0f )
    #define NULL_Vec3   Vector::Vector3<float>( 0.0f, 0.0f, 0.0f )
    #define NULL_Vec4   Vector::Vector4<float>( 0.0f, 0.0f, 0.0f, 0.0f )
    #define NULL_Vec5   Vector::Vector5<float>( 0.0f, 0.0f, 0.0f, 0.0f, 0.0f )
    #define NULL_Vec6   Vector::Vector6<float>( 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f )
    #define NULL_Vec7   Vector::Vector7<float>( 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f )
    #define NULL_Vec8   Vector::Vector8<float>( 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f )
    #define NULL_Vec9   Vector::Vector9<float>( 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f )
    #define NULL_Vec10  Vector::Vector10<float>( 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f )

    // Constructors
    template<typename T, std::size_t N> inline VectorN<T, N>::VectorN() {}
    template<typename T, std::size_t N> inline VectorN<T, N>::VectorN(const std::vector<T> &Value) { *this = Value; }
    template<typename T, std::size_t N> inline VectorN<T, N>::VectorN(const std::array<T, N> &Value) : Data(Value) {}

    // Assignment
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator=(const std::vector<T> &Value) { for (std::size_t i = 0; i < N && i < Value.size(); ++i) Data[i] = Value[i]; return *this; }
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator=(const std::array<T, N> &Value) { Data = Value; return *this; }

    // VectorN element-wise
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator+=(const VectorN<T, N> &RHS) { for (std::size_t i = 0; i < N; ++i) Data[i] += RHS.Data[i]; return *this; }
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator-=(const VectorN<T, N> &RHS) { for (std::size_t i = 0; i < N; ++i) Data[i] -= RHS.Data[i]; return *this; }
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator*=(const VectorN<T, N> &RHS) { for (std::size_t i = 0; i < N; ++i) Data[i] *= RHS.Data[i]; return *this; }
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator/=(const VectorN<T, N> &RHS) { for (std::size_t i = 0; i < N; ++i) Data[i] /= RHS.Data[i]; return *this; }
    
    // std::vector element-wise
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator+=(const std::vector<T> &RHS) { for (std::size_t i = 0; i < N && i < RHS.size(); ++i) Data[i] += RHS[i]; return *this; }
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator-=(const std::vector<T> &RHS) { for (std::size_t i = 0; i < N && i < RHS.size(); ++i) Data[i] -= RHS[i]; return *this; }
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator*=(const std::vector<T> &RHS) { for (std::size_t i = 0; i < N && i < RHS.size(); ++i) Data[i] *= RHS[i]; return *this; }
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator/=(const std::vector<T> &RHS) { for (std::size_t i = 0; i < N && i < RHS.size(); ++i) Data[i] /= RHS[i]; return *this; }
    
    // std::array element-wise
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator+=(const std::array<T, N> &RHS) { for (std::size_t i = 0; i < N; ++i) Data[i] += RHS[i]; return *this; }
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator-=(const std::array<T, N> &RHS) { for (std::size_t i = 0; i < N; ++i) Data[i] -= RHS[i]; return *this; }
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator*=(const std::array<T, N> &RHS) { for (std::size_t i = 0; i < N; ++i) Data[i] *= RHS[i]; return *this; }
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator/=(const std::array<T, N> &RHS) { for (std::size_t i = 0; i < N; ++i) Data[i] /= RHS[i]; return *this; }

    // Scalar ops
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator+=(T Scalar) { for (auto &v : Data) v += Scalar; return *this; }
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator-=(T Scalar) { for (auto &v : Data) v -= Scalar; return *this; }
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator*=(T Scalar) { for (auto &v : Data) v *= Scalar; return *this; }
    template<typename T, std::size_t N> inline VectorN<T, N>& VectorN<T, N>::operator/=(T Scalar) { for (auto &v : Data) v /= Scalar; return *this; }
}

#endif