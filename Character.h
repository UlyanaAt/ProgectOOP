#pragma once
#include "Armor.h" 
#include "Suplimental.h"

class Character
{
public:
	bool isUnderwear;
	int Health;
	int Strenght;
	int Luck;
	int Mana;
	int Sheild;
	int Weapon;
	int FullCharacteristics;
	Armor* ArmorOfCharacter;
	~Character();
};

