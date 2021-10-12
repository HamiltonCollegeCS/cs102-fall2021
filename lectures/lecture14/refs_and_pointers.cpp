/**
 * References and pointers
 * @file refs_and_pointers.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date October 12, 2021
 */
#include <iostream>

using namespace std;

// Bad or good? You decide.
// BAD
int & my_func() {
    int x = 1;
    int & y = x;
    return y;
}

void my_good_func(int & y) {
    y = 1;
}

// Controls operation of program.
int main() {

    /*
    // References
    int the_answer = 42;
    int & my_int = the_answer;
    my_int++;
    cout << "my_int=" << my_int << endl;
     // & is a type modifier, "reference to an integer"
    cout << "answer=" << the_answer << endl;
    //the_answer++;
    //cout << "new answer=" << the_answer << endl;
    //cout << "my_int=" << my_int << endl;
    //my_int++;
    //cout << "new new answer=" << the_answer << endl;
    //cout << "new my_int=" << my_int << endl;

    int hand[3] = {1, 2, 3};
    // change hand[0] to a new value.
    int & first_card = hand[0];
    first_card = 20;
    cout << "hand[0]=" << hand[0] << endl;

    // references and functions
    // DANGER: you almost never want to return a reference from a function
    //int & my_ref = my_func();
    //cout << "my_ref=" << my_ref << endl;
    int special_int = 42;
    // passing a parameter by reference.
    my_good_func(special_int);
    cout << "special=" << special_int << endl;

    // const references
    */

    /*
    // pointers
    // a pointer *is* an address
    int my_favorite = 42;
    int * pointer_to_my_favorite = &my_favorite;
    cout << "my_favorite=" << my_favorite << ", address=" << pointer_to_my_favorite << endl;
    cout << "dereferenced pointer=" << *pointer_to_my_favorite << endl;
    *pointer_to_my_favorite = 1;
    cout << "my_favorite=" << my_favorite << endl;

    // if you don't know what value to assign a pointer to, use nullptr
    pointer_to_my_favorite = nullptr;
    // segmentation fault
    //*pointer_to_my_favorite = 1;
    // segmentation fault
    //cout << "dereferenced pointer=" << *pointer_to_my_favorite << endl;
*/

    // dynamic memory allocation, new / delete

    int size = 0;
    cout << "Gimme the size! ";
    cin >> size;
    //int array[size]; // don't do this, it allocates memory on the stack.
    // want to initialize memory on the heap.
    int * array = new int[size];
    delete[] array;
    // if no delete -> memory leak
    // Recommendation: when programming, every time you call new, make a call
    // to delte. Then do what you need to between new and delete.

    // dynamic memory allocation, new[] / delete[]

    // pointers and functions -> allocating memory in a function.

    // reading in arbitrarily long line -> our own getline
    return 0;
}
