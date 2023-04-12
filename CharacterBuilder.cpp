#include "CharacterBuilder.h"
#include "Armor.h"

Character* CharacterBuilder::GetCharacter()
{
    return character;
}

void CharacterBuilder::SetFullCharacteristics()
{
}

void CharacterBuilder::SetisUnderwear()
{
    if (character->ArmorOfCharacter->GetisUnderwear())
    {
        character->isUnderwear = 1;
    }
    else
    {
        character->isUnderwear = 0;
    }
}

void CharacterBuilder::CreateCharacter()
{
}

void CharacterBuilder::SetHealth()
{
}

void CharacterBuilder::SetStrenght()
{
}

void CharacterBuilder::SetLuck()
{
}

void CharacterBuilder::AddArmor(Director& director)
{
}

void CharacterBuilder::SetMana()
{
}

void CharacterBuilder::AddSheild()
{
}

void CharacterBuilder::AddWeapon()
{
}
