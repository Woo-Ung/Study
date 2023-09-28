#pragma once
#include <iostream>

class Stack
{
	private:
		struct Element
		{
			int mValue{};
			Element* mNext;
		};		
		Element* mTop;
		int mCount{};

	public:		
		void Push(int value);
		void Pop();
		void Print();		
};