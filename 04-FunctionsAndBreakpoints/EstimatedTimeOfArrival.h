#pragma once
#include <iostream>
#include "distance.h"

inline int ETA(int x1, int x2, int y1, int y2, int speed)
{
	int x = dist(x1, y1, x2, y2);
	return x / speed;
}