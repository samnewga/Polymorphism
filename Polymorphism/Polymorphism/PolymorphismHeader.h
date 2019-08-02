#pragma once
#include <String>

//Character class and all its attributes. 
//Player and zombie class derive from this class.
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


//Villan class and all its attributes
class Villan :Character {

private:
	bool canAttack;
	int StrengthStat;

public:
	Villan();
	Villan(std::string n, int h, bool c, int b);
	void setCanAttack(bool c);
	bool getCanAttack();
	void setStrengthStat(int h);
	int getStrengthStat();
	void print(bool s);
	void printSubInfo();
};


//Player class and all its attributes
class Player :Character {

private:
	bool ArmorStat;
	int StrengthStat;

public:

	Player();
	Player(std::string n, int h, bool i, int b);
	void setArmorStat(bool i);
	bool getArmorStat();
	void setStrengthStat(int b);
	int getStrengthStat();
	void print(bool s);
	void printSubInfo();
};