#pragma once

struct Element
{
	int value{};
	Element* pNext{};
};

struct Stack
{
	int count{};
	Element* pTop{};
};

void Push(Stack& stack, int value);
void Pop(Stack& stack);
void Print(Stack& stack);
void DeleteAll(Stack& stack);