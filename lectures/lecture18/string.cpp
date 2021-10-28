/**
 * A first attempt at a string class
 * @file string.cpp
 * @author Darren Strash
 * @collaborators CS 102 Fall 2021
 * @date October 28, 2021
 */
#include <iostream>

using namespace std;

class String {
public:
    String() {
        _size = 0;
        _capacity = 1;
        _string = new char[_capacity];
        _string[_size] = '\0';
    }
    ~String() {
        cout << "I am destructor!" << endl;
        delete[] _string;
    }
    void print() {
        cout << _string;
    }
private:
    char * _string;
    size_t _size;
    size_t _capacity;
};

// Controls operation of program
int main() {
    {
        String my_string;
        cout << "my_string=";
        my_string.print();
        cout << endl;
        String new_string = my_string;
        cout << "Call destructor?" << endl;
    }
    cout << "I called the destructor already." << endl;


    //my_string.get_line();
    //cout << "my_string has length " << my_string.size() << endl;
    //my_string.append('a');
    //my_string.print();
    return 0;
}
















// look down here
/**
 * Read an arbitrarily long line of characters from the user.
 * @file getline_lecture.cpp
 * @author Darren Strash
 * @collaborators None
 * @date October 21, 2021
 */
void resize(char * & line, size_t & capacity) {

    size_t new_capacity = capacity * 2;
    char * new_line = new char[new_capacity];
    // copy everything over
    for (size_t index = 0; index < capacity; index++) {
        new_line[index] = line[index];
    }

    delete[] line;
    capacity = new_capacity;
    line = new_line;
}

char * get_line() {
    size_t capacity = 1;
    char * line = new char[capacity];
    size_t next_index = 0;

    char current_char = cin.get();
    while (current_char != '\n') {
        if (next_index >= capacity) {
            resize(line, capacity);
        }
        line[next_index] = current_char;
        next_index++;
        current_char = cin.get();
    }
    if (next_index >= capacity) {
        resize(line, capacity);
    }
    line[next_index++] = '\0';
    return line;
}

