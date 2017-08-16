#include <iostream>
#include "level.h"
using namespace std;

int strength = 1;
int defense = 1;

void statsUp(int up)
{
	if (up == 1)
		strength++;
	else if (up == 2)
		defense++;
}

void lvlUp()
{
	int answer;
	cout << "what are you upgrading? \n1) strength /n2) defense" << endl;
	cin >> answer;

	statsUp(answer);
}