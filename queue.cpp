#include "queue.h"
#include <string>
#include <iostream>
// edited verstion of stack from the textbook
Queue::Queue()
{
    first = nullptr;
    end=nullptr;
    len = 0;
}



void Queue::push(std::string element)
{
    Node* new_node = new Node;  //create a new node
    new_node -> data = element;       //add data to the node
    if(first == nullptr){
		
        first = end = new_node;     //sets hp and tp to new node if list is empty
        len++;
        return;
    }
    end -> next = new_node;      //connect new node to linked list
    new_node -> next = nullptr; //set next of new node to nullptr
    end = new_node;				//make tp to the new node
    len++;              //increase size of the list
}

std::string Queue::top() const
{
    return first->data;
}

void Queue::pop()
{
    Node* to_delete = first;
    first = first->next;
    delete to_delete;
    len--;
}

void Queue::removeAll() //Removes the whole list 
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

int Queue::size() const
{
    return len;
}
