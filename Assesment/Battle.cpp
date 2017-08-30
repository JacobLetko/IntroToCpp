#include <iostream>

#include "Battle.h"
#include "textanimations.h"
#include "moves.h"

int math(stats &player, int attack, stats enemy)
{
	if (attack == 1) 
	{
		delay(20, " You attack");
		std::cout << "\n";
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
		std::cout <<  player.LVL / 2 + 1;
		delay(20, " HP");
		std::cout << "\n";
		player.remaingHP -= player.LVL / 2 + 1;
		return player.ATK + player.LVL;
	}
	else if (attack == 4) 
	{
		delay(20, " You defend");
		std::cout << "\n";
		return player.DEF;
	}
	else if (attack == 5)
	{
		return specialMoves(player, enemy);
	}
	return 0;
}
//displays stats of player and enemy
void status(stats player, stats enemy)
{
	colorFunction(160);
	delay(20, " Player");
	colorFunction(0);
	std::cout << "\n";
	colorFunction(160);
	delay(20, " HP : "); 
	std::cout << player.remaingHP;
	colorFunction(0);
	std::cout << "\n";

	std::cout << "\n" << std::endl;

	colorFunction(192);
	delay(20," Enemy");
	colorFunction(0);
	std::cout << "\n";
	colorFunction(192);
	delay(20, " HP : "); 
	std::cout << enemy.remaingHP;
	colorFunction(0);
	std::cout << "\n";
}
//the actual fight between player and enemy
void battle(stats &real, stats &enemy, int power)
{
	stats player = real;
	int x = 1;
	colorFunction(10);
		if (enemy.slow == true)
			x = 2;
		for (int i = 0; i < x; i++)
		{
			if (power <= enemy.DEF && player.remaingHP > 0 && enemy.remaingHP > 0 || player.ATK <= 0)
			{
				delay(20, " You did no damage!!!!");
				std::cout << "\n";
			}
			else if (player.remaingHP > 0 && enemy.remaingHP > 0 && player.ATK > 0 && power > enemy.DEF)
			{
				if (enemy.drain == true)
				{
					delay(20, " You did "); std::cout << power - enemy.DEF + enemy.drainAmount; delay(20, " damage");
					std::cout << "\n";
					enemy.remaingHP -= power - enemy.DEF + enemy.drainAmount;
				}
				else
				{
					delay(20, " You did "); std::cout << power - enemy.DEF; delay(20, " damage");
					std::cout << "\n";
					enemy.remaingHP -= power - enemy.DEF;
				}
				
			}
		}

		if (player.DEF >= enemy.ATK && player.remaingHP > 0 && enemy.remaingHP > 0 || enemy.miss == true && player.remaingHP > 0 && enemy.remaingHP > 0)
		{
			delay(20, " You take no damage!!");
			std::cout << "\n";
			if (enemy.drain == true)
			{
				delay(20, " You did "); std::cout << enemy.drainAmount; delay(20, " damage");
				std::cout << "\n";
				enemy.remaingHP -= power - enemy.DEF + enemy.drainAmount;
			}
		}
		else if (player.remaingHP > 0 && enemy.remaingHP > 0 && enemy.ATK > 0)
		{
			player.remaingHP -= enemy.ATK - player.DEF;
			delay(20, " You have taken "); std::cout << enemy.ATK - player.DEF; delay(20, " damage!!");
			std::cout << "\n";
			if (enemy.drain == true)
			{
				delay(20, " You did "); std::cout << enemy.drainAmount; delay(20, " damage");
				std::cout << "\n";
				enemy.remaingHP -= (power - enemy.DEF) + enemy.drainAmount;
			}
		}
		real.remaingHP = player.remaingHP;
}

int drainAmount(stats player)
{
	int x = 0;
	if (player.playerClass == " Wizzard")
		x = player.intel / 2 + 1;
	else if (player.playerClass == " Rogue")
		x = player.ATK / 2 + 1;
	else if (player.playerClass == " Warrior")
		x = player.DEF / 2 + 1;
	return x;
}

//displays menue for the fight
int fight(stats &real, stats enemy)
{
	int xp = 0;
	stats player = real;
	if (player.remaingHP <= 0)
		delay(20, " You are to tired to fight go rest");
		std::cout << "\n";
	
	while (player.remaingHP > 0 && enemy.remaingHP > 0)
	{
		status(player, enemy);
		
		colorFunction(10);
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
		if (player.special == true)
		{
			delay(20, " 5) special");
			std::cout << "\n";
		}
		std::cin >> option;
		int power = math(player, option, enemy);
		
		if (option == 4)
		{
			if (player.DEF + power >= enemy.ATK && player.remaingHP > 0 && enemy.remaingHP > 0)
			{
				delay(20, " You take no damage!!");
				std::cout << "\n";
				if (enemy.drain == true)
				{
					delay(20, " You did "); std::cout << power - enemy.DEF + enemy.drainAmount; delay(20, " damage");
					std::cout << "\n";
					enemy.remaingHP -= power - enemy.DEF + enemy.drainAmount;
				}
			}
			else if (player.remaingHP > 0 && enemy.remaingHP > 0)
			{
				player.remaingHP -= (player.DEF + power) - enemy.ATK;
				delay(20, " You have taken "); std::cout << (player.DEF + power) - enemy.ATK; delay(20, " damage!!");
				std::cout << "\n";
				if (enemy.drain == true)
				{
					delay(20, " You did "); std::cout << power - enemy.DEF + enemy.drainAmount; delay(20, " damage");
					std::cout << "\n";
					enemy.remaingHP -= power - enemy.DEF + enemy.drainAmount;
				}
			}
		}
		else if (option == 5)
		{
			player.special = false;
			if (power == 1)
			{
				enemy.drain = true;
				enemy.drainAmount = drainAmount(player);
				power = 0;
			}
			else if (power == 2)
			{
				enemy.slow = true;
				power = 0;
			}
			else if (power == 3)
			{
				enemy.miss = true;
				power = player.ATK;
			}
			else if (power == 4)
				power = player.ATK + player.ATK;
			else if (power == 5)
				power = player.ATK + player.LVL;
			else if (power == 6)
			{
				player.ATK += player.ATK / 2;
				power = 0;
			}
			else if (power == 7)
			{
				enemy.ATK -= enemy.ATK * .25;
				enemy.DEF -= enemy.DEF * .25;
				power = 0;
			}
			else if (power == 8)
			{
				player.DEF += player.DEF * .2;
				power = 0;
			}


			battle(player, enemy, power);
		}
		else
			battle(player, enemy, power);

		if (enemy.remaingHP <= 0 && player.remaingHP > 0)
		{
			colorFunction(160);
			delay(20, " You won");
			colorFunction(0);
			std::cout << "\n";
			real.win++;
			xp += enemy.LVL * 5;
		}
		else if (player.remaingHP <= 0 && enemy.remaingHP > 0)
		{
			colorFunction(192);
			delay(20, " You lose");
			colorFunction(0);
			std::cout << "\n";
			real.lose++;
			xp = 0;
		}
		else if (enemy.remaingHP <= 0 && player.remaingHP <= 0)
			std::cout << "you both dead" << std::endl;
	}
	real.remaingHP = player.remaingHP;
	return xp;
}