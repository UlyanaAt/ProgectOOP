#pragma once
#include "CharacterBuilder.h"

class TankBuilder: public CharacterBuilder
{
	void CreateCharacter();
	void SetHealth();
	void SetStrenght();
	void SetLuck();
	void AddArmor(Director& director);
	void AddSheild();
	void SetFullCharacteristics();
};

