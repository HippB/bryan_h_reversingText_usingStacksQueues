#ifndef STACK_H
#define STACK_H

#include <string>

// stack class obtained from the textbook
class Stack{
public:
/**
Constructs an empty stack.
*/
    Stack();

/**
Adds an element to the top of the stack.
@param element the element to add
*/
    void push(char element);

/**
Yields the element on the top of the stack.
@return the top element
*/
    char top() const;
/**
Removes the element from the top of the stack.
*/
    void pop();

 /**
 Yields the number of elements in this stack.
 @return the size
 */

    void removeAll();

    int size() const;

private:
    class Node
    {
    public:
        char data;
        Node* next;
    };

    Node* first;
    int len;
};

#endif