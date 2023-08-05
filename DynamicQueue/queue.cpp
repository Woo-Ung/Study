#include <iostream>
#include"Queue.h"

void EnQueue(Queue& queue, int value)
{
	Element* pElement = new Element{};
	pElement->value = value;
	
	
	if (queue.count == 0)
	{
		queue.pHead = queue.pTail = pElement;
	}

	else if (queue.count > 0)
	{
		queue.pTail->pNext = pElement;
		queue.pTail = queue.pTail->pNext;
	}
	queue.count++;
}
void DeQueue(Queue& queue)
{
	if(queue.count == 0)
	{
		std::cout << "QUEUE is already Empty" << std::endl;
		return;
	}

	else if (queue.count > 0)
	{
		Element* pTemp = queue.pHead;
		queue.pHead = queue.pHead->pNext;
		pTemp->pNext = nullptr;
		delete pTemp;			
	}
	queue.count--;
}
void Print(Queue& queue)
{
	if (queue.count == 0)
	{
		std::cout << "Empty" << std::endl;
		return;
	}
	Element* pElement = queue.pHead;
	while (pElement)
	{
		std::cout << pElement->value << " ";
		pElement = pElement->pNext;
	} std::cout << std::endl;
}
void DeleteAll(Queue& queue)
{
	Element* pElement = queue.pHead;
	Element* pEmpty = nullptr;

	while (pElement)
	{
		pEmpty = pElement;
		pElement = nullptr;		
		pEmpty = pEmpty->pNext;	
		delete pElement;
	}
	queue.count = 0;
}