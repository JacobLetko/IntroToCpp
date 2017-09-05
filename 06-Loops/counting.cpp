#include "counting.h"
#include <iostream>
using namespace std;
void one()
{
	for (int i = 1; i < 101; i++)
		cout << i << endl;
}

void hundred()
{
	int i = 100;
	while (i > 0)
	{
		cout << i << endl;
		i--;
	}
}

void years()
{
	int i = 1995;
	do
	{
		cout << i << endl;
		i++;
	} while (i <= 2017);
}