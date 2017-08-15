#pragma once
#include <iostream>

int CA()
{
	int number = 23;

	/*if (number >= 20)
	{
		number *= 5;
	}*/

	number = number >= 20 ? number * 5 : 0;

	return number;
}

int CB()
{
	int number = 6;

	/*if (number < 20)
	{
		number = number - 5;
	}
	else
	{
		number = number / 2;
	}*/

	number = number < 20 ? number - 5 : number / 2;

	return number;
}

int CC()
{
	int number = 6;

	/*if (number < 35)
	{
		number = 1;
	}
	else if (number < 60)
	{
		number = 2;
	}
	else if (number < 70)
	{
		number = 3;
	}
	else
	{
		number = 0;
	}*/

	number = number < 35 ? 1 : number < 60 ? 2 : number < 70 ? 3 : 0;

	return number;
}

inline int start()
{
	std::cout << CA() << std::endl;
	system("pause");
	std::cout << CB() << std::endl;
	system("pause");
	std::cout << CC() << std::endl;
	system("pause");

	return 0;
}