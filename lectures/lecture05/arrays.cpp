/**
 * Examples using arrays
 * @file arrays.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date September 9, 2021
 */
#include <iostream>

int main() {
    // make an array of int types, of size 3
    // and fill it with the given values.
    int my_array[1000000];
    //for (unsigned int index = 0; index < 1000000; index++) {
    //    std::cout << my_array[index] << std::endl;
    //}

    // Declaring with and without size

    // sizeof -> number of bytes
    std::cout << "sizeof(my_array)=" << sizeof(my_array) << std::endl;
    std::cout << "length=" << sizeof(my_array) / sizeof(int) << std::endl;

    // indexing -> valid indices are 0 -> length - 1.

    // out of bounds
    std::cout << my_array[1000000] << std::endl;

    // addressing and memory

    // returning arrays (why it's a bad idea)

    // C-style strings

    return 0;
}
