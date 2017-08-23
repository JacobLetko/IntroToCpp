#include <iostream>

#include "Battle.h"
#include "textanimations.h"

int math(stats &player, int attack)
{
	if (attack == 1) 
	{
		delay(20, " You attack");
		return player.ATK;
	}
	else if (attack == 2) 
	{
		delay(20, " You use magic to attack");
		return player.intel;
	}
	else if (attack == 3) 
	{
		
		delay(20, " You use power attack and lose ");
		std::cout <<  player.LVL / 2  << std::endl;
		delay(20, " HP");
		std::cout << "\n";
		player.remaingHP -= player.LVL / 2;
		return player.ATK + player.LVL^2;
	}
	else if (attack == 4) 
	{
		delay(20, " You defend");
		std::cout << "\n";
		return player.DEF;
	}
	return 0;
}

void status(stats player, stats enemy)
{
	delay(20, " Player");
	std::cout << "\n";
	delay(20, " HP : "); std::cout << player.remaingHP << std::endl;

	std::cout << "\n" << std::endl;

	delay(20," Enemy");
	std::cout << "\n";
	delay(20, " HP : "); std::cout << enemy.remaingHP << std::endl;
}

int fight(stats &player, stats enemy)
{
	int xp = 0;
	if (player.remaingHP <= 0)
		delay(20, " You are to tired to fight go rest");
		std::cout << "\n";
	
	while (player.remaingHP > 0 && enemy.remaingHP > 0)
	{
		status(player, enemy);
		
		int option;
		std::cout << "\n";
		delay(20, " what would you like to do?");
		std::cout << "\n";
		delay(20, " 1) Attack");
		std::cout << "\n";
		delay(20," 2) magic attack");
		std::cout << "\n";
		delay(20, " 3) power attack");
		std::cout << "\n";
		delay(20, " 4) defend");
		std::cout << "\n";
		std::cin >> option;
		std::cout << "\n";
		int power = math(player, option);
		
		if (option == 4)
		{
			if (player.DEF + power >= enemy.ATK && player.remaingHP > 0 && enemy.remaingHP > 0)
			{
				delay(20, " You take no damage!!");
				std::cout << "\n";
			}
			else if(player.remaingHP > 0 && enemy.remaingHP > 0)
			{
				player.remaingHP -= (player.DEF + power) - enemy.ATK;
				delay(20, " You have taken "); std::cout << (player.DEF + power) - enemy.ATK; delay(20, " damage!!");
				std::cout << "\n";
			}
		}
		else
		{
			if (power <= enemy.DEF && player.remaingHP > 0 && enemy.remaingHP > 0)
			{
				delay(20, " You did no damage!!!!");
				std::cout << "\n";
			}
			else if(player.remaingHP > 0 && enemy.remaingHP > 0)
			{
				delay(20, " You did "); std::cout << power - enemy.DEF; delay(20, " damage");
				std::cout << "\n";
				enemy.remaingHP -= power - enemy.DEF;
			}

			if (enemy.ATK <= player.DEF && player.remaingHP > 0 && enemy.remaingHP > 0)
			{
				delay(20, " You take no damage!!");
				std::cout << "\n";
			}
			else if(player.remaingHP > 0 && enemy.remaingHP > 0)
			{
				delay(20, " Enemy attacks");
				std::cout << "\n";
				delay(20, " You take ");  std::cout << enemy.ATK - player.DEF; delay(20, " damage");
				player.remaingHP -= enemy.ATK - player.DEF;
				std::cout << "\n";
			}
		}

		if (enemy.remaingHP <= 0 && player.remaingHP > 0)
		{
			delay(20, " You won");
			std::cout << "\n";
			xp += enemy.LVL * 5;
		}
		else if (player.remaingHP <= 0 && enemy.remaingHP > 0)
		{
			delay(20, " You lose");
			std::cout << "\n";
			xp = 0;
		}
	}

	return xp;
}