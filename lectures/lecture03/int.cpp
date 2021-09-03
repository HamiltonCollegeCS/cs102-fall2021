/**
 * Explore integer types, their use, and the range of values they support.
 * @file int.cpp
 * @author Darren Strash
 * @date Septemnber 2, 2021
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

    // sizeof

    // overflow and underflow

    // narrowing

    // automatic conversion and operators on integer types

    return 0;
}
