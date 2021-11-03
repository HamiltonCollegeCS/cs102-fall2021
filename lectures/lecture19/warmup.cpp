/**
 * Find the memory error
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators None
 * @date November 2, 2021
 */
#include <iostream>
#include <cstring>

using namespace std;

#define MAX_GREETING_LENGTH 10

class Greeting {
public:
    Greeting() {
        _greeting = new char[MAX_GREETING_LENGTH];
        _greeting[0] = '\0';
    }
    Greeting(const char * greeting) {
        _greeting = new char[MAX_GREETING_LENGTH];
        strcpy(_greeting, greeting);
    }
    // const is technically optional, but stylistically better because
    // it's a handshake that we won't change greeting (which would be unexpected!)
    Greeting(const Greeting & greeting) {
        _greeting = new char[MAX_GREETING_LENGTH];
        strcpy(_greeting, greeting._greeting);
    }
    ~Greeting() {
        delete[] _greeting;
    }
    void print() {
        cout << _greeting << endl;
    }
private:
    char * _greeting;
};

// Make a class that supports the following code
int main() {
    Greeting hello("hello");
    hello.print();
    Greeting hi(hello);
    hi.print();
    return 0;
}
