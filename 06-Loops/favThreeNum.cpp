#include <iostream>
#include "favThreeNum.h"
#include <string>
using namespace std;


int print(string i, int x)
{
	do
	{
		cout << "whats the " << i << " number?" << endl;
		cin >> x;
		if (x < 0)
			cout << "thats not a positive number" << endl;
		else 
			return x;
	} while (x >= 0);

	return x;
}

void favThreeNum()
{
	int first = 0;
	int second = 0;
	int third = 0;
	
	cout << "please enter your favorite three positive numbers" << endl;
	first = print("first", first);
	cout << "first number is " << first << endl;
	second = print("sedond", second);
	cout << "your favorites so far are " << first << " and " << second << endl;
	third = print("third", third);
	cout << "your favorite numbers are " << first << ", " << second << ", and " << third << endl;
}

