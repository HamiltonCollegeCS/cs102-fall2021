/**
 * Making a point.
 * @file point.cpp
 * @author Darren Strash
 * @collaborators CS 102 Fall 2021
 * @date October 26, 2021
 */
#include <iostream>
#include <cstring>

using namespace std;

// structure, from C.
// use structures, to store data, giving it a useful name (code very readable)
// compound data type
struct Point {
    int x;
    int y;
};

struct NamedPoint {
    char name[36];
    int x;
    int y;
};

// class is like a struct, but can have functions (methods)
class Pointy {
public:
    Pointy(int x, int y) {
        _x = x;
        _y = y;
    }
    Pointy() {
        _x = 0;
        _y = 0;
    }
    Pointy(int x, int y, int z) {
        _x = z;
        _y = z;
    }
    int get_x() {
        return _x;
    }
    int get_y() {
        return _y;
    }
    void set_x(int x) {
        _x = x;
    }
    void set_y(int y) {
        _y = y;
    }
private:
    int _x;
    int _y;
};

// Controls operation of program.
int main() {
    //Pointy pointy = {42, 43};
    //Pointy pointy(42, 43);
    //Pointy pointy;
    Pointy pointy(42,43,45);
    cout << pointy.get_x() << "," << pointy.get_y() << endl;
    /*
    Point first_point = {0, 0};
    cout << "What's the point? ";
    cin >> first_point.x >> first_point.y;

    cout << "The point is: (" << first_point.x << "," << first_point.y << ")" << endl;

    NamedPoint named_point = {"the name", 42, 43};
    cout << "named_point=" << named_point.name << ", "
         << named_point.x << "," << named_point.y << endl;

    //strcpy(named_point.name, "new name");
    cin >> named_point.name;
    cout << *(named_point.name) << endl;
     */
    return 0;
}
