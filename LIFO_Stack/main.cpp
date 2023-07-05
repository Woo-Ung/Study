#include <iostream>

const int STACK_SIZE{ 10 };

enum command
{
	PUSH = 1,
	POP = 2,
	QUIT = 3
};

struct Stack
{
	int container[STACK_SIZE]{};
	int topindex{ -1 };
};

void PrintInfo()
{
	std::cout << "<STACK>" << std::endl;
	std::cout << "[1] push" << std::endl;
	std::cout << "[2] pop" << std::endl;
	std::cout << "[3] quit" << std::endl;
	std::cout << "-----------------" << std::endl;
}

void PrintStack(Stack& stack)
{
	std::cout << "---- stack ----" << std::endl;

	if (stack.topindex < 0)
	{
		std::cout << "Empty!!" << std::endl;
		return;
	}

	for (int i = stack.topindex; i >= 0;i--)
	{
		std::cout << stack.container[i] << std::endl;
	}

	std::cout << "--------------" << std::endl;
}

void Push(Stack& stack, int value)
{
	if (stack.topindex >= STACK_SIZE - 1)
	{
		std::cout << "Stack is Full!!" << std::endl;
		return;
	}
	stack.container[++stack.topindex] = value;
}

void Pop(Stack& stack)
{
	if (stack.topindex < 0)
	{
		std::cout << "Stack is already empty!" << std::endl;
		return;
	}

	stack.topindex--;
}

int main()
{
	Stack myStack;

	PrintInfo();

	int command{};

	while (true)
	{
		PrintStack(myStack);

		std::cout << "> ";
		std::cin >> command;

		switch (command)
		{
		case PUSH:
		{
			int value{};
			std::cout << "\tinput value :";
			std::cin >> value;
			Push(myStack, value);
			break;
		}

		case POP:
			Pop(myStack);
			break;

		case QUIT:
			return 0;
			break;

		default:
			std::cout << "잘못된 명령입니다" << std::endl;
			break;
		}
	}
}