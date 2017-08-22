#include <iostream>
#include <cmath>

#include "vector2D.h"

vector sum(vector one, vector two)
{
	vector x{ one.X + two.X, one.Y + two.Y };
	return x;
}

vector diff(vector one, vector two)
{
	vector x{ one.X - two.X, one.Y - two.Y };
	return x;
}

float distance(vector one, vector two)
{
	//sqrt((x1-x2)+(y1-y2))    distance formula
	return sqrt((one.X - two.X) + (one.Y - two.Y));
}

void PrintVec(vector a)
{
	std::cout << "X: " << a.X << " Y: " << a.Y << std::endl;
}
