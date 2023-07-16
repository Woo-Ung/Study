#include "stack.h"

int main()
{
	Stack myStack;

	Push(myStack, 1);
	Push(myStack, 2);
	Push(myStack, 3);

	Print(myStack);

	Pop(myStack);
	Print(myStack);
	Pop(myStack);
	Print(myStack);
	Pop(myStack);
	Print(myStack);

	DeleteAll;
}