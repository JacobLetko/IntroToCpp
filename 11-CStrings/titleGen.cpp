#include "titleGen.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

void titleGen(char first[], char last[])
{
	srand(time(NULL));
	int x = rand() % 100 + 1;
	
	if (x < 10)
		std::cout << first << " Elder of " << last << " Demons" << std::endl;
	else if (x >= 11 && x < 20)
		std::cout << first << " Minister of Magic" << std::endl;
	else if (x <= 21 && x < 30)
		std::cout << first << " Elder of the Flame" << std::endl;
	else if (x <= 31 && x < 40)
		std::cout << first << " Master of Sports" << std::endl;
	else if (x <= 41 && x < 50)
		std::cout << "Prince " << last << " of Ice" << std::endl;
	else if (x <= 51 && x < 60)
		std::cout << first << " Head of Justice" << std::endl;
	else if (x <= 61 && x < 70)
		std::cout << first << " Minister of Food" << std::endl;
	else if (x <= 71 && x < 80)
		std::cout << "Doctor " << last << " of the Undying" << std::endl;
	else if (x <= 81 && x < 90)
		std::cout << last << " Lord of the New Age" << std::endl;
	else if (x <= 91)
		std::cout << "Sir " << last << " of Science" << std::endl;
}
