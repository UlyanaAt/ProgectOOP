#pragma once
#include "Armor.h"
class ArmorBuilder
{
protected:
	Armor* armor;
public:
	ArmorBuilder() : armor(0) {};
	void createArmor();
	void addHat();
	void addBody();
	void addGloves();
	void addPants();
	void addBoots();
	void addUnderwear();
	Armor* GetArmor();
};

