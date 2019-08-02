#include "stdafx.h"
#include "PolymorphismHeader.h"
#include <iostream>

//Gets character's name.
std::string Character::getCharacterName() {
	return name;
}

//Sets character's name.
void Character::setCharacterName(std::string n) {
	n = name;
}


//Sets characters health if greater than zero.
void Character::setHealth(int h) {
	if (h > 0) {
		h = health;
	}
	else {
		std::cout << "Error: Negative values are invalid.\n\n";
	}
}

//Gets character's health
int Character::getHealth() {
	return health;
}

//Prints the character's name and health.
void Character::printInfo() {
	std::cout << "Character: " << name << "\nBase health: " << health << std::endl << std::endl;
}

//Character constructor.
Character::Character() {
}

//Another character constructor with two parameters.
Character::Character(std::string n, int h) {
	name = n;
	health = h;
}


//Bool that determines if villan can attack.
void Villan::setCanAttack(bool c) {
	canAttack = c;
}

//Anothor bool to determine if you will attack.
bool Villan::getCanAttack() {
	return canAttack;
}

//Sets strength stat
void Villan::setStrengthStat(int h) {
	StrengthStat = h;
}
// This checks what to print using a boolean
void Villan::print(bool s) {

	// This boolean helps us with printing what info the user wanted.
	if (s) {
		Villan::printSubInfo();
	}
	else
	{
		Villan::printInfo();
	}
}
//Returns villan's strength stat
int Villan::getStrengthStat() {
	return StrengthStat;
}

//Print sub information.
void Villan::printSubInfo() {
	std::cout << "Villan stats: Can Attack = " << canAttack << " Strength= " << StrengthStat << std::endl << std::endl;
}

//Villan constructor.
Villan::Villan() {

}


//Another villan constructor but with four parameters.
Villan::Villan(std::string n, int h, bool c, int b) {
	setCanAttack(c);
	setStrengthStat(b);
	name = n;
	health = h;
}
//Returns armor bool.
bool Player::getArmorStat() {
	return ArmorStat;
}
//Sets armor bool.
void Player::setArmorStat(bool i) {
	ArmorStat = i;

}

//Sets strength stat int.
void Player::setStrengthStat(int b) {
	StrengthStat = b;
}

//Prints character's armor and strength stats.
void Player::printSubInfo() {
	std::cout << "|Character stats| \n\nArmor: " << ArmorStat << " \nStrength: " << StrengthStat << std::endl << std::endl;
}

//Gets strength stat
int Player::getStrengthStat() { 
	return StrengthStat;
}

//Checks whether main info or stats are printed.
void Player::print(bool s) {
	if (s) {
		Player::printSubInfo();
	}
	else
	{
		Player::printInfo();
	}
}

//Player constructor
Player::Player() {

}

//Player constructor with four paremeters.
Player::Player(std::string n, int h, bool i, int b) {
	setArmorStat(i);
	setStrengthStat(b);
	name = n;
	health = h;
}
