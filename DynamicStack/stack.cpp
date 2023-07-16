#include <iostream>
#include"Stack.h"

void Push(Stack& stack, int value)
{
	Element* pElement = new Element{};
	pElement->value = value;

	pElement->pNext = stack.pTop;
	stack.pTop = pElement;
	stack.count++;
}
void Pop(Stack& stack)
{
	if (stack.count == 0)
	{
		std::cout << "STACK IS EMPTY" << std::endl;
		return;
	}

	Element* pPrevTop = stack.pTop;
	stack.pTop = pPrevTop->pNext;	
	stack.count--;

	delete pPrevTop;
}

void Print(Stack& stack)
{
	Element* pElement = stack.pTop;
	while (pElement)
	{
		std::cout << pElement->value << std::endl;
		pElement = pElement->pNext;
	}
}

void DeleteAll(Stack& stack)
{
	Element* pElement = stack.pTop;
	Element* pNext{};

	while (pElement)
	{
		pNext = pElement->pNext;
		delete pElement;
		pElement = pNext;
	}

	stack.count = 0;
	stack.pTop = nullptr;
}