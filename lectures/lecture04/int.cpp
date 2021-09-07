/**
 * Explore integer types, their use, and the range of values they support.
 * @file int.cpp
 * @author Darren Strash
 * @date September 7, 2021
 * @collaborators CS102, Fall 2021
 */
#include <iostream>
#include <climits>

// Controls operation of the program.
int main() {
    // integer types and their ranges
    std::cout << "int   range: " << INT_MIN << "->" << INT_MAX << std::endl;
    std::cout << "short range: " << SHRT_MIN << "->" << SHRT_MAX << std::endl;
    std::cout << "long  range: " << LONG_MIN << "->" << LONG_MAX << std::endl;
    std::cout << "llong range: " << LLONG_MIN << "->" << LLONG_MAX << std::endl;

    std::cout << "uint   range: " << 0 << "->" << UINT_MAX << std::endl;

    // sizeof
    std::cout << "sizeof(int)=" << sizeof(int) << std::endl;

    int my_int = 65;
    std::cout << "sizeof(my_int)=" << sizeof(my_int) << std::endl;


    // overflow and underflow

    unsigned int big_int = UINT_MAX;
    big_int = big_int + 1; // overflow
    std::cout << "big_int=" << big_int << std::endl;

    unsigned int small_int = 0;
    small_int = small_int - 1; // underflow
    std::cout << "small_int=" << small_int << std::endl;

    // narrowing
    int narrow = 4000000000;
    std::cout << "narrow=" << narrow << std::endl;

    // type conversion and operators on integer types

    long really_big = INT_MAX + 1;
    //Try these variations
    //long really_big = long(INT_MAX) + 1;
    //long really_big = INT_MAX + 1L;
    //int really_big = INT_MAX + 1;
    std::cout << "really_big=" << (int) really_big << std::endl;

    float what_am_i = 10 / 3.0f;
    std::cout << "what_am_i=" << what_am_i << std::endl;

    return 0;
}
