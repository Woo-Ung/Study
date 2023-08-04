#include <iostream>
#include"Queue.h"

void EnQueue(Queue& queue, int value)
{
	Element* pElement = new Element{};
	pElement->value = value;	
	
	if (queue.count == 0)
	{
		queue.pHead = pElement;
		queue.pTail = pElement;
	}

	else if (queue.count > 0)
	{
		queue.pTail->pNext = pElement;
		queue.pTail = pElement;
	}
	queue.count++;
}
void DeQueue(Queue& queue)
{

}
void Print(Queue& queue)
{

}
void DeleteAll(Queue& queue)
{

}