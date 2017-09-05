#pragma once
#include <iostream>

inline int age()
{
	int age;
	std::cout << "enter your age" << std::endl;
	std::cin >> age;

	// <You must add more lines to output to the terminal>
	std::cout << "Howdy! You are " << age << " years old! \n" << age *12 <<" months old \n" << age/10 << " decades \n" << age /20 << " scores" << std::endl;


	return 0;
}