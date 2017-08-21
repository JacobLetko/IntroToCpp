#include <iostream>
#include "evenOdd.h"

void evenOdd(int start, int end)
{
	int x = start;

	for (int i = 0; i <= end - start; i++)
	{
		if (x%2 == 0)
			std::cout << "even" << std::endl;
		else
			std::cout << "odd" << std::endl;
		x++;
	}
}