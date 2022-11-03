#include "stack.h"
#include <string>

// stack class obtained from the textbook
Stack::Stack()
{
    first = nullptr;
    len = 0;
}

void Stack::push(char element)
{
    Node* new_node = new Node;	//create a new node
    new_node->data = element;	//add data to the node
    new_node->next = first;		//connect node to the first node
    first = new_node;			//make new node as first node in list
    len++;						//increase size of the list as we add characters
}

char Stack::top() const
{
    return first->data;
}

void Stack::pop()
{
    Node* to_delete = first;
    first = first->next;
    delete to_delete;
    len--;
}

void Stack::removeAll() //Removes the whole list 
{
	Node* temp = first;
	Node* temp2 = nullptr;
    while(temp != nullptr) //Checks if there is something in the list 
    {
        temp2 = temp -> next;
        delete temp; //Deletes the previous pointer temp which is behind hp 
        temp = temp2;
    }
    delete first; //Deletes hp, which is the next pointer
    first = nullptr;
    len = 0;
}

int Stack::size() const
{
    return len;
}
