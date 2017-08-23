#include <iostream>
#include "Battle.h"

int math(stats &player, int attack)
{
	if (attack == 1) 
	{
		std::cout << "you attack" << std::endl;
		return player.ATK;
	}
	else if (attack == 2) 
	{
		std::cout << "you use magic to attack" << std::endl;
		return player.intel;
	}
	else if (attack == 3) 
	{
		std::cout << "you use power attack and lose " << player.LVL / 2 << " HP" << std::endl;
		player.remaingHP -= player.LVL / 2;
		return player.ATK + player.LVL^2;
	}
	else if (attack == 4) 
	{
		std::cout << "you defend" << std::endl;
		return player.DEF;
	}
	return 0;
}

void status(stats player, stats enemy)
{
	std::cout << "Player" << std::endl;
	std::cout << "HP : " << player.remaingHP << std::endl;

	std::cout << "\n" << std::endl;

	std::cout << "ENEMY" << std::endl;
	std::cout << "HP : " << enemy.remaingHP << std::endl;
}

int fight(stats &player, stats enemy)
{
	int xp = 0;

	while (player.remaingHP > 0 && enemy.remaingHP > 0)
	{
		status(player, enemy);
		
		int option;
		std::cout << "\n" << std::endl;

		std::cout << "what would you like to do? \n 1) attack \n 2) magic attack \n 3) power attack \n 4) defend" << std::endl;
		std::cin >> option;
		std::cout << "\n" << std::endl;
		int power = math(player, option);
		if (option == 4)
		{
			if (player.DEF + power >= enemy.ATK)
				std::cout << "you take no damage!!" << std::endl;
			else
			{
				player.remaingHP -= (player.DEF + power) - enemy.ATK;
				std::cout << "you have taken " << (player.DEF + power) - enemy.ATK << " damage!!" << std::endl;
			}
		}
		else
		{
			if (power <= enemy.DEF)
				std::cout << "you did no damage!!!!" << std::endl;
			else
			{
				std::cout << "you did " << power - enemy.DEF << " damage" << std::endl;
				enemy.remaingHP -= power - enemy.DEF;
			}

			if (enemy.ATK <= player.DEF)
				std::cout << "you take no damage!!" << std::endl;
			else
			{
				std::cout << "you take " << enemy.ATK - player.DEF << " damage" << std::endl;
				player.remaingHP -= enemy.ATK - player.DEF;
			}
		}

		if (enemy.remaingHP <= 0 && player.remaingHP > 0)
		{
			std::cout << "you won" << std::endl;
			xp += enemy.LVL * 5;
		}
		else if (player.remaingHP <= 0 && enemy.remaingHP > 0)
		{
			std::cout << "you lose" << std::endl;
			xp = 0;
		}
	}

	return xp;
}