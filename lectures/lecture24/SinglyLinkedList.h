//
// Created by Darren Strash on 11/18/21.
//

#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H
#include <cstddef>

// Never use using namespace in header files.
//using namespace std; <- bad

struct Node {
    int value;
    Node * next;
};

class SinglyLinkedList {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    void add(size_t index, int value);
    int get(size_t index) const;
    void remove(size_t index);
    void print() const;
    size_t size() const;
    void reverse();
private:
    void reverse(Node * previous, Node * current);
    void recursive_delete(Node * current);
    Node * get_node(size_t index) const;
    Node * _head;
    Node * _tail;
    size_t _size;
};

#endif //SINGLYLINKEDLIST_H
