/**
 * A Bubble class
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators None
 * @date October 28, 2021
 */
#include <iostream>

using namespace std;

class Bubble {
public:
    Bubble(double diameter, double max_diameter) {
        _diameter = diameter;
        _max_diameter = max_diameter;
    }
    bool popped() {
        return _diameter > _max_diameter;
    }
    void double_diameter() {
        _diameter *= 2;
    }
    double get_diameter() {
        return _diameter;
    }
private:
    double _diameter;
    double _max_diameter;
};

// Make a class that supports the following code
int main() {
    double max_diameter = 10;
    double diameter = 1;
    Bubble bubble(diameter, max_diameter);
    while (!bubble.popped()) {
        bubble.double_diameter();
        cout << "Bubble popped? " << bubble.popped() << endl;
        cout << "current diameter is " << bubble.get_diameter() << endl;
    }
    std::cout << "The bubble popped!" << std::endl;
    return 0;
}
