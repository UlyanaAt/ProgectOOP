#include "AssassinBuilder.h"

void AssassinBuilder::CreateCharacter()
{
	character = new Character;
}

void AssassinBuilder::SetHealth()
{
	character->Health = Suplimental::RandZeroToHundr();
}

void AssassinBuilder::SetStrenght()
{
	character->Strenght = Suplimental::RandZeroToHundr();
}

void AssassinBuilder::SetLuck()
{
	character->Luck = Suplimental::RandZeroToHundr();
}

void AssassinBuilder::AddArmor(Director& director)
{
	ArmorBuilder AssasinArmorBuilder;
	character->ArmorOfCharacter = director.createArmor(AssasinArmorBuilder);
}

void AssassinBuilder::AddWeapon()
{
	character->Weapon = Suplimental::RandZeroToHundr();
}

void AssassinBuilder::SetFullCharacteristics()
{
	character->FullCharacteristics = character->Health + character->Strenght + character->Luck + character->Weapon + character->ArmorOfCharacter->GetTotalArmor();
}
