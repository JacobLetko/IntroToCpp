#pragma once
#include <iostream>
#include "Max.h"
#include "Min.h"

inline int clamp(int x, int y, int z)
{
	int min = Min(x, z);

	int max = Max(x, z);

	if (z > min && z < max)
		return z;
	else if (z < min)
		return min;
	else if (z > max)
		return max;
}