#include <iostream>

const int MAX_ARRAY_SIZE = 16;

void print_two_dee_array(/* You should write these parameters. */) {
    /* You should write this function. */
}

int main() {
    std::cout << "\nEnter the number of subarrays for your array: ";
    size_t num_pointers = 0;
    std::cin >> num_pointers;
    int* * two_dee_array = new int*[num_pointers];
    int * subarray_sizes = new int[num_pointers];
    for (size_t index = 0; index < num_pointers; index++) {
        two_dee_array[index] = nullptr;
    }
    std::cout << "\nEnter the contents of each subarray as integers\n"
              << "separated with spaces, like 13 11 29.\n\n";
    for (size_t index = 0; index < num_pointers; index++) {
        std::cout << "Enter the contents of subarray " << index << ": ";
        int subarray[MAX_ARRAY_SIZE];
        size_t current_size = 0;
        while (true) {
            int input = 0;
            std::cin >> input;
            subarray[current_size] = input;
            current_size++;
            if (std::cin.peek() == '\n') {
                break;
            }
        }
        /* You should write this missing code. */
    }
    print_two_dee_array(two_dee_array, num_pointers, subarray_sizes);

    return 0;
}

