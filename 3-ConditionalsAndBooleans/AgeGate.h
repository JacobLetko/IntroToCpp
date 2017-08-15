#pragma once
#include <iostream>

inline int ageGate()
{
	int age;
	std::cout << "please enter your age" << std::endl;
	std::cin >> age;

	if (age < 18)
		std::cout << "you are a minor" << std::endl;
	else if (age >= 65)
		std::cout << "you are eligible for retirment benefits" << std::endl;
	else if (age >= 50)
		std::cout << "you are eligible to join AARP" << std::endl;
	else if (age >= 18)
		std::cout << "you are an adult" << std::endl;
	
	return 0;
}