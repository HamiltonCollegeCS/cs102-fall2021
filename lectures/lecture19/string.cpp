/**
 * A first attempt at a string class
 * @file string.cpp
 * @author Darren Strash
 * @collaborators CS 102 Fall 2021
 * @date November 2, 2021
 */
#include <iostream>
#include <cstring>

using namespace std;

class String {
public:
    String() {
        _size = 0;
        _capacity = 1;
        _string = new char[_capacity];
        _string[_size] = '\0';
    }
    String(const String & string) {
        _size = string._size;
        _capacity = string._capacity;
        _string = new char[_capacity];
        strcpy(_string, string._string);
    }
    String(const char * string) {
        _size = strlen(string);
        _capacity = _size + 1;
        _string = new char[_capacity];
        strcpy(_string, string);
    }
    ~String() {
        cout << "I am destructor!" << endl;
        delete[] _string;
    }
    void print() {
        cout << _string;
    }
    void get_line() {
        char current_char = cin.get();
        while (current_char != '\n') {
            if (_size + 1 >= _capacity) {
                resize(_string, _capacity);
            }
            _string[_size] = current_char;
            _size++;
            current_char = cin.get();
        }
        if (_size + 1 >= _capacity) {
            resize(_string, _capacity);
        }
        _string[_size] = '\0';
    }
    void append(char to_append) {
        if (_size + 1 >= _capacity) {
            resize(_string, _capacity);
        }
        _string[_size] = to_append;
        _string[_size + 1] = '\0';
        _size++;

    }
    String operator*(size_t num_copies) {
        // _size, _capacity, _string
        String duplicate;

        for (size_t copy = 0; copy < num_copies; copy++) {
            size_t index = 0;
            while (_string[index] != '\0') {
                duplicate.append(_string[index]);
                index++;
            }
        }
        return duplicate;
    }
    //my_string.operator=("hello");
    void operator=(const char * string) {
        delete[] _string;
        _size = strlen(string);
        _capacity = _size + 1;
        _string = new char[_capacity];
        strcpy(_string, string);
    }
private:
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
    char * _string;
    size_t _size;
    size_t _capacity;
};

// Controls operation of program
int main() {
    String my_string;
    my_string.get_line();
    cout << "my_string=";
    my_string.print();
    cout << endl;

    my_string.append('a');

    cout << "my_string=";
    my_string.print();
    cout << endl;

    my_string.operator=("hello");
    cout << "my_string=";
    my_string.print();
    cout << endl;

    /*
    String new_string = my_string;
    cout << "new_string=";
    new_string.print();
    cout << endl;
    */
    //my_string.to_upper();
    //my_string.pop_back();
    //my_string = other1 + other2;
    //my_string = other.slice(0,2);
    //my_string = other * 3;

    /*
    String other = "123";
    String duplicate = other.operator*(3);
    cout << "duplicate=";
    duplicate.print();
    cout << endl;
    */

    //cout << "my_string has length " << my_string.size() << endl;
    //
    //my_string.print();
    return 0;
}
















// look down here




