#pragma once
#include <iostream>

inline double dist(int x1, int y1, int x2, int y2)
{
	int X = x2 - x1;
	int Y = y2 - y1;
	int z;

	X = X * X;
	Y = Y * Y;

	z = X + Y;

	for (int i = 1; i < z; i++)
	{
		if (i*i == z)
			return i;
	}
}