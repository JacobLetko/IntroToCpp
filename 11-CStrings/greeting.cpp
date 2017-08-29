#include "greeting.h"
#include <iostream>

void greeting(char name[])
{
	std::cout << "Hello " << name << std::endl;
}

void color(char color[])
{
	char red[] = "red";
	char orange[] = "orange";
	char yellow[] = "yellow";
	char green[] = "green";
	char blue[] = "blue";
	char violet[] = "violet";
	
	if (strcmp(color, red) == 0)
		std::cout << "" << std::endl;
	else if (strcmp(color, orange) == 0)
		std::cout << "" << std::endl;
	else if (strcmp(color, yellow) == 0)
		std::cout << "" << std::endl;
	else if (strcmp(color, green) == 0)
		std::cout << "" << std::endl;
	else if (strcmp(color, blue) == 0)
		std::cout << "" << std::endl;
	else if (strcmp(color, violet) == 0)
		std::cout << "" << std::endl;
}

void whiteSpace(char input[])
{
	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] != ' ')
			std::cout << input[i];
	}
	std::cout << "\n";
}

void prompt()
{
	std::string ans = "";
	std::cout << "what is your name?" << std::endl;
	std::getline(std::cin, ans);
	greeting(&ans[0u]);
	std::cout << "What is your favorite color?" << std::endl;
	std::getline(std::cin, ans);
	color(&ans[0u]);
	std::cout << "enter a sentence" << std::endl;
	std::getline(std::cin, ans);
	whiteSpace(&ans[0u]);
}

