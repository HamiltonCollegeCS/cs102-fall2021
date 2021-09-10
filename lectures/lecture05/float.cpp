/**
 * Explore floating-point types, their use, and the range of values they support.
 * @file float.cpp
 * @author Darren Strash
 * @collaborators CS102, Fall 2021
 * @date September 9, 2021
 */
#include <iostream>
#include <iomanip>
#include <cfloat>
#include <cmath>

// Controls operation of the program.
int main() {
    float large = 1e38f;
    //for (unsigned int count = 0; count < 640000; count++) {
    //    large -= 1e38f;
    //    std::cout << "large=" << large << std::endl;
    //}
    std::cout << "sqrt(-1.0)=" << sqrt(-1.0) << std::endl;
    return 0;
}
