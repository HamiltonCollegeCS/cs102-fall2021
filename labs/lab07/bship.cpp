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
