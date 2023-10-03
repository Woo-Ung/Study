#include "Class_Queue.h"

void Queue::EnQueue(int value)
{
	Element* myQ = new Element;
	myQ->mValue = value;

	if (count == 0)
	{
		mHead = mTail = myQ;
		mHead->mNext = mTail;
	}

	else
	{	
		mTail->mNext = myQ;
		mTail = myQ;
	}

	count++;
}

void Queue::DeQueue()
{	
	if (count == 0)
	{
		std::cout << "Already Empty!" << std::endl;
	}
	
	else
	{
		Element* myQ2 = mHead;
		mHead = mHead->mNext;
		myQ2->mNext = nullptr;

		delete myQ2;
		count--;
	}	
}

void Queue::Print()
{
	if (count == 0)
	{
		std::cout << "Empty!" << std::endl;
		return;
	}

	Element* myQ3 = mHead;

	while (myQ3)
	{
		std::cout << myQ3->mValue << " ";
		myQ3 = myQ3->mNext;
	}std::cout << std::endl;

}