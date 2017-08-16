#pragma once
#include <iostream>
#include "Max.h"
#include "Min.h"

inline int clamp(int x, int y, int z)
{
	int minxy = Min(x, y);
	int minxz = Min(x, z);
	int min = Min(minxy, minxz);

	int maxxy = Max(x, y);
	int maxxz = Max(x, z);
	int max = Max(maxxy, maxxz);

	if (z > min && z < max)
		return z;
	else if (z < min)
		return min;
	else if (z > max)
		return max;
}