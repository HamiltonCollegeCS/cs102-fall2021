/**
 * Find the memory errors
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators None
 * @date October 26, 2021
 */
#include <iostream>

using namespace std;

// What memory errors are here?
int main() {
    int * my_int = new int; // no memory error
    int * another = (int *) 20; // no
    my_int[1] = 10; // invalid write
    if (my_int[0] > 0) // jump/conditional based on uninitialized value
        cout << "greater than 0!" << endl; // no
    my_int = another; // producing a memory leak
    cout << "my_int=" << *my_int << endl; // invalid read / segmentation fault
    delete[] my_int; // invalid delete
    return 0;
}
