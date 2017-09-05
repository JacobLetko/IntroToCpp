#pragma once
#include <iostream>

inline int AreaOfRectangle()
{
	float rectWidth = 0.0f;  // Modify this variable below.
	std::cout << "please enter width" << std::endl;
	std::cin >> rectWidth;
	float rectHeight = 0.0f; // Modify this variable below.
	std::cout << "please enter height" << std::endl;
	std::cin >> rectHeight;
	float rectArea = 0.0f;   // Modify this variable below.

	rectArea = rectWidth * rectHeight;

	std::cout << "Area of a Rectangle)" << std::endl;
	std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
	std::cout << "Area: " << rectArea << std::endl;

	return 0;
}