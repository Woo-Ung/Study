#include "DoubleLinkedList.h"
#include <iostream>


int main()
{
	MonsterList myList;

	CreateMonster(myList, "Demon", 100);
	CreateMonster(myList, "Wolf", 50);
	CreateMonster(myList, "Slime", 10);

	PrintMonsters(myList);
	PrintMonstersR(myList.pTail);
	std::cout << GetMonsterCount(myList) << std::endl;

	Monster* pResult = FindMonster(myList, "Slime");

	if (pResult)
	{
		std::cout << pResult->name << "Found!" << std::endl;
	}

	else
	{
		std::cout << "Not Found!" << std::endl;
	}	

	DeleteMonster(myList, "Wolf");
	DeleteMonster(myList, "Slime");
	PrintMonsters(myList);

	DeleteAll(myList);				
	PrintMonsters(myList);	
}
	
