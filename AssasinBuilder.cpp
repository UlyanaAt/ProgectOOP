#include "AssasinBuilder.h"

void AssasinBuilder::CreateCharacter()
{
	character = new Character;
}

void AssasinBuilder::SetHealth()
{
	character->Health = Suplimental::RandZeroToHundr();
}

void AssasinBuilder::SetStrenght()
{
	character->Strenght = Suplimental::RandZeroToHundr();
}

void AssasinBuilder::SetLuck()
{
	character->Luck = Suplimental::RandZeroToHundr();
}

void AssasinBuilder::AddArmor(Director& director)
{
	ArmorBuilder AssasinArmorBuilder;
	character->ArmorOfCharacter = director.createArmor(AssasinArmorBuilder);
}

void AssasinBuilder::AddWeapon()
{
	character->Weapon = Suplimental::RandZeroToHundr();
}

void AssasinBuilder::SetFullCharacteristics()
{
	character->FullCharacteristics = character->Health + character->Strenght + character->Luck + character->Weapon + character->ArmorOfCharacter->GetTotalArmor();
}
