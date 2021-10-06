/**
 * Recursivley search for a given element
 * @file binary_search.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date October 5, 2021
 */
#include <iostream>

using namespace std;

#define ARRAY_SIZE 5

/**
 * Recursive search through an array that is in non-decreasing order
 * @param array the array to search through
 * @param value_to_find the value to search for
 * @param start the first index to consider in the search
 * @param end the last index to consider in the search
 * return index of the element to find (if it exists), -1 otherwise
 */
int binary_search(int array[], int value_to_find, int start, int end) {
    //if (end == start && array[start] != value_to_find)
    if (end < start)
        return -1;
    int midpoint = (start + end) / 2;
    if (array[midpoint] == value_to_find)
        return midpoint;
    else if (value_to_find > array[midpoint]) {
        return binary_search(array, value_to_find, midpoint + 1, end);
    } else {
        return binary_search(array, value_to_find, start, midpoint - 1);
    }
}

// Controls operation of program.
int main() {
    int array[ARRAY_SIZE] = {-8, 5, 10, 99, 1000};
    int value_to_find = 7;
    cout << "value " << value_to_find << " is in index: " << binary_search(array, value_to_find, 0, ARRAY_SIZE - 1) << endl;
}

