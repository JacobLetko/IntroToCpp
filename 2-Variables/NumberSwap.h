#pragma once
#include <iostream>

inline int numswap()
{
	int x = 13;
	int y = 24;
	
	//int z = x;
	//x = y;
	//y = z;
	
	x = y + x;
	y = x - y;
	x = x - y;

	std::cout << "Number Swap)" << std::endl;
	std::cout << "x is " << x << std::endl;
	std::cout << "y is " << y << std::endl;

	return 0;
}