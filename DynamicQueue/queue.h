#pragma once

struct Element
{
	int value{};
	Element* pNext{};
};

struct Queue
{
	int count{};
	Element* pHead{};
	Element* pTail{};
};

void EnQueue(Queue& queue, int value);
void DeQueue(Queue& queue);
void Print(Queue& queue);
void DeleteAll(Queue& queue);