#include "everyOther.h"
#include <iostream>

void everyOther(char sentence[])
{
	for (int i = 0; i < strlen(sentence); i++)
	{
		if (i % 2 != 0)
			std::cout << sentence[i];
	}
	std::cout << "\n";
}
