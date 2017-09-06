#include <iostream>
#include<windows.h>
#include <thread>
#include <string>

#include "textanimations.h"

void colorFunction(int x)//changes color for the lines not entire console
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}

void delay(int delay, std::string text)//prints each char slowly in a string
{
	for (int i = 0; i < text.length(); i++)
	{
		std::cout << text[i];
		Sleep(delay);
	}
}

void delaySkip(int delay, std::string text)//prints each char slowly in a string
{
	for (int i = 0; i < text.length(); i++)
	{
		std::cout << text[i];
		Sleep(delay);
	}
	std::cout << "\n";
}

void test(int x, int y) // test colors between ciertin numbers
{
	for (int i = x; i <= y; i++)
	{
		colorFunction(i);
		delay(60, "test ");
		std::cout << i << std::endl;
	}
}

int powers(int x, int y)
{
	int ans = x;
	for (int i = 1; i < y; i++)
		ans = ans * x;
	return ans;
}