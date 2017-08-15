#pragma once
#include <iostream>

inline int A()
{
	int numberA = 15;
	if (numberA > 10)
	{
		numberA = numberA * 2;
	}

	std::cout << "A) " << numberA << std::endl;

	return 0;
}

inline int B() 
{
	int numberB = 15;
	if (numberB < 15)
	{
		numberB = numberB * 3;
	}

	std::cout << "B) " << numberB << std::endl;

	return 0;
}

inline int C() 
{
	int numberC = 12;
	if (numberC == 12)
	{
		numberC = numberC * 2;
	}

	std::cout << "C) " << numberC << std::endl;

	return 0;
}

inline int D() 
{
	int numberD = 12;
	if (numberD <= 12)
	{
		numberD = numberD * 0;
	}

	std::cout << "D) " << numberD << std::endl;

	return 0;
}

inline int E() 
{
	int numberE = 14;
	if (numberE >= 12)
	{
		numberE *= 4;
	}

	std::cout << "E) " << numberE << std::endl;

	return 0;
}

inline int F() 
{
	int numberF = 6;
	if (numberF == 0)
	{
		numberF = 0;
	}
	else if (numberF > 10)
	{
		numberF = 1;
	}

	std::cout << "F) " << numberF << std::endl;

	return 0;

}

inline int G() 
{
	int numberG = 6;

	if (numberG < 0)
	{
		numberG = 0;
	}
	else if (numberG < 2)
	{
		numberG = 1;
	}
	else if (numberG < 5)
	{
		numberG = 2;
	}
	else
	{
		numberG = 3;
	}
	std::cout << "G) " << numberG << std::endl;

	return 0;
}