/**
 * A singly linked list class
 * @file list.cpp
 * @author Darren Strash
 * @collaborators None
 * @date November 11, 2021
 */
#include <iostream>
#include "SinglyLinkedList.h"
using namespace std;






class SLLStack {
public:
    size_t size() const {
        return _list.size();
    }
    int top() const {
        return _list.get(0);
    }
    void pop() {
        _list.remove(0);
    }
    void push(const int data) {
        _list.add(0, data);
    }
private:
    SinglyLinkedList _list;
};

// Controls operation of program
int main() {
    SLLStack stack;
    for (int data = 0; data < 10; data++)
        stack.push(data);
    while (stack.size() != 0) {
        cout << "top=" << stack.top() << endl;
        stack.pop();
    }
    return 0;
}
