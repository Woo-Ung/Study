#include <iostream>
#include "DoubleLinkedList.h"


Monster* CreateMonster(MonsterList& list, const char* name, const int hp)
{
	Monster* element = new Monster;

	strcpy_s(element->name, NAME_LENGTH, name);
	element->hp = hp;
	 
	if (list.pTail == nullptr)
	{
		list.pHead = element;
		list.pTail = element;
	}

	else
	{		
		element->pPrevious = list.pTail;
		list.pTail->pNext = element;		
	}
	
	list.pTail = element;

	return element;
}

int GetMonsterCount(const MonsterList& list)
{
	Monster* p = list.pTail;
	int count{};

	while (p != nullptr)
	{
		count++;
		p = p->pPrevious;
	}

	return count;
}

void PrintMonsters(const MonsterList& list)
{
	Monster* p = list.pTail;

	while (p)
	{
		std::cout << p->name << " : " << p->hp << std::endl;
		p = p->pPrevious;
	}
}

void PrintMonstersR(Monster* pMonster)
{
	// base case
	if (pMonster == nullptr)
	{
		return;
	}

	std::cout << pMonster->name << " : " << pMonster->hp << std::endl;

	// recursive case
	PrintMonstersR(pMonster->pPrevious);
}


Monster* FindMonster(const MonsterList& list, const char* name)
{
	Monster* p = list.pTail;

	while (p)
	{
		if (strcmp(p->name, name) == 0)
		{
			return p;
		}
		p = p->pPrevious;
	}

	return nullptr;
}


void DeleteAll(MonsterList& list)
{
	Monster* p = list.pTail;
	Monster* pPrevious{};

	while (p)
	{
		pPrevious = p->pPrevious;
		delete p;

		p = pPrevious;
	}
	list.pTail = list.pHead = nullptr;
}

//많이 신경써야됨
bool DeleteMonster(MonsterList& list, const char* name)
{
	Monster* pElement = list.pTail;

	while (pElement)
	{
		if (strcmp(pElement->name, name) == 0)
		{
			break;			
		}
		pElement = pElement->pPrevious;
	}

	if (!pElement)
	{
		return false;
	}

	//처음에 있는걸 지울때
	if (list.pTail == list.pHead)
	{
		list.pTail = list.pHead = nullptr;
	}

	else if (pElement->pNext == nullptr)
	{
		list.pTail = pElement->pPrevious;
		list.pTail->pNext = nullptr;
	}
	
	//꼬리에 있는걸 지울때
	else if (pElement == list.pHead)
	{
		list.pHead = pElement->pNext;
		list.pHead->pPrevious = nullptr;
	}

	else
	{
		pElement->pPrevious->pNext = pElement->pNext;
		pElement->pNext->pPrevious = pElement->pPrevious;
	}

	delete pElement;

	return true;
}
