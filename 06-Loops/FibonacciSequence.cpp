#include <iostream>
#include "FibonacciSequence.h"

void fib(int x, int y)
{
	std::cout << x + y << std::endl;
	system("pause");
	if (x == 0)
		fib(1, 0);
	else if (y == 0)
		fib(1, 1);
	else if (y > 999999)
		std::cout << "" << std::endl;
	else
		fib(y, x + y);
}