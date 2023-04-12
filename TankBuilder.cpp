#include "TankBuilder.h"

void TankBuilder::CreateCharacter()
{
	character = new Character;
}

void TankBuilder::SetHealth()
{
	character->Health = Suplimental::RandZeroToHundr();
}

void TankBuilder::SetStrenght()
{
	character->Strenght = Suplimental::RandZeroToHundr();
}

void TankBuilder::SetLuck()
{
	character->Luck = Suplimental::RandZeroToHundr();
}

void TankBuilder::AddArmor(Director& director)
{
	ArmorBuilder TankArmorBuilder;
	character->ArmorOfCharacter = director.createArmor(TankArmorBuilder);
}

void TankBuilder::AddSheild()
{
	character->Sheild = Suplimental::RandZeroToHundr();
}

void TankBuilder::SetFullCharacteristics()
{
	character->FullCharacteristics = character->Health + character->Strenght + character->Luck + character->Sheild + character->ArmorOfCharacter->GetTotalArmor();
}
