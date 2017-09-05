#pragma once
#include <iostream>

inline int A()
{
	int number = 5;

	number = 9;
	number = 11;
	number = 14;

	std::cout << "A) " << number << std::endl;

	return 0;
}

inline int B()
{
	int number = 10;
	number = 9;

	int thing = 55;
	thing = 22;

	std::cout << "B) " << number << std::endl;

	return 0;
}

inline int C()
{
	int number = 3;
	number = 7;
	number = 1;

	int something = 23;
	something = 21;

	number = something;

	std::cout << "C) " << number << std::endl;

	return 0;
}

inline int D()
{
	int number = 1;
	int something = 3;

	number = something;

	std::cout << "D) " << something << std::endl;

	return 0;
}

inline int E()
{
	int x = 13;

	x = x / 2;

	std::cout << "E) " << x << std::endl;

	return 0;
}

inline int F()
{
	float x = 13;

	x = x / 2;

	std::cout << "F)" << x << std::endl;

	return 0;
}