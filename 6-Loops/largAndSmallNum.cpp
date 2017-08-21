#include <iostream>
#include "largAndSmallNum.h"

void promptLargest(int qtyRequested)
{
	int largest = INT_MIN;
	int current;

	for (int i = 0; i < qtyRequested; i++)
	{
		std::cout << "enter a number" << std::endl;
		std::cin >> current;
		if (current > largest)
			largest = current;
	}

	std::cout << largest << " is the largest number" << std::endl;
}

void promptSmallest(int qtyRequested)
{
	int smallest = INT_MAX;
	int current;

	for (int i = 0; i < qtyRequested; i++)
	{
		std::cout << "enter a number" << std::endl;
		std::cin >> current;
		if (current < smallest)
			smallest = current;
	}

	std::cout << smallest << " is the smallest number" << std::endl;
}