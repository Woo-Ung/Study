#include <iostream>
#include "queue.h"
enum Command
{
	DELETEALL = 0,
	ENQUEUE = 1,
	DEQUEUE = 2,
	QUIT = 3
};

int main()
{
	Queue myQueue;

	
	int command{};
	while (true)
	{
		Print(myQueue);

		std::cout << "> ";
		std::cin >> command;

		switch (command)
		{
		case ENQUEUE:
		{
			int value;
			std::cout << "\tvalue : ";
			std::cin >> value;
			EnQueue(myQueue, value);
			break;
		}
		case DEQUEUE:
			DeQueue(myQueue);
			break;

		case QUIT:
			return 0;
			break;

		case DELETEALL:
			DeleteAll(myQueue);
			break;

		default:
			std::cout << "잘못된 명령어입니다" << std::endl;
			break;
		}
	}
}
