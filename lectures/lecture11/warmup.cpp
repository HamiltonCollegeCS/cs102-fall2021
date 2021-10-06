/**
 *  Warmup: Lecture 11
 *  @file warmup.cpp
 *  @author Darren Strash
 *  @collaborators CS 102, Fall 2021
 *  @date September 30, 2021
 */
#include <iostream>

using namespace std;

void foo(int a) {
    a = 42;
}

void second(int b) {
    int c = 81;
    // Draw the state of the stack when reaching this line of code.
}

void bar(int b) {
    int a = 100;
    foo(b);
    second(a);
}


int main() {
    bar(10);
    return 0;
}
