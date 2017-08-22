#include <iostream>

void printNumbers(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << numbers[i] << std::endl;
}

int sumNumbers(int numbers[], int size)
{
	int x = 0;

	for (int i = 0; i < size; i++)
	{
		x += numbers[i];
	}

	return x;
}

int LargestValue(int numbers[], int size)
{
	int x = INT_MAX;

	for (int i = 0; i < size; i++)
	{
		if (x > numbers[i])
			x = numbers[i];
	}
	return x;
}