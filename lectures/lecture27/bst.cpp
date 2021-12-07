/**
 * Lecture 27: Binary Search Trees I
 * @file bst.cpp
 * @author Darren Strash
 * @collaborator CS 102, Fall 2021
 * @date December 7, 2021
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;

const size_t NUM_REPETITIONS = 10;

void height_experiment();

struct Node {
    int data;
    Node * left;
    Node * right;
};

// A class to stored ordered keys in a binary search tree
class BinarySearchTree {
public:
    BinarySearchTree() {
        _root = nullptr;
        _size = 0;
    }

    void add(const int value) {
        recursive_add(_root, value);
    }

    void display() const {
        vector<bool> draw_level;
        draw_level.push_back(false);
        recursive_display(_root, draw_level, 0);
    }

private:
    Node * _root;
    size_t _size;
    void recursive_add(Node * & current, const int value) {
        if (current == nullptr) {
            current = new Node;
            current->data = value;
            current->left = nullptr;
            current->right = nullptr;
            return;
        }
        if (value < current->data) {
            recursive_add(current->left, value);
        } else {
            recursive_add(current->right, value);
        }
    }

    void recursive_display(Node * current_node, 
                           vector<bool> & draw_level, 
                           const size_t depth) const {
        if (current_node == nullptr)
            return;
        else {
            for (size_t level = 0; level < depth; level++) {
                if (draw_level[level])
                    cout << "|  ";
                else
                    cout << "   ";
            }
            cout << "|--";
            cout << current_node->data << endl;
            draw_level.push_back(current_node->left != nullptr);
            recursive_display(current_node->right, draw_level, depth + 1);
            draw_level.pop_back();
            draw_level.push_back(false);
            recursive_display(current_node->left, draw_level, depth + 1);
            draw_level.pop_back();
        }
    }
};

// Controls execution of program
int main() {
    BinarySearchTree bst;
    bst.add(50);
    bst.add(45);
    bst.add(47);
    bst.add(48);
    bst.add(51);

    bst.display();

    /*
    cout << "Height of tree: " << bst.height() << endl;
    cout << "Contents in order: ";
    bst.inorder_print();
    srand(time(0));
    height_experiment();
    */
    return 0;
}
















/*
void height_experiment() {
    cout << "Legend:" << endl;
    cout << "    n    - the number of elements in the bst" << endl;
    cout << "  height - the height of the bst" << endl;
    cout << setw(10) << "n" << setw(10) << "height" << endl;
    for (size_t size = 1; size < 100000000; size *= 2) {
        long avg_height = 0;
        for (size_t iteration = 0; iteration < NUM_REPETITIONS; iteration++) {
            BinarySearchTree bst;
            for (size_t index = 0; index < size; index++)
                bst.add(rand() % size);
            avg_height += bst.height();
        }
        avg_height /= NUM_REPETITIONS;
        cout << setw(10) << size
             << setw(10) << avg_height
             << endl;
    }
}
*/