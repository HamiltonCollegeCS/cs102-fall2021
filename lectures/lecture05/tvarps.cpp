/**
 *  Compute tax from user-entered tvarps
 *  @file tvarps.cpp
 *  @author Darren Strash
 *  @collaborators CS 102, Fall 2021
 *  @date September 9, 2021
 */
#include <iostream>

double compute_tax(double income) {
    double tax = 0.0;
    if (income > 35000.0) {
        tax += 0.20 * (income - 35000.0);
    }
    return tax;
}

// Controls operation of program.
int main() {
    double income = 0.0;
    std::cout << "Enter income: ";
    std::cin >> income;
    while (income >= 0.0 && !std::cin.fail()) {
        std::cout << "The tax is: " << compute_tax(income) << std::endl;
        std::cout << "Enter income: ";
        std::cin >> income;
    }
    return 0;
}
