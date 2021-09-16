/**
 * Examples using C-style strings / arrays
 * @file arrays.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date September 16, 2021
 */
#include <iostream>
#include <cstring>

#define ARRAY_SIZE 100

// Controls operation of program
int main() {

    // C-style strings
    char hello[] = "hello";
    std::cout << "length=" << strlen(hello) << std::endl;

    // cstring functions
    char copy[100];
    strcpy(copy, hello);
    std::cout << "copy=" << copy << std::endl;

    // I/O on strings
    char read_in[100]; // supports 99 characters, need space for '\0'
    std::cin >> read_in; // only reads up to first whitespace character
    std::cout << read_in << std::endl;

    // multi-dimensional arrays

    // declaring

    // using

    // layout in memory

    // functions

    return 0;
}








// down here
