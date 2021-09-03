/**
 * Exploring returning vs. printing in a max function
 * @file max.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date September 2, 2021
 */
#include <iostream>

/**
 * A function that returns the largest of two integers
 * @param the first integer
 * @param the second integer
 * @return the largest of the two integers
 */
int max(int first_int, int second_int) {
    if (first_int >= second_int) {
        return first_int;
    }
    return second_int;
}

/**
 * A function to print the largest of two integers
 * @param the first integer
 * @param the second integer
 */
void print_max(int first_int, int second_int) {
    if (first_int >= second_int) {
        std::cout << first_int;
    } else {
        std::cout << second_int;
    }
}

// Controls operation of the program
int main() {
    int my_max = max(4,5);
    std::cout << "max=" << my_max << std::endl;
    std::cout << "print_max=";
    print_max(5,4);
    std::cout << std::endl;
    return 0;
}
