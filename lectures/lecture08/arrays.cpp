/**
 * Examples using C-style strings / arrays
 * @file arrays.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date September 21, 2021
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
    char copy[ARRAY_SIZE];
    strcpy(copy, hello);
    std::cout << "copy=" << copy << std::endl;

    // I/O on strings
    char read_in[ARRAY_SIZE]; // supports ARRAY_SIZE - 1 characters, need room for '\0'
    /*
    std::cin >> read_in; // only reads up to first whitespace character
    std::cout << read_in << std::endl;

    std::cout << "More input, please: ";

    std::cin >> read_in; // only reads up to first whitespace character
    std::cout << read_in << std::endl;
    */
    /*
    std::cin >> read_in;
    std::cout << read_in << std::endl;

    std::cin.get();
    //getline
    std::cout << "Give me a line: ";
    std::cin.getline(read_in, ARRAY_SIZE); // reads up to ARRAY_SIZE - 1 characters, and then puts '\0' for you
    std::cout << read_in << std::endl;
    */
    char password[] = "mypassword";
    // read password?
    char read_password[ARRAY_SIZE];
    std::cin.getline(read_password, ARRAY_SIZE);
    //strcmp is from cstring header
    if (strcmp(password, read_password) == 0) { // -1 if <, 0 if ==, 1 if >
        std::cout << "You're in!" << std::endl;
    }

    // multi-dimensional arrays

    // declaring

    // using

    // layout in memory

    // functions

    return 0;
}








// down here
