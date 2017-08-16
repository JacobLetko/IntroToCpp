#include <iostream>
#include "mathutils.h"
#include "dtgreet.h"
#include "rng.h"

using namespace std;

int main()
{
	int x = 3;
	int y = 6;

	cout << min(x, y) << endl;
	cout << max(x, y) << endl;
	cout << clamp(x, y, 4) << endl;
	cout << dist(x, y, y, x) << endl;

	system("pause");

	dayGreeting(1,2,3);
	isLeapYear(2017);
	timeGreeting(1,2);

	system("pause");

	cout << rng() << endl;
	cout << (Rngb() ? "true" : "false") << endl;
	cout << (rngbChance(1) ? "true" : "false") << endl;
	cout << rngRange(4, 10) << endl;
	seedRng(20);

	system("pause");

	return 0;
}