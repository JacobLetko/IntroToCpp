#include <iostream>
#include "rng.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

void seedRng(int x)
{
	srand(x);
	rand();
}

int rng()
{
	srand(time(NULL));
	int x = rand() % 100 + 1;
	return x;
}

int rngRange(int x, int y)
{
	int z = rand() % y + x;
	return z;
}

bool Rngb()
{
	srand(time(NULL));
	int x = rand() % 10 + 1;
	if (x < 6)
		return true;
	else
		return false;
}

bool rngbChance(int x)
{
	srand(time(NULL));
	int y = rand() % 10 + 1;
	if (y < x)
		return true;
	else
		return false;
}