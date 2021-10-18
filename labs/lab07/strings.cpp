Ananab Tilps
#6665

Dave Perkins — Today at 10:03 AM
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
For the Warmup Task ⬆️
Dave Perkins — Today at 10:18 AM
bship.cpp
/**
 * Beginning to implement a one-sided game of Battleship against the computer.
 * @file bship.cpp
 * @author You!
 * @collaborators Darren Strash
 * @date March 15, 2021
 */
#include <iostream>

//3. Uncomment and give parameter board the correct type
/*
void place_piece(board, size_t rows, size_t cols, unsigned int piece_length) {
    bool placed = false;
    while (!placed) {
        size_t row = rand() % rows;
        size_t col = rand() % cols;
        bool vertical = rand() % 2;
        bool free = true;
        for (unsigned int piece_offset = 0; free && piece_offset < piece_length; piece_offset++) {
            int new_row = row + (!vertical) * piece_offset;
            int new_col = col + vertical * piece_offset;
            if (new_row >= rows || new_col >= cols || board[new_row][new_col] != ' ') {
                free = false;
            }
        }

        if (free) {
            for (unsigned int piece_offset = 0; free && piece_offset < piece_length; piece_offset++) {
                board[row + (!vertical) * piece_offset][col + vertical * piece_offset] = 'S';
            }
            placed = true;
        }
    }
}

void fill_board(board, size_t rows, size_t cols) {
    for (size_t row = 0; row < rows; row++) {
        for (size_t col = 0; col < cols; col++) {
            board[row][col] = ' ';
        }
    }

    const size_t NUM_PIECES = 10;
    unsigned int piece_lengths[NUM_PIECES] = {2, 2, 2, 2, 3, 3, 3, 4, 4, 5};
    for (size_t piece_index = 0; piece_index < NUM_PIECES; piece_index++) {
        place_piece(board, rows, cols, piece_lengths[piece_index]);
    }
}

void print_board(board, size_t rows, size_t cols) {
    for (size_t row = 0; row < rows; row++) {
        for (size_t col = 0; col < cols; col++) {
            std::cout << board[row][col];
        }
        std::cout << std::endl;
    }
}
*/

void get_dimensions(/* change parameters to compile and run as expected */) {
    std::cout << "How many rows (>=10)? ";
    //std::cin >> ; // input rows
    std::cout << "How many columns (>=10)? ";
    //std::cin >> ; // input cols
}

// Controls execution of program.
int main() {
    size_t rows = 0;
    size_t cols = 0;
    // 1. Implement get_dimensions to get the number of rows >= 10 and cols >= 10
    // do not change the following line
    get_dimensions(&rows, &cols);

    /* ----------- 2. Allocate board here ---------- */

    /* -------- 3. Uncomment and make functions take correct types -------- */
    //fill_board(board, rows, cols);
    //print_board(board, rows, cols);

    // After lab, you would be ready to implement battleship!
    // play_battleship(board, row, col);

    /* ---------- 2. Deallocate board here --------- */
    return 0;
}
Collapse
bship.cpp
3 KB
strings.cpp
/**
 * Implement string concatenation and string splitting, similar to Python.
 * @file task_four.cpp
 * @author You!
 * @collaborators Darren Strash
 * @date March 15, 2021
 */
#include <iostream>

/**
 * Resize an array of characters so that a new character
 * can be written to it.
 * @param line a reference to the string of characters
 * @param size a reference to the size of the string
 */
void resize_array(char * & line, int & size) {
    int new_size = size + 1;
    char * new_line = new char[new_size];
    for (int i = 0; i < size; i++) {
        new_line[i] = line[i];
    }   
    delete[] line;
    line = new_line;
    size = new_size;
}

/**
 * Read a line of characters of arbitrary length from standard input.
 * @return a pointer to the line of characters read
 */
char * read_line() {
    int size = 10; 
    char * line = new char[size];
    char current_char = std::cin.get();
    int current_index = 0;
    while (current_char != '\n') {
        if (current_index == size) {
            resize_array(line, size);
        }   
        line[current_index] = current_char;
        current_index++;
        current_char = std::cin.get();
    }   
    if (current_index == size) {
        resize_array(line, size);
    } 
    line[current_index] = '\0';
    return line;
}

