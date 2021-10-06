/**
 * Print positive integer to standard output
 * @file positive_int.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date October 5, 2021
 */
#include <iostream>

using namespace std;

/**
 * Recursively print a positive integer one digit at a time to standard output
 * @param positive_int the positive integer to print
 * @return None
 */
void recursive_print_positive_integer(int positive_int) {
    if (positive_int == 0)
        return;

    int last_digit = positive_int % 10;
    recursive_print_positive_integer(positive_int / 10);
    cout << last_digit;
}

// Controls operation of program.
int main() {
    int positive_int = 0;
    std::cin >> positive_int;
    recursive_print_positive_integer(positive_int);
    return 0;
}
