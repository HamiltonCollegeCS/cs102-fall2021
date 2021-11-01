#include <iostream>
#include <cstring>

using namespace std;

class PointOne {
public:
    PointOne(int x, int y) {
        _x = x;
        _y = y;
    }

    PointOne() {
        _x = -1;
        _y = -1;
    }
    /*
    PointOne(const PointOne & other) {
        cout << "Copy constructor was called!" << endl;
        _x = other._x;
        _y = other._y;
    }
    */

    int get_x() const {
        return _x;
    }

    int get_y() const {
        return _y;
    }
private:
    int _x;
    int _y;
};

// Controls execution of program.
int main() {
    // What is happening "under the hood"?
    PointOne best(42, 84);
    PointOne new_best = best;
    cout << "new_best: " << new_best.get_x() << "," << new_best.get_y() << endl;

    // Find two different ways (other than above) to
    // call the copy constructor.

    return 0;
}
