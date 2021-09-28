/**
 *  Warmup: Lecture 10
 *  @file warmup.cpp
 *  @author Darren Strash
 *  @collaborators CS 102, Fall 2021
 *  @date September 28, 2021
 */
#include <iostream>

using namespace std;

// What is the result of the following code?
int main() {
    int my_ints[][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    cout << my_ints[1][4] << endl;

    return 0;
}
