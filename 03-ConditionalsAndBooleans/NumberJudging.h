#pragma once
#include <iostream>

inline int numJudge()
{
	int num;
	std::cout << "please enter a number that is between 1 and 100" << std::endl;
	std::cin >> num;

	if (num > 50)
		std::cout << (num) << " is a large number" << std::endl;
	else if (num < 50)
		std::cout << (num) << " is a small number" << std::endl;
	else
		std::cout << num << " is a balanced number" << std::endl;

	return 0;
}