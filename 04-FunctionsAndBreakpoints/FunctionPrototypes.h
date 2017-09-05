#pragma once
#include <iostream>

int hello()
{
	std::cout << "Hello functions!!" << std::endl;
	
	return 0;
}

int square(int x)
{
	for (int i = 1; i < x / 2; i++)
	{
		if (i*i == x)
			return i;
	}

	return 0;
}

double fractions(int x, int y)
{
	double z;

	z = x / y;
	
	return z;
}

int sub(int x, int y, int z)
{
	int a = 0;
	int b = 0;
	int c = 0;

	a = x - y;
	b = x - z;
	c = z - y;

	if (a > b && a > c)
		return a;
	else if (b > a&&b > c)
		return b;
	else if (c > a &&c > b)
		return c;
	else
		return 0;
}