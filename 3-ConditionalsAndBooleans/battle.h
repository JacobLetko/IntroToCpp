#pragma once
#include <iostream>

inline int battle()
{
	int player = 0;
	int dino = 0;
	int choices;
	int blade = 0;
	int fo = 0;
	char power;
	
	std::cout << "how would you rate your strength on a scale of 1 to 10?" << std::endl;
	std::cin >> choices;
	if (choices > 4)
		player++;
	else if (choices < 4)
		dino++;
	else if (choices > 9)
		fo++;

	std::cout << "what did you take to battle with you?\n1) a sack of potatos\n2) an invisibility cape\n3) the mango blade" << std::endl;
	std::cin >> choices;
	if (choices == 1)
		dino++;
	else if (choices == 3)
	{
		blade++;
		player++;
	}

	std::cout << "how many battles have you fought?" << std::endl;
	std::cin >> choices;
	if (choices > 2)
		player++;
	else if (choices < 2)
		dino++;

	std::cout << "did you get enough sleep (y/n)" << std::endl;
	std::cin >> power;
	if (power == 'n')
		dino++;
	else if (power == 'y')
		fo++;

	std::cout << "how much vitamin C do you get evrey day? (mg)" << std::endl;
	std::cin >> choices;
	if (choices >= 75)
		blade++;

	std::cout << "how much intelegence do you have on a scale of 1 to 10?" << std::endl;
	std::cin >> choices;
	if (choices > 4)
		player++;
	if (choices > 9)
		fo++;
	if (choices < 3)
		dino++;

	if (fo == 3)
		player += 3;
	if (blade == 2)
		player += 1;

	if (player > dino)
		std::cout << "you win" << std::endl;
	else if (player < dino)
		std::cout << "the dinasoaur wins" << std::endl;
	else
		std::cout << "its a tie" << std::endl;

	return 0;
}