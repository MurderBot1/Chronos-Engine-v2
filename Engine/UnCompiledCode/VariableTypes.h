// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef VariableTypes_H
#define VariableTypes_H

// C++ imported files
#include <stdint.h>
#include <quadmath.h>

// Program imported files


// Function definitions
namespace Vector {
    struct Vector2_i;
    struct Vector2_f;
    struct Vector2_d;

    struct Vector2_i {
        int X, Y;

        Vector2_i();

        Vector2_i(int X, int Y);

        // Start up variable with another variable pointer
        Vector2_i(Vector2_i* Data);
        Vector2_i(Vector2_f* Data);
        Vector2_i(Vector2_d* Data);
        // Start up variable with another variable
        Vector2_i(Vector2_f Data);
        Vector2_i(Vector2_d Data);
        
        // Addition
        Vector2_i operator+(Vector2_i Other);
        Vector2_i operator+(Vector2_f Other);
        Vector2_i operator+(Vector2_d Other);
        Vector2_i operator+(int Other);

        // Subtraction
        Vector2_i operator-(Vector2_i Other);
        Vector2_i operator-(Vector2_f Other);
        Vector2_i operator-(Vector2_d Other);
        Vector2_i operator-(int Other);

        // Multiplication
        Vector2_i operator*(Vector2_i Other);
        Vector2_i operator*(Vector2_f Other);
        Vector2_i operator*(Vector2_d Other);
        Vector2_i operator*(int Other);

        // Division
        Vector2_i operator/(Vector2_i Other);
        Vector2_i operator/(Vector2_f Other);
        Vector2_i operator/(Vector2_d Other);
        Vector2_i operator/(int Other);

        // Modulo operation
        Vector2_i operator%(Vector2_i Other);
        Vector2_i operator%(Vector2_f Other);
        Vector2_i operator%(Vector2_d Other);
        Vector2_i operator%(int Other);

        // Greater than
        bool operator>(Vector2_i Other);
        bool operator>(Vector2_f Other);
        bool operator>(Vector2_d Other);

        // Less than
        bool operator<(Vector2_i Other);
        bool operator<(Vector2_f Other);
        bool operator<(Vector2_d Other);

        // Greater than or equal to
        bool operator>=(Vector2_i Other);
        bool operator>=(Vector2_f Other);
        bool operator>=(Vector2_d Other);

        // Less than or equal to
        bool operator<=(Vector2_i Other);
        bool operator<=(Vector2_f Other);
        bool operator<=(Vector2_d Other);

        // Equal to
        bool operator==(Vector2_i Other);
        bool operator==(Vector2_f Other);
        bool operator==(Vector2_d Other);

        // Not equal to
        bool operator!=(Vector2_i Other);
        bool operator!=(Vector2_f Other);
        bool operator!=(Vector2_d Other);

        // Return memory address
        Vector2_f* operator&(Vector2_f Other);
    };

    struct Vector2_f {
        float X, Y;

        Vector2_f();

        Vector2_f(float X, float Y);

        // Start up variable with another variable pointer
        Vector2_f(Vector2_i* Data);
        Vector2_f(Vector2_f* Data);
        Vector2_f(Vector2_d* Data);
        // Start up variable with another variable
        Vector2_f(Vector2_i Data);
        Vector2_f(Vector2_d Data);
        
        // Addition
        Vector2_f operator+(Vector2_i Other);
        Vector2_f operator+(Vector2_f Other);
        Vector2_f operator+(Vector2_d Other);
        Vector2_f operator+(float Other);

        // Subtraction
        Vector2_f operator-(Vector2_i Other);
        Vector2_f operator-(Vector2_f Other);
        Vector2_f operator-(Vector2_d Other);
        Vector2_f operator-(float Other);

        // Multiplication
        Vector2_f operator*(Vector2_i Other);
        Vector2_f operator*(Vector2_f Other);
        Vector2_f operator*(Vector2_d Other);
        Vector2_f operator*(float Other);

        // Division
        Vector2_f operator/(Vector2_i Other);
        Vector2_f operator/(Vector2_f Other);
        Vector2_f operator/(Vector2_d Other);
        Vector2_f operator/(float Other);

