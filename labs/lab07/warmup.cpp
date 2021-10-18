#include <iostream>

void print_array(const int * my_array, const size_t size) {
    std::cout << my_array[0];
    for (size_t index = 1; index < size; index++) {
        std::cout << " " << my_array[index];
    }
    std::cout << '\n';
}

void make_array() {
    std::cout << "Enter a size for the bigger array: ";
    size_t size = 0;
    std::cin >> size;
    int * numbers = new int[size];
    for (size_t index = 0; index < size; index++) {
        numbers[index] = 99;
    }
        print_array(numbers, size);
}

int main() {
    make_array();
}
