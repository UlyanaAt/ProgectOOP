#include "Armor.h"

int Armor::GetTotalArmor()
{
    TotalArmor = Hat + Body + Gloves + Pants + Boots + Underwear;
    if (Underwear == 0)
    {
        TotalArmor = TotalArmor - 40;
    }
    return TotalArmor;
}

bool Armor::GetisUnderwear()
{
    if (Underwear == 0)
    {
        isUnderwear = 0;
        return isUnderwear;
    }
    else
    {
        isUnderwear = 1;
        return isUnderwear;
    }
}
