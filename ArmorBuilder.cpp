#include "ArmorBuilder.h"

void ArmorBuilder::createArmor()
{
	armor = new Armor;

	armor->Hat = 0;
	armor->Body = 0;
	armor->Gloves = 0;
	armor->Pants = 0;
	armor->Boots = 0;
	armor->Underwear = 0;
}

void ArmorBuilder::addHat()
{
	armor->Hat = 10;
}

void ArmorBuilder::addBody()
{
	armor->Body = 20;
}

void ArmorBuilder::addGloves()
{
	armor->Gloves = 5;
}

void ArmorBuilder::addPants()
{
	armor->Pants = 10;
}

void ArmorBuilder::addBoots()
{
	armor->Boots = 5;
}

void ArmorBuilder::addUnderwear()
{
	armor->Underwear = 5;
}

Armor* ArmorBuilder::GetArmor()
{
	return armor;
}
