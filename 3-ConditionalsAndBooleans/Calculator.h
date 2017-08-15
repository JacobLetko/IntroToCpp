#pragma once
#include <iostream>

inline int cal()
{
	int x;
	int y;
	std::cout << "enter two numbers" << std::endl;
	std::cin >> x;
	std::cin >> y;

	char op;
	std::cout << "enter a operator" << std::endl;
	std::cin >> op;

	if (op == '+')
		std::cout << x << " + " << y << " = " << x + y << std::endl;
	else if (op == '-')
		std::cout << x << " - " << y << " = " << x - y << std::endl;
	else if (op == '*')
		std::cout << x << " * " << y << " = " << x*y << std::endl;
	else if (op == '/')
	{
		if (x == 0 || y == 0)
			std::cout << "sorry thats not available" << std::endl;
		else
			std::cout << x << " / " << y << " = " << x / y << std::endl;
	}

	return 0;
}