        // Modulo operation
        Vector2_f operator%(Vector2_i Other);
        Vector2_f operator%(Vector2_f Other);
        Vector2_f operator%(Vector2_d Other);
        Vector2_f operator%(float Other);

        // Greater than
        bool operator>(Vector2_i Other);
        bool operator>(Vector2_f Other);
        bool operator>(Vector2_d Other);

        // Less than
        bool operator<(Vector2_i Other);
        bool operator<(Vector2_f Other);
        bool operator<(Vector2_d Other);

        // Greater than or equal to
        bool operator>=(Vector2_i Other);
        bool operator>=(Vector2_f Other);
        bool operator>=(Vector2_d Other);

        // Less than or equal to
        bool operator<=(Vector2_i Other);
        bool operator<=(Vector2_f Other);
        bool operator<=(Vector2_d Other);

        // Equal to
        bool operator==(Vector2_i Other);
        bool operator==(Vector2_f Other);
        bool operator==(Vector2_d Other);

        // Not equal to
        bool operator!=(Vector2_i Other);
        bool operator!=(Vector2_f Other);
        bool operator!=(Vector2_d Other);

        // Return memory address
        Vector2_f* operator&(Vector2_f Other);
    };
    
    struct Vector2_d {
        double X, Y;

        Vector2_d();

        Vector2_d(double X, double Y);

        // Start up variable with another variable pointer
        Vector2_d(Vector2_i* Data);
        Vector2_d(Vector2_f* Data);
        Vector2_d(Vector2_d* Data);
        // Start up variable with another variable
        Vector2_d(Vector2_i Data);
        Vector2_d(Vector2_f Data);
        
        // Addition
        Vector2_d operator+(Vector2_i Other);
        Vector2_d operator+(Vector2_f Other);
        Vector2_d operator+(Vector2_d Other);
        Vector2_d operator+(double Other);

        // Subtraction
        Vector2_d operator-(Vector2_i Other);
        Vector2_d operator-(Vector2_f Other);
        Vector2_d operator-(Vector2_d Other);
        Vector2_d operator-(double Other);

        // Multiplication
        Vector2_d operator*(Vector2_i Other);
        Vector2_d operator*(Vector2_f Other);
        Vector2_d operator*(Vector2_d Other);
        Vector2_d operator*(double Other);

        // Division
        Vector2_d operator/(Vector2_i Other);
        Vector2_d operator/(Vector2_f Other);
        Vector2_d operator/(Vector2_d Other);
        Vector2_d operator/(double Other);

        // Modulo operation
        Vector2_d operator%(Vector2_i Other);
        Vector2_d operator%(Vector2_f Other);
        Vector2_d operator%(Vector2_d Other);
        Vector2_d operator%(double Other);

        // Greater than
        bool operator>(Vector2_i Other);
        bool operator>(Vector2_f Other);
        bool operator>(Vector2_d Other);

        // Less than
        bool operator<(Vector2_i Other);
        bool operator<(Vector2_f Other);
        bool operator<(Vector2_d Other);

        // Greater than or equal to
        bool operator>=(Vector2_i Other);
        bool operator>=(Vector2_f Other);
        bool operator>=(Vector2_d Other);

        // Less than or equal to
        bool operator<=(Vector2_i Other);
        bool operator<=(Vector2_f Other);
        bool operator<=(Vector2_d Other);

        // Equal to
        bool operator==(Vector2_i Other);
        bool operator==(Vector2_f Other);
        bool operator==(Vector2_d Other);

        // Not equal to
        bool operator!=(Vector2_i Other);
        bool operator!=(Vector2_f Other);
        bool operator!=(Vector2_d Other);

        // Return memory address
        Vector2_d* operator&(Vector2_d Other);
    };
    
    struct Vector3_i {
        int X, Y, Z;
    };

    struct Vector3_f {
        float X, Y, Z;
    };
    
    struct Vector3_d {
        double X, Y, Z;
    };
    
    struct Vector4_i {
        int X, Y, Z, W;
    };

    struct Vector4_f {
        float X, Y, Z, W;
    };
    
    struct Vector4_d {
        double X, Y, Z, W;
    };
};

#endif