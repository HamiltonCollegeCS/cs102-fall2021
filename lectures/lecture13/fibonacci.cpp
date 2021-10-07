/**
 * Iterative vs. recursive Fibonacci number computation
 * @file fibonacci.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date October 7, 2021
 */
#include <iostream>

/**
 * Recursively compute the Fibonacci number
 * NOTE: This is SLOW.
 * @param input the input integer from which to compute
 * @return the Fibonacci number for the input integer
 */
int fib(int input) {
    // base case
    if (input == 1 || input == 0)
        return input;

    // recursive case
    return fib(input - 1) + fib(input - 2);
}

/**
 * Iteratively compute the Fibonacci number
 * NOTE: This is FAST.
 * @param input the input integer from which to compute
 * @return the Fibonacci number for the input integer
 */
int nice_fib(int input) {
    if (input == 1 || input == 0)
        return input;
    int first = 0;
    int second = 1;
    for (int current = 2; current <= input; current++) {
        int next = first + second;
        first = second;
        second = next;
    }
    return second;
}

// Controls operation of program.
int main() {
    int input_to_fibonacci = 0;
    std::cin >> input_to_fibonacci;
    std::cout << input_to_fibonacci << "th Fibonacci number (fast): " 
              << nice_fib(input_to_fibonacci) << std::endl;

    std::cout << input_to_fibonacci << "th Fibonacci number (slow): " 
              << fib(input_to_fibonacci) << std::endl;
    return 0;
}
