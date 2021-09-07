/**
 * Warmup: what is the result of this code?
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators Dave Perkins
 * @date September 7, 2021
 */
#include <iostream>

int main() {
    for (int value = 0; value < 3; value++) {
        int total = 0;
        total += value * value;
    }
    // compiler error, total out of scope!
    std::cout << total << std::endl;
    return 0;
}
