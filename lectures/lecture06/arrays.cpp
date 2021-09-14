/**
 * Examples using arrays
 * @file arrays.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date September 14, 2021
 */
#include <iostream>

#define ARRAY_SIZE 100

void fill_in_divisible(unsigned short divisible[], unsigned int size) {
    unsigned short current_num = 0;
    int index = 0;
    // for (int index = 0, current_num = 0; index < 100; current_num++)
    while (index < size) {
        if (current_num % 3 == 0 || current_num % 2 == 0) {
            divisible[index] = current_num;
            index++;
        }
        current_num++;
    }
}

void my_func(int array[]) {
    std::cout << sizeof(array) << std::endl;
}

unsigned long string_length(char my_string[]) {
    unsigned long length = 0;
    while (my_string[length] != '\0')
        length++;
    return length;
}

int main() {

    // functions and arrays
    unsigned short divisible[ARRAY_SIZE] = {};
    //fill_in_divisible(divisible, ARRAY_SIZE);

    //for (int index = 0; index < ARRAY_SIZE; index++) {
    //    std::cout << divisible[index] << " ";
    //}
    //std::cout << std::endl;

    // arrays are addresses!
    //std::cout << divisible << std::endl;

    // C-style strings
    //std::cout << "Hello!" << std::endl; // print out a string of characters
    // C-style strings = array of characters

    /*
    char my_char = 'u';
    char char2 = 'm';
    std::cout << "my_string=" << my_char << char2 << std::endl;
    */
    //char my_string[] = {'u', 'm', '\0'}; // \0 is a single escaped character w/ value 0
    char my_string[] = "um"; // \0 is implicit. (if you want \0, use \\0)
    std::cout << my_string << std::endl;
    std::cout << "strlen=" << string_length(my_string) << std::endl;

    //int array[] = {1, 2, 3, 5, 6, 7};
    //std::cout << sizeof(array) << std::endl;
    //my_func(array);
    //for (int index = 0; index < sizeof(array); index++)

    std::cout << '\a' << std::endl; // bell
    std::cout << '\t' << std::endl; // tab
    std::cout << '\n' << std::endl; // end of line
    std::cout << '\0' << std::endl; // end of string (null)
    std::cout << '\b' << std::endl; // backspace
    std::cout << '\\' << std::endl; // backslash

    return 0;
}








// down here
