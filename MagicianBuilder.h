#pragma once
#include "CharacterBuilder.h"

class MagicianBuilder: public CharacterBuilder
{
public:
	void CreateCharacter();
	void SetHealth();
	void SetStrenght();
	void SetLuck();
	void AddArmor(Director& director);
	void SetMana();
	void SetFullCharacteristics();
};

