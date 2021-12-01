/**
 * Warmup for Lecture 25
 * @file warmup.cpp
 * @author Darren Strash
 * @collaborators None
 * @date November 30, 2021
 */
#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

/* Question: Is there anything forcing us to implement all
   operations of the stack interface? Why or why not?
   What problem could this cause?
*/

class Stack {
public:
    // virtual: allowed to override this method with another one that you implement
    // (implementation will be in a child class)
    virtual size_t size() const = 0;
    virtual int top() const = 0;
    virtual void pop() = 0;
    virtual void push(const int data) = 0;
};

class SLLStack : public Stack {
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
