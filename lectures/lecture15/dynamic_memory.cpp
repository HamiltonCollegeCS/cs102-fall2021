/**
 * Dynamic memory and memory errors
 * @file dynamic_memory.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date October 19, 2021
 */
#include <iostream>

using namespace std;

// Controls operation of program.
int main() {

    // dynamic memory allocation, new / delete
    // Use []'s if you allocate / deallocate arrays, don't use brackets for single elements.
    //int * single_int = new int;
    //delete single_int;

    // memory errors

    // memory leak
    int * array = new int[100];
    for (size_t count = 0; count < 10; count++) {
        cout << "address=" << array << endl;
        //delete[] array; // this fixes the memory leak
        array = new int[100];
        cout << "new address=" << array << endl;
    }
    //delete[] array; // fixes the memory leak

    // conditional jump depends on uninitialized value
    /*
    int not_zero;
    if (not_zero == 0) {
        cout << "it was zero!" << endl;
    }

    int * my_array = new int[10000];
    cout << my_array[100] << endl;
    delete[] my_array;
     */
    // double delete
    // mismatched new/delete
    //int * multi_ints = new int[20];
    //delete multi_ints;
    // invalid read
    // invalid write
    // segmentation fault

    // pointers and functions -> allocating memory in a function.

    // reading in arbitrarily long line -> our own getline
    /*
    char current_char = cin.get();
    size_t capacity = 1;
    size_t size = 0;
    char * my_string = new char[capacity];
    while (current_char != '\n') {
        if (size < capacity) {
            my_string[size++] = current_char;
        }
        else {
            char * new_array = new char[capacity + 1];
            //for () { // copy over}
            delete[] my_string;
            my_string = new_array;
            capacity++;
        }
        current_char = cin.get();
    }

    delete[] my_string;
    */
    // tracking size -> struct
    return 0;
}
