#include <iostream>
#include "Class_Queue.h"

int main()
{
	Queue myQueue;
	myQueue.Print();
	myQueue.EnQueue(1);	
	myQueue.EnQueue(2);
	myQueue.Print();
	myQueue.DeQueue();
	myQueue.Print();
	myQueue.DeQueue();
	myQueue.Print();
	myQueue.DeQueue();
	myQueue.Print();
	myQueue.EnQueue(2);
	myQueue.Print();
	myQueue.EnQueue(3);
	myQueue.Print();
	myQueue.EnQueue(4);
	myQueue.Print();
}