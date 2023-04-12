#include "CharacterDirector.h"

Character* CharacterDirector::CreateCharacter(CharacterBuilder& characterBuilder, Director& director)
{
    characterBuilder.CreateCharacter();
    characterBuilder.SetHealth();
    characterBuilder.SetStrenght();
    characterBuilder.SetLuck();
    characterBuilder.SetMana();
    characterBuilder.AddSheild();
    characterBuilder.AddWeapon();
    characterBuilder.AddArmor(director);
    characterBuilder.SetFullCharacteristics();
    characterBuilder.SetisUnderwear();

    return characterBuilder.GetCharacter();
}
