// EDIT THIS FOR BASIC CREDIT

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

class PQueue
{

	private:
    void* queue[30];
    int start;
    int end;

	public:
	PQueue()
	{
        start = -1;
        end = -1;
        for(int i = 0; i < 30; i++) {
            queue[i] = nullptr;
        }
    }
		
	void push(void *item, int arg2);
	void* top();
	void pop();
};
