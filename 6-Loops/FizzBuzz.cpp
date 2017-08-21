#include <iostream>
#include "FizzBuzz.h"

void FizzBuzz(int start, int end)
{
	int x = start;

	for (int i = 0; i < end - start; i++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			std::cout << "FizzBuzz" << std::endl;
		else if (x % 5 == 0)
			std::cout << "Buzz" << std::endl;
		else if (x % 3 == 0)
			std::cout << "Fizz" << std::endl;
		else
			std::cout << x << std::endl;
		x++;
	}
}