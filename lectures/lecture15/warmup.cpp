/**
 * A program that inputs an arbitrary number of integers
 * from the user.
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date October 19, 2021
 */
#include <iostream>
#include <cstring>

using namespace std;

// Finish the program so that the program reads `size'
// ints from the user and puts them in an array. Your program
// should be free from memory errors.
int main() {
    size_t size = 0;
    cout << "Gimme a size! ";
    cin >> size;
    int * times = new int[size];
    for (size_t index = 0; index < size; index++)
        cin >> times[index];
    delete[] times;
    return 0;
}
