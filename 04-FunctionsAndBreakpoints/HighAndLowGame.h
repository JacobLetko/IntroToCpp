#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>

inline int start()
{
	srand(time(NULL));
	int secret = rand() % 10 + 1;
	int guess;
	int play = 0;

	while (play < 5)
	{
		std::cout << "guess a number between 1 and 10" << std::endl;
		std::cin >> guess;

		if (guess > secret)
			std::cout << "to high" << std::endl;
		else if (guess < secret)
			std::cout << "to low" << std::endl;
		else if (guess == secret)
		{
			std::cout << "you win" << std::endl;
			play = 10;
		}
		play++;
		if (play == 5)
			std::cout << "you lose" << std::endl;
	}

	return 0;
}