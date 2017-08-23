#include <iostream>
#include "level.h"
using namespace std;

void statsUp(stats &player, int up)
{
	player.LVL++;

	if (up == 1)
		player.ATK++;
	else if (up == 2)
		player.DEF++;
	else if (up == 3)
		player.maxHP++;
	else if (up == 4)
		player.intel++;
}

void status(stats player)
{
	std::cout << "you are a " << player.playerClass << std::endl;
	std::cout << "lvl : " << player.LVL << std::endl;
	std::cout << "exp : " << player.EXP << std::endl;
	std::cout << "max HP : " << player.maxHP << std::endl;
	std::cout << "current HP : " << player.remaingHP << std::endl;
	std::cout << "Attack : " << player.ATK << std::endl;
	std::cout << "Defense : " << player.DEF << std::endl;
	std::cout << "intelligence : " << player.intel << std::endl;
}

void lvlUp(stats &player)
{
	int answer;
	cout << "what are you upgrading? \n 1) Attack \n 2) Defense \n 3) Health \n 4) intel" << endl;
	cin >> answer;

	statsUp(player, answer);
}