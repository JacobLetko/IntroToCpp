#include <iostream>
#include "Battle.h"
#include "level.h"

int main()
{
	bool play = true;
	int exp = 0;
	int lvl = 1;
	int option;

	while (play)
	{
		if (option = 1)
		{
			exp = fight();
			if (exp >= ((lvl / 2) * 8))
			{
				lvlUp();
			}
		}
		if (option = 2)
			play = false;
	}

}