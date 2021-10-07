/**
 * Recursively compute if a string is a palindrome
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators CS 102, Fall 2021
 * @date October 7, 2021
 */
#include <iostream>
#include <cstring>

using namespace std;

#define MAX_STRING_LENGTH 100

/**
 * Recursively compute whether a given string is the same forwards
 * as it is backwards (a palindrome)
 * @param string the string to check
 * @param start the first index to start checking
 * @param end the last index to check
 * @return true if string is a palindrome, false otherwise.
 */
bool recursive_palindrome(char string[], int start, int end) {
    // base case
    if (start >= end)
        return true;

    // recursive case
    // NOTE: Using start++ or ++start is dangerous instead of start
    return recursive_palindrome(string, start + 1, end - 1) &&
                string[start] == string[end];
}

// Controls operation of program.
int main() {
    char supposed_palindrome[MAX_STRING_LENGTH] = "axxxxxa";
    cout << "Is " << supposed_palindrome << " a palindrome? "
         << recursive_palindrome(supposed_palindrome,
                                 0,
                                 strlen(supposed_palindrome) - 1)
         << endl;
    return 0;
}
