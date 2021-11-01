#include <iostream>

using namespace std;

class IntegerList {
public:
    // your code here
private:

    void resize() {
        if (_size != _capacity)
            return;
        size_t new_capacity = _capacity * 2;
        int * new_list = new int[new_capacity];
        for (int i = 0; i < _size; i++) {
            new_list[i] = _int_list[i];
        }
        delete[] _int_list;
        _int_list = new_list;
        _capacity = new_capacity;
    }

    int * _int_list;
    size_t _capacity;
    size_t _size;
};

int main() {
    IntegerList list;
    for (int int_to_append = 0; int_to_append < 10; int_to_append++) {
        list.append(int_to_append);
    }
    list.print();

    IntegerList new_list = list;
    new_list.print();
    return 0;
}
