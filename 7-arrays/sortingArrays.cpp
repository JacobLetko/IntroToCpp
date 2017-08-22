#include <iostream>
#include <stdio.h>
#include "printArrays.h"

int findIndex(int numbers[], int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] == value)
			return i;
		else if (i == size - 1)
			return -1;
	}
	return -1;
}

bool uniqueness(int numbers[], int size, int num[], int size2)
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size2; j++)
			if (numbers[i] == num[j])
				return false;
	return true;
}

void reverse(int numbers[], int size)
{
	for (int i = 0; i < size/2; i++)
	{
		for (int j = size; j > size / 2 + 1; j--)
		{
			numbers[i] = numbers[j] + numbers[i];
			numbers[j] = numbers[i] - numbers[j];
			numbers[i] = numbers[i] - numbers[j];
		}
	}
		
		
}

void ascendSort(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (numbers[j] > numbers[j++])
			{
				numbers[j] = numbers[j++] + numbers[j];
				numbers[j++] = numbers[j] - numbers[j++];
				numbers[j] = numbers[j] - numbers[j++];
			}
		}
	}
}

void descendSort(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (numbers[j] < numbers[j++])
			{
				numbers[j] = numbers[j++] + numbers[j];
				numbers[j++] = numbers[j] - numbers[j++];
				numbers[j] = numbers[j] - numbers[j++];
			}
		}
	}
}

void insertSort(int numbers[], int size)
{
	int current;
	int replaced;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (numbers[j] <numbers[i])
			{
				replaced = numbers[j];
				numbers[j] = numbers[i];
				numbers[i] = replaced;
				
			}
		}
	}

	printNumbers(numbers, size);
	
}