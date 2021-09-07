/**
 * Examples using arrays
 * @file array.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date September 7, 2021
 */
#include <iostream>

int main() {
    // make an array of int types, of size 3 
    // and fill it with the given values.
    int my_array[3] = {1, 2, 3};
    std::cout << "my_array[2]=" << my_array[2] << std::endl;

    // print out its values
    std::cout << "my_array=";
    for (unsigned int index = 0; index < 3; index++) {
        std::cout << my_array[index] << " "; 
    }
    // Note: there is an extra space after the printed values
    // We'll discuss how to get rid of this.
    std::cout << std::endl;
    return 0;
}
