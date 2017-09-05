#pragma once
#include <iostream>

inline int clampNum()
{
	std::cout << "enter a number" << std::endl;
	int num;
	std::cin >> num;

	if (num > 30)
		std::cout << "30" << std::endl;
	else if (num < 15)
		std::cout << "15" << std::endl;
	else
		std::cout << num << std::endl;
	
	return 0;
}