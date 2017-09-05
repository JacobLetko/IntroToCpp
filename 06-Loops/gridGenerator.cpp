#include <iostream>
#include "gridGenerator.h"

void grid(int width, int height)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << "X";
		}
		std::cout << "" << std::endl;
	}
}