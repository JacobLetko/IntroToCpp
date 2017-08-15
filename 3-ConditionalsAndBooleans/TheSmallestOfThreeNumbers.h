#pragma once
#include <iostream>

inline int smallest()
{
	int x;
	int y;
	int z;

	std::cout << "please enter three diffrent numbers" << std::endl;
	std::cin >> x;
	std::cin >> y;
	std::cin >> z;

	if (x < y && x < z)
		std::cout << x << " is the smallest number" << std::endl;
	else if (y < x&&y < z)
		std::cout << y << " is the smallest number" << std::endl;
	else
		std::cout << z << " is the smallest number" << std::endl;

	return 0;
}