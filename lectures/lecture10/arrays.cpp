/**
 * Examples using multi-dimensional arrays
 * @file arrays.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date September 28, 2021
 */
#include <iostream>
#include <cstring>

#define NUM_COLS 3
#define NUM_ROWS 3

using namespace std;

/**
 * Add all ints in a 2d array and return the result
 * @param int_array the 2d array of ints
 * @return the sum of the ints in int_array
 */
long sum(int int_array[][NUM_COLS]) {
    long int_sum = 0;
    for (unsigned int row = 0; row < NUM_ROWS; row++) {
        for (unsigned int col = 0; col < NUM_COLS; col++)
            int_sum += int_array[row][col];
    }
    return int_sum;
}

/**
 * Change a 2d array to contain 42.
 * @param int_array the 2d array of ints
 */
void change(int int_array[][NUM_COLS]) {
    int_array[1][1] = 42;
}

// Controls operation of program
int main() {
    int my_ints[NUM_ROWS][NUM_COLS] = {{1, 2, 3},
                                       {4, 5, 6},
                                       {7, 8, 9}};
    // functions
    //cout << sum(my_ints) << endl;
    change(my_ints);
    cout << my_ints[1][1] << endl;

    return 0;
}








// down here
