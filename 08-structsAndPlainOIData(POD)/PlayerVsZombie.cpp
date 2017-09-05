#include <iostream>

#include "PlayerVsZombie.h"

void fight(stats &player, stats &zombie)
{
	while (player.HP > 0 && zombie.HP > 0) 
	{
		int answer = 0;
		int defend = 0;

		std::cout << "you" << std::endl;
		printStats(player);
		std::cout << std::endl;

		std::cout << "zombie" << std::endl;
		printStats(zombie);
		std::cout << std::endl;

		std::cout << "what would you like to do \n 1) attack \n 2) defend" << std::endl;
		std::cin >> answer;
		if (answer == 1)
			zombie.HP -= (player.atk - zombie.def);
		else if (answer == 2)
			defend += player.def;

		if(defend+player.def < zombie.atk)
			player.HP -= zombie.atk - (defend + player.def);
	}

	if (player.HP <= 0)
		std::cout << "you lost" << std::endl;
	else
		std::cout << "you won" << std::endl;
}

void printStats(stats avatar)
{
	std::cout << "HP : "<< avatar.HP << std::endl;
	std::cout << "atk : " << avatar.atk << std::endl;
	std::cout << "def : " << avatar.def << std::endl;
}
