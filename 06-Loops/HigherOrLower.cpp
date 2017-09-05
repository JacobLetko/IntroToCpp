#include "HigherOrLower.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

void guessingGame(int low, int high, int guesses)
{
	srand(time(NULL));
	int num = rand() % high + low;
	int guess;

	std::cout << "Generated a random number between " << low << " and  " << high << " you have " << guesses << " to get it right" << std::endl;

	for (int i = 1; i <= guesses; i++)
	{
		std::cout << "round " << i << " - make your guess" << std::endl;
		std::cin >> guess;

		if (guess > num)
			std::cout << "thats to high" << std::endl;
		else if (guess < num)
		{
			std::cout << "thats to low" << std::endl;
			if (i == guesses)
				std::cout << "you lose" << std::endl;
		}
		else if (guess == num)
		{
			std::cout << "congrats you got it right" << std::endl;
			i += guesses;
		}
	}
}
