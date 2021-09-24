/**
 * Examples using multi-dimensional arrays
 * @file arrays.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date September 23, 2021
 */
#include <iostream>
#include <cstring>

// Controls operation of program
int main() {

    // multi-dimensional arrays
    // 2 is the number of rows, 3 is the number of columns
    //int two_dee[2][3] = {{1, 2, 3},
    //                     {4, 5, 6}};

    //std::cout << two_dee[0][1] << std::endl; // print 2
    //std::cout << two_dee[1][2] << std::endl; // print 6

    // declaring
    // can omit the first dimension, since compiler can figure it out
    // cannot omit the second -> need this to figure out where
    // elements lie in memory
    int two_dee[][3] = {{1, 2, 3},
                        {4, 5, 6}};

    //std::cout << two_dee[0][1] << std::endl; // print 2
    std::cout << two_dee[1][2] << std::endl; // print 6

    // using
    //std::cout << "sizeof=" << sizeof(two_dee) / sizeof(two_dee[0]) << std::endl;

    // layout in memory

    // elements at two_dee[1][2] is stored in memory at address:
    // two_dee + 1 * sizeof(two_dee[0]) + 2 * sizeof(two_dee[0][0]);
    //std::cout << two_dee[1][2] << std::endl; // print 6

    // functions

    return 0;
}








// down here
