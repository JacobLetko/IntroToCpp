#pragma once
#include <iostream>

inline int average()
{
	float a, b, c, d, e;    // Modify these variables below.
	float avg;              // Modify this variable below.
	avg = a = b = c = d = e = 0.0f; // Initialize all to zero.

	std::cout << "please enter five numbers and hit enter after each one" << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;

	avg = (a + b + c + d + e) / 5;

	std::cout << "Average of Five)" << std::endl;
	std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
	std::cout << "avg: " << avg << std::endl;

	return 0;
}