/**
 * Concatenate two strings.
 * @param string1 the first string to appear in the concatenation
 * @param string2 the second string to appear in the concatenation
 * @return a pointer to a string that is the concentation of string1 and string2
 */
char * concat(char * string1, char * string2) {
    // replace with your code.
    return nullptr;
}

/**
 * Split a string into strings separated by the character split_char
 * @param string_to_split the string to split
 * @param the number of strings that are returned after splitting
 * @param split_char the character to split on
 * @return a pointer to an array of strings resulting from the split
 */
char ** split(char * string_to_split, size_t & num_split_strings, char split_char) {
    // replace with your code.
    return nullptr;
}

void run_concat() {
    std::cout << "Enter the first string: ";
    char * string1 = read_line();
    std::cout << "Enter the second string: ";
    char * string2 = read_line();

    std::cout << "The two strings concatenated are: ";
    // 1. Make concatenated string with call to concat, be sure to deallocate your memory!

    delete[] string1;
    delete[] string2;
}

void run_split() {
    std::cout << "Enter the string to split: ";
    char * string_to_split = read_line();
    std::cout << "Enter a character to split on: ";
    char split_char = std::cin.get();

    // 2. Split the string string_to_split using the character split_char then
    //    print the resulting strings out on separate lines. Be sure to deallocate your memory!
    std::cout << "The split strings are: ";

    delete[] string_to_split;
}

// Controls operation of program.
... (5 lines left)
Collapse
strings.cpp
4 KB
﻿
/**
 * Implement string concatenation and string splitting, similar to Python.
 * @file task_four.cpp
 * @author You!
 * @collaborators Darren Strash
 * @date March 15, 2021
 */
#include <iostream>

/**
 * Resize an array of characters so that a new character
 * can be written to it.
 * @param line a reference to the string of characters
 * @param size a reference to the size of the string
 */
void resize_array(char * & line, int & size) {
    int new_size = size + 1;
    char * new_line = new char[new_size];
    for (int i = 0; i < size; i++) {
        new_line[i] = line[i];
    }   
    delete[] line;
    line = new_line;
    size = new_size;
}

/**
 * Read a line of characters of arbitrary length from standard input.
 * @return a pointer to the line of characters read
 */
char * read_line() {
    int size = 10; 
    char * line = new char[size];
    char current_char = std::cin.get();
    int current_index = 0;
    while (current_char != '\n') {
        if (current_index == size) {
            resize_array(line, size);
        }   
        line[current_index] = current_char;
        current_index++;
        current_char = std::cin.get();
    }   
    if (current_index == size) {
        resize_array(line, size);
    } 
    line[current_index] = '\0';
    return line;
}

/**
 * Concatenate two strings.
 * @param string1 the first string to appear in the concatenation
 * @param string2 the second string to appear in the concatenation
 * @return a pointer to a string that is the concentation of string1 and string2
 */
char * concat(char * string1, char * string2) {
    // replace with your code.
    return nullptr;
}

/**
 * Split a string into strings separated by the character split_char
 * @param string_to_split the string to split
 * @param the number of strings that are returned after splitting
 * @param split_char the character to split on
 * @return a pointer to an array of strings resulting from the split
 */
char ** split(char * string_to_split, size_t & num_split_strings, char split_char) {
    // replace with your code.
    return nullptr;
}

void run_concat() {
    std::cout << "Enter the first string: ";
    char * string1 = read_line();
    std::cout << "Enter the second string: ";
    char * string2 = read_line();

    std::cout << "The two strings concatenated are: ";
    // 1. Make concatenated string with call to concat, be sure to deallocate your memory!

    delete[] string1;
    delete[] string2;
}

void run_split() {
    std::cout << "Enter the string to split: ";
    char * string_to_split = read_line();
    std::cout << "Enter a character to split on: ";
    char split_char = std::cin.get();

    // 2. Split the string string_to_split using the character split_char then
    //    print the resulting strings out on separate lines. Be sure to deallocate your memory!
    std::cout << "The split strings are: ";

    delete[] string_to_split;
}

// Controls operation of program.
int main() {
    //run_concat();
    //run_split();
    return 0;
}
strings.cpp
4 KB
