#include "Class_Queue.h"

void Queue::EnQueue(int value)
{
	Element* myQ = new Element;
	myQ->mValue = value;

	mHead = myQ;
	myQ->mNext = mTail;	
	mTail = myQ;

	count++;
}

void Queue::DeQueue()
{
	if (count == 0)
	{
		std::cout << "Already Empty!" << std::endl;
	}

	Element* myQ2 = mTail;


	count--;
	delete myQ2;
}

void Queue::Print()
{

}