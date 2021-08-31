/**
 * Have a user enter 5 integers, then print the largest one.
 * @file max.cpp
 * @author Darren Strash
 * @date August 31, 2021
 * @collaborators CS 102
 */
#include <iostream>

// Controls operation of the program.
int main() {
    int my_max = 0;
    std::cout << "Enter an int: ";
    std::cin >> my_max;
    for (int i = 0; i < 4; i++) {
        std::cout << "Enter an int: ";
        int from_user = 0;
        std::cin >> from_user;
        if (from_user > my_max) {
            my_max = from_user;
        }
    }
    std::cout << "The maximum int is: " << my_max << std::endl;
    return 0;
}
