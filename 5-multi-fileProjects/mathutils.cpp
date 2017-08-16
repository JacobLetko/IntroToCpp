#include <iostream>
#include "mathutils.h"
#include <math.h>		//houses all math functions

// Returns the lesser of two integers.
int min(int a, int b)
{
	if (a < b)
		return a;
	else if (b < a)
		return b;
	else
		return a;
}

// Returns the greater of two integers.
int max(int a, int b)
{
	if (a > b)
		return a;
	else if (b > a)
		return b;
	else
		return a;
}

// Returns a value clamped within a range.
int clamp(int lower, int upper, int value)
{
	if (value > lower && value < upper)
		return value;
	else if (value < lower)
		return lower;
	else if (value > upper)
		return upper;
}

// Returns the distance between two points.
int dist(int x1, int y1, int x2, int y2)
{
	double answer;
	int X = x1 - x2;
	int Y = y1 - y2;
	answer = X + Y;
	answer = sqrt(answer);
	return answer;
}