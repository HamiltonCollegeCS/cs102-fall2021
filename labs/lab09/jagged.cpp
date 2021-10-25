#include <iostream>

using namespace std;

void print_two_dee_array(/* You should write these parameters. */) {
    /* You should write this function. */
}

int main() {
    cout << "\nEnter the number of subarrays for your array: ";
    size_t num_subarrays = 0;
    cin >> num_subarrays;
    int* * two_dee_array = new int*[num_subarrays];
    size_t * subarray_sizes = new size_t[num_subarrays];
    for (size_t index = 0; index < num_subarrays; index++)
        two_dee_array[index] = nullptr;
    cout << "\nEnter the size of your subarray first, followed by"
         << "\nthe contents of each subarray as integers"
         << "\nseparated with spaces, like 3 13 11 29.\n\n";
    for (size_t index = 0; index < num_subarrays; index++) {
        cout << "Enter the size and contents of subarray " << index << ": ";
        size_t subarray_size = 0;
        cin >> subarray_size;
        int * subarray = new int[subarray_size];
        size_t current_size_index = 0;
        while (true) {
            int input = 0;
            cin >> input;
            subarray[current_size_index] = input;
            current_size_index++;
            if (cin.peek() == '\n') break;
        }
        /* You should write this missing code. */
    }
    print_two_dee_array(two_dee_array, num_subarrays, subarray_sizes);

    return 0;
}
