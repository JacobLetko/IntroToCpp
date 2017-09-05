#pragma once
#include <iostream>

inline int Min(int x, int y)
{
	if (x <= y)
		return x;
	else if (y <= x)
		return y;
}