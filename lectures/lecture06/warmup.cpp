/**
 * Warmup: Lecture 06
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators CS 102
 * @date September 14, 2021
 */
#include <iostream>

int main() {
    // write a snippet of code that fills an array with the first 100 non-negative
    // integers that are either divisible by 2 (even) or divisible by 3.
    // i.e., 0, 2, 3, 4, 6, 8, 9, 10, 12, ...
    unsigned short divisible[100] = {};
    unsigned short current_num = 0;
    int index = 0;
    // for (int index = 0, current_num = 0; index < 100; current_num++)
    while (index < 100) {
        if (current_num % 3 == 0 || current_num % 2 == 0) {
            divisible[index] = current_num;
            index++;
        }
        current_num++;
    }

    for (int index = 0; index < 100; index++) {
        std::cout << divisible[index] << " ";
    }
    std::cout << std::endl;
    return 0;
}
