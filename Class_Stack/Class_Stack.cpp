#include "Class_Stack.h"

void Stack::Push(int value)
{
	Element* myE = new Element;
	myE->mValue = value;

	myE->mNext = mTop;
	mTop = myE;
	mCount++;
}

void Stack::Pop()
{
	if (mCount == 0)
	{
		std::cout << "Already Empty!" << std::endl;
		return;
	}

	Element* myE2 = mTop;
	mTop = myE2->mNext;	
	
	mCount--;
	delete myE2;
}

void Stack::Print()
{
	Element* myE3 = mTop;
	std::cout << "---- stack ----" << std::endl;

	if (mCount == 0)
	{
		std::cout << "Empty!" << std::endl;
		return;
	}

	while (myE3)
	{
		std::cout << myE3->mValue << std::endl;
		myE3 = myE3->mNext;
	}

	std::cout << "--------------" << std::endl;
	delete myE3;
}
