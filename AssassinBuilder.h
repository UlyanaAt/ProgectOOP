#pragma once
#include "CharacterBuilder.h"

class AssassinBuilder : public CharacterBuilder
{
	void CreateCharacter();
	void SetHealth();
	void SetStrenght();
	void SetLuck();
	void AddArmor(Director& director);
	void AddWeapon();
	void SetFullCharacteristics();
};

