#include <iostream>
#include "Class_Stack.h"

int main()
{
	Stack myStack;
	myStack.Print();
	myStack.Pop();
	myStack.Push(5);
	myStack.Push(4);
	myStack.Print();
	myStack.Pop();
	myStack.Pop();
	
	myStack.Print();
}