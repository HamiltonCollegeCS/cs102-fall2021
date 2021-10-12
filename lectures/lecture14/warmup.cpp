/**
 * Why not?
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date October 12, 2021
 */
#include <iostream>
#include <cstring>

#define SIZE 100

using namespace std;

// Why shouldn't we allow this?
int main() {
    int size = 3;
    cout << "Gimme a size! ";
    cin >> size;
    cout << size << endl;
    int my_array[size];
    return 0;
}
