/**
 * Read an arbitrarily long line of characters from the user.
 * @file getline.cpp
 * @author Darren Strash
 * @collaborators None
 * @date October 19, 2021
 */
#include <iostream>

using namespace std;

/**
 * Resize the given line by doubling its capacity and copying
 * over elements from the old line
 * @param the line for which we wish to double capacity. After
 *        calling this function line is also the new line.
 * @param capacity the capacity of the line. After calling this
 *        function capacity is also the new capacity.
 */
void resize(char * & line, size_t & capacity) {
    size_t new_capacity = capacity * 2;
    char * new_line = new char[new_capacity];
    for (size_t index = 0; index < capacity; index++) {
        new_line[index] = line[index];
    }
    capacity = new_capacity;
    delete[] line;
    line = new_line;
}

/**
 * Get a full line of text from the user
 * @param line the line of text after reading
 */
void get_line(char * & line) {
    size_t capacity = 1;
    line = new char[capacity];

    size_t size = 0;
    char current_char = cin.get();
    while (current_char != '\n') {
        if (size == capacity) {
            resize(line, capacity);
        }
        line[size++] = current_char;
        current_char = cin.get();
    }

    if (size == capacity)
        resize(line, capacity);

    line[size] = '\0';
}

// Controls operation of the program
int main() {
    char * line_from_user = nullptr;
    get_line(line_from_user);
    cout << "Here's the line I read: " << line_from_user << endl;
    delete[] line_from_user;
    return 0;
}
