#pragma once
#include <String>

// This is the character class and it has the methodss for setting
// the health and name
// Also, the Player and Zombie classes derive from this class
class Character {
private:



public:
	std::string name;

	int health;
	Character();
	Character(std::string n, int h);

	void setCharacterName(std::string _name);

	std::string getCharacterName();


	void setHealth(int h);

	int getHealth();

	void printInfo();

};


// This is a zombie class that inherits the Character class
// In this class, we have the bool canAttacl and the int baseHeight.
class Zombie :Character {
private:
	bool canAttack;
	int baseHeight;

public:
	Zombie();
	Zombie(std::string n, int h, bool c, int b);

	void setCanAttack(bool c);

	bool getCanAttack();


	void setBaseHeight(int h);

	int getBaseHeight();

	void print(bool s);
	void printSubInfo();

};


// This is called Player and it inherits the Character class
// There is the isDeveloper bool and the int baseSpeed
class Player :Character {
private:
	bool isDeveloper;
	int baseSpeed;

public:

	Player();
	Player(std::string n, int h, bool i, int b);

	void setIsDeveloper(bool i);

	bool getIsDeveloper();


	void setBaseSpeed(int b);

	int getBaseSpeed();
	void print(bool s);
	void printSubInfo();
};