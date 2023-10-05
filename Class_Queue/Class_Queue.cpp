#include "Class_Queue.h"

void Queue::EnQueue(int value)
{
	Element* myQ = new Element;
	myQ->mValue = value;

	if (count == 0)
	{
		mHead = mTail = myQ;
		
	}

	else
	{	
		mTail->mNext = myQ;
		mTail = mTail->mNext;
	}

	count++;
}

void Queue::DeQueue()
{	
	if (count == 0)
	{
		std::cout << "Already Empty!" << std::endl;
		return;
	}
	
	else
	{
		Element* myQ2 = mHead->mNext;
		mHead = nullptr;
		mHead = myQ2;

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