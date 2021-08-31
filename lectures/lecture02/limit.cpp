/**
 * Find the largest int and/or long type
 * @file limit.cpp
 * @author Darren Strash
 * @date August 31, 2021
 * @collaborators CS 102
 */
#include <iostream>

// Controls operation of the program.
int main() {

    // for unsigned (integers with value 0 and above)
    unsigned int i = 0;
    while (i < i + 1) {
        i++;
    }
    std::cout << "largest unsigned int: " << i << std::endl;
    return 0;
}
