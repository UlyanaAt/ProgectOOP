#pragma once
#include "CharacterBuilder.h"
#include "Director.h"

class CharacterDirector
{
public:
	Character* CreateCharacter(CharacterBuilder& characterBuilder, Director& director);
};

