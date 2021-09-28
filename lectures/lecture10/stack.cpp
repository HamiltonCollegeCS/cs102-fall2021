/**
 * Functions and the stack.
 * @file stack.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date September 28, 2021
 */
#include <iostream>

const int MY_FAVORITE_INT = 42;

using namespace std;

int there(int a, int b) {
    cout << "there: a=" << a << endl;
    cout << "there: b=" << b << endl;
    a = 123;

    int result = 5;
    cout << "there: result=" << result << endl;
    if (a < b) {
        return 10;
    } else {
        return 1;
    }
    cout << "there: result2=" << result << endl;
}

 void hi(int a, int b) {
    cout << "hi: a(before)=" << a << endl;
    cout << "hi: b(before)=" << b << endl;
    int result = there(b, a);
    cout << "hi: a(after)=" << a << endl;
    cout << "hi: b(after)=" << b << endl;
    std::cout << "hi: result=" << result << std::endl;

    // Try these instead!

    // Stack overflow: fills the stack with function calls
    //hi(0,1);

    // Stack overflow: fills the stack with ints
    //int array[1000000] = {};
    //cout << array << endl;
 }

 // Controls operation of program
 int main() {

    // First, an example
    // With a partner: what is the output of the following:
    hi(5, 7);

    // Stack overflow, fills the stack with ints.
    //int array[10000000] = {};

    // call by value (on board)

    // the stack (on board)

    return 0;
 }
