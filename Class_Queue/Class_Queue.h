#pragma once
#include <iostream>

class Queue
{
private:
	struct Element
	{
		int mValue{};
		Element* mNext{};
	};
	int count{};
	Element* mHead;
	Element* mTail;

public:	
	void EnQueue(int value);
	void DeQueue();
	void Print();
};