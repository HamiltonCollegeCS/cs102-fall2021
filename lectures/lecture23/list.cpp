/**
 * A singly linked list class
 * @file list.cpp
 * @author Darren Strash
 * @collaborators None
 * @date November 11, 2021
 */
#include <iostream>

using namespace std;

struct Node {
    int value;
    Node * next;
};

class SinglyLinkedList {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    void add(size_t index, int value);
    int get(size_t index);
    void remove(size_t index);
    void print() const;
    void reverse();
private:
    void reverse(Node * previous, Node * current);
    void recursive_delete(Node * current);
    Node * get_node(size_t index);
    Node * _head;
    Node * _tail;
    size_t _size;
};

SinglyLinkedList::SinglyLinkedList() {
    _head = nullptr;
    _tail = nullptr;
    _size = 0;
}

SinglyLinkedList::~SinglyLinkedList() {
    recursive_delete(_head);
}

Node * SinglyLinkedList::get_node(size_t index) {
    Node * current = _head;
    for (size_t node_index = 0; node_index < index; node_index++) {
        current = current->next;
    }
    return current;
}

void SinglyLinkedList::add(size_t index, int value) {
    if (index == 0) {
        Node * baby = new Node{value, _head};
        _head = baby;
        if (_size == 0) {
            _tail = _head;
        }
    } else {
        Node * node = get_node(index - 1);
        Node * baby = new Node{value, node->next};
        node->next = baby;
        if (index == _size) {
            _tail = baby;
        }
    }
    _size++;
}

int SinglyLinkedList::get(size_t index) {
    return get_node(index)->value;
}

void SinglyLinkedList::recursive_delete(Node * current) {
    // base case
    if (current == nullptr)
        return;
    // recursive case
    recursive_delete(current->next);
    delete current;
}

void SinglyLinkedList::remove(size_t index) {
    if (index == 0) {
        Node * saved = _head;
        _head = _head->next;
        delete saved;
        if (_size == 1) {
            _tail = nullptr;
        }
    } else {
        Node * before = get_node(index - 1);
        if (index == _size - 1) {
            _tail = before;
        }
        Node * saved = before->next;
        before->next = before->next->next;
        delete saved;
    }
    _size--;
}

void SinglyLinkedList::print() const {
    Node * current = _head;
    while (current != nullptr) {
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << endl;
}

void SinglyLinkedList::reverse() {
    reverse(nullptr, _head);
    Node * saved = _tail;
    _tail = _head;
    _head = saved;
}

void SinglyLinkedList::reverse(Node * previous, Node * current) {
    // base case
    if (current == nullptr) {
        return;
    }
    // recursive case
    reverse(current, current->next);
    current->next = previous;
}

// Controls operation of program
int main() {

    /*
    // Make 3 nodes and link them together
    Node * node = new Node{1, nullptr};
    //cout << node->value << endl;

    Node * second_node = new Node{3, nullptr};
    node->next = second_node;

    Node * third_node = new Node{0, nullptr};
    second_node->next = third_node;

    // want this behavior, but in a loop.
    // cout << node->value << " " << node->next->value << " " << node->next->next->value << endl;

    Node * current = node;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;


    current = node;
    while (current != nullptr) {
        Node * next = current->next;
        delete current;
        current = next;
    }

    recursive_delete(node);
    */

    SinglyLinkedList list;
    for (size_t index = 0; index < 10; index++) {
        list.add(index, index);
    }
    list.print();
    list.reverse();
    list.print();
    /*
    cout << "head=" << list.get(0) << endl;
    list.remove(0);
    cout << "now head=" << list.get(0) << endl;
    cout << "tail prev =" << list.get(27) << endl;
    list.remove(27);
    cout << "now tail=" << list.get(27) << endl;
    //cout << list.get(0) << " " << list.get(1) << endl;
     */

    //delete third_node;
    //delete second_node;
    //delete node;
    return 0;
}
