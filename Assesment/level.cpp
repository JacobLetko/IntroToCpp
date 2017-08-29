#include <iostream>

#include "level.h"
#include "textanimations.h"

void statsUp(stats &player, int up)
{
	player.EXP -= player.expneeded;
	player.LVL++;

	if (up == 1)
		player.ATK++;
	else if (up == 2)
		player.DEF++;
	else if (up == 3)
		player.maxHP++;
	else if (up == 4)
		player.intel++;
	player.ATK++;
	player.DEF++;
	player.intel++;
	player.maxHP++;
	status(player);
}

void status(stats player)
{
	colorFunction(5);
	std::cout << "\n";
	delay(20, " You are a "); 
	delay(20, player.playerClass);
	std::cout << "\n";
	delay(20, " lvl : ");
	std::cout <<player.LVL << std::endl;
	delay(20, " exp : ");
	std::cout << player.EXP << std::endl;
	delay(20, " Amount of exp needed to level up : ");
	std::cout << player.expneeded << std::endl;
	delay(20, " Max HP : ");
	std::cout << player.maxHP << std::endl;
	delay(20, " Current HP : ");
	std::cout << player.remaingHP << std::endl;
	delay(20, " Attack : ");
	std::cout << player.ATK << std::endl;
	delay(20, " Defense : ");
	std::cout << player.DEF << std::endl;
	delay(20, " Intelligence : ");
	std::cout << player.intel << std::endl;
	delay(20, " fights won : ");
	std::cout << player.win << std::endl;
	delay(20, " fights lost : ");
	std::cout << player.lose << std::endl;
}

void lvlUp(stats &player)
{
	int answer;
	colorFunction(5);
	std::cout << "\n";
	delay(20," What are you upgrading?");
	std::cout << "\n";
	delay(20, " 1) Attack");
	std::cout << "\n";
	delay(20, " 2) Defense");
	std::cout << "\n";
	delay(20, " 3) Health");
	std::cout << "\n";
	delay(20, " 4) intel");
	std::cout << "\n";
	std::cin >> answer;

	statsUp(player, answer);
}