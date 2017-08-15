#pragma once
#include <iostream>

inline int EvenOrOdd()
{
	
	std::cout << "please enter a whole number" << std::endl;
	int num;
	std::cin >> num;

	if (num % 2) //comes out as 0 if even making it false
		std::cout << num << " is odd" << std::endl;
	else
		std::cout << num << " is even" << std::endl;

	return 0;
}