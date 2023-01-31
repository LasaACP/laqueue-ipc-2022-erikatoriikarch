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

/*
 * Class Priority Queue
 */

void PQueue::push(void *item, int arg2)
{
    
	if(((end+1) % 30) == start) {
        std::cout << "queue full" << std::endl;
    }
    else {
        end = (end+1) % 30;
        queue[end] = item;
        if(start == -1) 
            start = 0;
    }
}

void* PQueue::top()
{
    if(start == -1)
        return nullptr;
    return queue[start];
}

void PQueue::pop()
{
    if(start == -1)
        std::cout << "start = -1" << std::endl;
    else { //list not empty
         if(start == end) {
             start = -1;
             end = -1;
         }
         else 
             start = (start+1) % 30;
     }
}
