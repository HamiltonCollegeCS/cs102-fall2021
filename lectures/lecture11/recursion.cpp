/**
 * Recursion
 * @file recursion.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date September 30, 2021
 */
#include <iostream>
#include <cstring>

using namespace std;

/**
 * Add all ints in a 1d array and return the result
 * @param int_array the 1d array of ints
 * @param length the length of the array
 * @return the sum of the ints in int_array
 */
long sum(int int_array[], unsigned int length) {
    long the_sum = 0;
    for (unsigned int index = 0; index < length; index++) {
        the_sum += int_array[index];
    }
    return the_sum;
}

long recursive_sum(int int_array[], unsigned int length) {
    if (length == 0)
        return 0;
    return int_array[length - 1] + recursive_sum(int_array, length - 1);
}

// Controls operation of program
int main() {
    int my_ints[] = {1, 8, 9, 4, 5, 10, 1000};
    unsigned int array_length = sizeof(my_ints) / sizeof(my_ints[0]);
    cout << recursive_sum(my_ints, array_length) << endl;
    return 0;
}








// down here
