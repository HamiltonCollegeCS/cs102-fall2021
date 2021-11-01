#include <iostream>
#include <cstring>

using namespace std;

class PointTwo {
public:
    PointTwo(int x, int y) {
        _the_point = new int[2];
        _the_point[0] = x;
        _the_point[1] = y;
    }

    PointTwo() {
        _the_point = new int[2];
        _the_point[0] = -1;
        _the_point[1] = -1;
    }

    ~PointTwo() {
        cout << "Destructor is calling delete[] on pointer " << _the_point << endl;
        delete[] _the_point;
    }

    int get_x() const {
        return _the_point[0];
    }

    int get_y() const {
        return _the_point[1];
    }
private:
    int * _the_point;
};

// Controls execution of program.
int main() {
    // Try this:
    PointTwo best(42, 84);
    PointTwo new_best = best;
    cout << "New best point: " << new_best.get_x() << "," << new_best.get_y() << endl;

    return 0;
}
