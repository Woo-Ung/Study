#include <iostream>
////Rev_QUEUE///////////////////





////QUEUE///////////////////

//const int X{ 10 };
//
//enum Command
//{
//	ENQUEUE = 1,
//	DEQUEUE = 2,
//	END = 3
//};
//
//struct Queue
//{
//	int container[X]{};
//	int head{};
//	int tail{};
//};
//
//void EnQueue(Queue& myQu, int a)
//{
//	if (myQu.head == (myQu.tail + 1) % X)
//	{
//		std::cerr << "full!!" << std::endl;
//		return;
//	}
//	myQu.tail = (myQu.tail + 1) % X;
//	myQu.container[myQu.tail] = a;
//}
//
//void DeQueue(Queue& myQu)
//{
//	if (myQu.head == myQu.tail)
//	{
//		std::cerr << "already empty" << std::endl;
//		return;
//	}
//	myQu.head = (myQu.head + 1) % X;
//}
//
//void printQueue(Queue& myQu)
//{
//	int i = myQu.head;
//
//	std::cout << "---------------------" << std::endl;
//
//	if (myQu.head == myQu.tail)
//	{
//		std::cout << "empty" << std::endl;
//		return;
//	}
//
//	while (i != myQu.tail)
//	{
//		i = (i + 1) % X;
//		std::cout << myQu.container[i] << " ";
//
//	}std::cout << std::endl;
//
//	std::cout << "---------------------" << std::endl;
//}
//
//int main()
//{
//	std::cout << "--------" << std::endl;
//	std::cout << "[0] end" << std::endl;
//	std::cout << "[1] ENQUEUE" << std::endl;
//	std::cout << "[2] DEQUEUE" << std::endl;
//	std::cout << "--------" << std::endl;
//
//	Queue myQueue;
//	int num;
//
//
//	while (true)
//	{
//		printQueue(myQueue);
//		std::cin >> num;
//
//		switch (num)
//		{
//		case ENQUEUE:
//		{
//			int Qnum;
//			std::cout << "\t >value ? ";
//			std::cin >> Qnum;
//			EnQueue(myQueue, Qnum);
//			break;
//		}
//
//		case DEQUEUE:
//			DeQueue(myQueue);
//			break;
//
//		case END:
//			return 0;
//			break;
//
//		default:
//			std::cout << "다시 입력하세요" << std::endl;
//			break;
//		}
//	}
//}







//////STACK///////////////////

//const int X{ 10 };
//
//enum Command
//{
//	END = 0,
//	PUSH = 1,
//	POP = 2
//};
//
//struct Stack
//{
//	int container[X]{};
//	int topindex{-1};
//};
//
//void Push(Stack& myst,int x)
//{
//	if (myst.topindex == X)
//	{
//		std::cerr << "full!!" << std::endl;
//		return;
//	}
//
//	myst.container[++myst.topindex] = x;
//}
//
//void Pop(Stack& myst)
//{	
//	if (myst.topindex < 0)
//	{
//		std::cerr << "already empty!!" << std::endl;
//		return;
//	}
//	myst.topindex--;
//}
//
//void printstack(Stack& myst)
//{
//	std::cout << "--stack--" << std::endl;
//
//	if (myst.topindex < 0)
//	{
//		std::cerr << "empty!!" << std::endl;
//	}
//	
//	for (int i = myst.topindex; i >= 0; i--)
//	{		
//		std::cout << myst.container[i] <<std::endl;		
//	}
//
//	std::cout << "--------" << std::endl;
//}
//
//int main()
//{
//	std::cout << "--------" << std::endl;
//	std::cout << "[0] end" << std::endl;
//	std::cout << "[1] push" << std::endl;
//	std::cout << "[2] pop" << std::endl;
//	std::cout << "--------" << std::endl;
//
//	Stack mystack;
//	
//
//	while (true)
//	{
//		printstack(mystack);
//
//		int num{};
//		std::cin >> num;
//
//		switch(num)
//		{
//			
//		case PUSH:
//		{
//			int stNum{};
//			std::cout << "\t >value ? ";
//			std::cin >> stNum;
//			Push(mystack, stNum);
//			break;
//		}
//
//		case POP:
//			Pop(mystack);
//			break;
//
//		case END:
//			return 0;
//			break;
//
//		default:
//			std::cerr << "다시입력하세요" << std::endl;
//			break;
//		}
//	}
//}