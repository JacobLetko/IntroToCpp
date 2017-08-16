#pragma once
#include <iostream>

inline int Max(int x, int y)
{
	if (x >= y)
		return x;
	else if (y >= x)
		return y;
}