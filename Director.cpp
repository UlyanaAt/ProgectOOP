#include "Director.h"
#include "Suplimental.h"

Armor* Director::createArmor(ArmorBuilder& builder)
{
    builder.createArmor();

    if (Suplimental::RandZeroToHundr() > 50)
    {
        builder.addHat();
    }
    if (Suplimental::RandZeroToHundr() > 50)
    {
        builder.addBody();
    }
    if (Suplimental::RandZeroToHundr() > 50)
    {
        builder.addGloves();
    }
    if (Suplimental::RandZeroToHundr() > 50)
    {
        builder.addPants();
    }
    if (Suplimental::RandZeroToHundr() > 50)
    {
        builder.addBoots();
    }
    if (Suplimental::RandZeroToHundr() > 50)
    {
        builder.addUnderwear();
    }

    return(builder.GetArmor());

}
