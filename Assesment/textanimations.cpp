#include <iostream>
#include<windows.h>
#include <thread>
#include <chrono>
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