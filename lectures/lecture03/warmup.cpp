/**
 * Accept integers from standard input until the user enters -1. Print the sum
 * of these integers (excluding -1).
 * @file warmup.cpp
 * @author Darren Strash
 * @date September 2, 2021
 * @collaborators CS 102
 */
#include <iostream>

// avoid magic numbers
#define DONE_INT -1

/***********************************************************************
 The function header:
 return_type function_name(comma separated list of parameters)

 return_type   -> type of the data we will return, void if nothing
 function_name -> name of the function (used when calling the function)
 parameters    -> input to the function
************************************************************************/

/**
 * Read integers until encountering DONE_INT, then print the sum of the 
 * ints (excluding DONE_INT).
 */
void read_and_print_sum() {
    int sum = 0;
    int entered_int = 0;
    while (entered_int != DONE_INT) {
        sum = sum + entered_int;
        std::cout << "Enter an int (" << DONE_INT << " to end): ";
        std::cin >> entered_int;
    }
    std::cout << "The sum of the ints is: " << sum << std::endl;
}

// Controls operation of the program.
int main() {
    read_and_print_sum();
    return 0;
}
