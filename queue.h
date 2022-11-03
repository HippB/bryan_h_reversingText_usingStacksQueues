#ifndef QUEUE_H
#define QUEUE_H
#include <string>

// edited verstion of stack from the textbook
class Queue{
public:
/**
Constructs an empty stack.
*/
    Queue();

/**
Adds an element to the end of the stack.
@param element the element to add
*/
    void push(std::string element);

/**
Yields the element on the top of the stack.
@return the top element
*/
    std::string top() const;
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
        std::string data;
        Node* next;
    };

    Node* first;
    Node* end;
    int len;
};

#endif