/**
 * Write the << operator for String.
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators None
 * @date November 4, 2021
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
        delete[] _string;
    }
    void print() const {
        cout << _string;
    }
    void print(ostream & out) const {
        out << _string;
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
    void append(const char to_append) {
        if (_size + 1 >= _capacity) {
            resize(_string, _capacity);
        }
        _string[_size] = to_append;
        _string[_size + 1] = '\0';
        _size++;

    }

    String operator*(const size_t num_copies) const {
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
    void operator=(const char * string) {
        delete[] _string;
        _size = strlen(string);
        _capacity = _size + 1;
        _string = new char[_capacity];
        strcpy(_string, string);
    }
    char * get_string() const {
        return _string;
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

// Note: const correctness, use const whenever a variable
// will not change.
// Make any methods const, if they shouldn't change any members
// of the class.

ostream & operator<<(ostream & out, const String & string) {
    string.print(out); // safer, better design
    //out << string.get_string();
    return out;
}

// Write the << operator to support the following code:
int main() {
    String hello = "hello";
    //((operator<<(cout, hello)) << endl);
    (cout << hello) << endl;
    return 0;
}


