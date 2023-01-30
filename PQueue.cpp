//EDIT THIS FOR BASIC CREDIT

/*
 * LaQueue
 * 
 * 
 * This is part of a series of labs for the Liberal Arts and Science Academy.
 * The series of labs provides a mockup of an POSIX Operating System
 * referred to as LA(SA)nix or LAnix.
 *  
 * (c) copyright 2018, James Shockey - all rights reserved
 * 
 * */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "PQueue.h"

// added = end of list
// removed = head of list
// lower priority int = higher priority

/*
 * Class Priority Queue
 */

		
/*
* Insert into Priority Queue
*/
void PQueue::push(void *item, int priority)
{
	node* temp = new node();
    temp->data = item;
    temp->priority = priority;
    if (front == nullptr)
        front = temp;
    else {
        node* current = front;
        while(current->next != nullptr && current->priority < temp->priority)
            current = current->next;
        temp->next = current->next;
        current->next = temp;
    }
    //std::cout << "push" << std::endl;
}

/*
 * Delete from Priority Queue
 */
void* PQueue::top()
{
    //std::cout << "top" << std::endl;
    if(front == nullptr)
        return front;
    return front->data;
}

void PQueue::pop()
{
    if(front != nullptr) {
        if(front->next != nullptr) {
        	node* temp = front->next->next;
            front->priority = front->next->priority;
            front->data = front->next->data;
            front->next = temp;
        }
        front = nullptr;
    }        
}

/*
 * Print Priority Queue
 */
void PQueue::display()
{
	node* ptr = front;
    while (ptr->next != nullptr) {
	std::cout<<ptr->priority<<" "<<(char*)ptr->data<<std::endl;
        ptr = ptr->next;
        }
    std::cout << "disp" << std::endl;
}

//dude wtf just push
//GHJDSGJHIOL