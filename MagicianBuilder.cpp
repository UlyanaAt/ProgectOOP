#include "MagicianBuilder.h"

void MagicianBuilder::CreateCharacter()
{
	character = new Character;
}

void MagicianBuilder::SetHealth()
{
	character->Health = Suplimental::RandZeroToHundr();
}

void MagicianBuilder::SetStrenght()
{
	character->Strenght = Suplimental::RandZeroToHundr();
}

void MagicianBuilder::SetLuck()
{
	character->Luck = Suplimental::RandZeroToHundr();
}

void MagicianBuilder::AddArmor(Director& director)
{
	ArmorBuilder MagicianArmorBuilder;
	character->ArmorOfCharacter = director.createArmor(MagicianArmorBuilder);
}

void MagicianBuilder::SetMana()
{
	character->Mana = Suplimental::RandZeroToHundr();
}

void MagicianBuilder::SetFullCharacteristics()
{
	character->FullCharacteristics = character->Health + character->Strenght + character->Luck + character->Mana + character->ArmorOfCharacter->GetTotalArmor();
}
