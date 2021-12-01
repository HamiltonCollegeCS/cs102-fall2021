//
// Created by Darren Strash on 11/18/21.
//
#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

size_t SinglyLinkedList::size() const {
    return _size;
}

SinglyLinkedList::SinglyLinkedList() {
    _head = nullptr;
    _tail = nullptr;
    _size = 0;
}

SinglyLinkedList::~SinglyLinkedList() {
    recursive_delete(_head);
}

Node * SinglyLinkedList::get_node(size_t index) const {
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
    } else if (index == _size) {
        Node * baby = new Node{value, nullptr};
        _tail->next = baby;
        _tail = baby;
    } else {
        Node * node = get_node(index - 1);
        Node * baby = new Node{value, node->next};
        node->next = baby;
    }
    _size++;
}

int SinglyLinkedList::get(size_t index) const {
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
