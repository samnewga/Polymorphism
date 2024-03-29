/*
Samael Newgate
CSC275
Assignment: OO with Polymorphism
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include "PolymorphismHeader.h"

int main()
{

	//Creates a character and print info.
	Character character("Mana", 9000);
	character.printInfo();

	//Creates a player and prints info.
	Player player("Player 1", 100, true, 100);
	player.print(true);

	//Creates a villan and prints info.
	std::cout << "----------------------------------------------------------------" << std::endl;
	Villan zombie("Thanos", 8000, true, 8000);
	zombie.print(false);
	system("pause");
}
