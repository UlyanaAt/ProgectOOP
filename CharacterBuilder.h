#pragma once
#include "Character.h"
#include "Director.h"
class CharacterBuilder
{
protected: 
	Character* character;
public:
	CharacterBuilder() : character(0) {};
	virtual void CreateCharacter();
	virtual void SetHealth();
	virtual void SetStrenght();
	virtual void SetLuck();
	virtual void AddArmor(Director& director);
	virtual void SetMana();
	virtual void AddSheild();
	virtual void AddWeapon();
	virtual Character* GetCharacter();
	virtual void SetFullCharacteristics();
	void SetisUnderwear();
};

