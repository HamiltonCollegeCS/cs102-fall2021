/**
 * Animals and the sounds that they make
 * @file animals.cpp
 * @author Darren Strash
 * @collaborators CS 102 Fall 2021
 * @date November 30, 2021
 */
#include <iostream>

using namespace std;

class Animal {
public:
    virtual void roar() const = 0;
};

class Bear : public Animal {
public:
    void roar() const {
        cout << "roar!" << endl;
    }
};

class Shark : public Animal {
public:
    void roar() const {
        cout << "gurgle" << endl;
    }
};

class NurseShark : public Shark {
public:
    void nurse() const {
        cout << "Caring for another animal, thank you very much" << endl;
    }
};

int main() {

    // Animals roar
    //Bear bear;
    //bear.roar();

    //Shark shark;
    //shark.roar();

    NurseShark nurse_shark;
    nurse_shark.roar();
    nurse_shark.nurse();
    return 0;
}
