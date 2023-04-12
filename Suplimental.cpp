#include "Suplimental.h"
#include <ctime>
#include <iostream>

int Suplimental::RandZeroToHundr()
{
	int RandNumb = 0;
	RandNumb = 1 + rand() % 100;

	return RandNumb;
}
