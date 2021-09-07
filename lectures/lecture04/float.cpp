/**
 * Explore floating-point types, their use, and the range of values they support.
 * @file float.cpp
 * @author Darren Strash
 * @date September 7, 2021
 * @collaborators CS102, Fall 2021
 */
#include <iostream>
#include <iomanip>
#include <cfloat>

// Controls operation of the program.
int main() {
    std::cout << "float values have " << FLT_DIG << " significant digits" << std::endl;
    std::cout << "    with pos. values in [" << FLT_MIN << ", " << FLT_MAX << "]" << std::endl;
    std::cout << "double values have " << DBL_DIG << " significant digits" << std::endl;
    std::cout << "    with pos. values in [" << DBL_MIN << ", " << DBL_MAX << "]" << std::endl;
    std::cout << "long double values have " << LDBL_DIG << " significant digits" << std::endl;
    std::cout << "    with pos. values in [" << LDBL_MIN << ", " << LDBL_MAX << "]" << std::endl;

    std::cout << "sizeof(float)="       << sizeof(float) << std::endl;
    std::cout << "sizeof(double)="      << sizeof(double) << std::endl;
    std::cout << "sizeof(long double)=" << sizeof(long double) << std::endl;

    // try with double!
    float mine = 1234569.9;
    // double mine = 1234569.9

    // set precision for output to up to 15 significant digits
    std::cout <<  std::setprecision(15) << "mine=" << mine << std::endl;
    std::cout << "mine=" << mine << std::endl;

    // feel free to play around with pi
    float pi = 3.14159265359f;

    return 0;
}
