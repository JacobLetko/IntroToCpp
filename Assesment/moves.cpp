#include "moves.h"
#include <iostream>.
#include "textanimations.h"

int specialMoves(stats &player, stats &enemy)
{
	int x = 0;
	colorFunction(60);
	if (player.playerClass == " Wizzard")
		x = wizzard(player, enemy);
	else if (player.playerClass == " Rogue")
		x = rogue(player, enemy);
	else if (player.playerClass == " Warrior")
		x = warrior(player, enemy);
	return x;
}

int wizzard(stats &player, stats &enemy)
{
	int ans = 0;

	delay(20, " What move would you like to use");
	std::cout << "\n";
	delay(20, " 1) heal");
	std::cout << "\n";
	delay(20, "2) fire");
	std::cout << "\n";
	delay(20, " 3) ice");
	std::cout << "\n";
	delay(20, "4) earth");
	std::cout << "\n";
	
	std::cin >> ans;

	if (ans == 1)
	{
		delay(20, " You healed your self");
		std::cout << "\n";
		player.remaingHP = player.maxHP;
		return 0;
	}
	else if (ans == 2)
	{
		delay(20, " You burned the enemy");
		std::cout << "\n";
		return 1;
	}
	else if (ans == 3)
	{
		delay(20, " You slowed down the enemy");
		std::cout << "\n";
		return 2;
	}
	else if (ans == 4)
	{
		delay(20, " You used earth");
		std::cout << "\n";
		player.DEF += player.DEF / 2;
		return 0;
	}
	else
	{
		delay(20, " That was not a valid option");
		std::cout << "\n";
		wizzard(player, enemy);
	}

}
/*
wizard
1)heal	heals player by 50% health
2)fire	target loses 1 health each turn
3)ice	player gets two actions
4)earth	player gets 50% def buff
*/
int rogue(stats &player, stats &enemy)
{
	int ans = 0;

	delay(20, " What move would you like to use");
	std::cout << "\n";
	delay(20, " 1) Shadow Step");
	std::cout << "\n";
	delay(20, "2) Fast Strike");
	std::cout << "\n";
	delay(20, " 3) Circle target");
	std::cout << "\n";
	delay(20, "4) Posin Knife");
	std::cout << "\n";

	std::cin >> ans;

	if (ans == 1)
	{
		delay(20, " The enemy misses you");
		std::cout << "\n";
		return 3;
	}
	else if (ans == 2)
	{
		delay(20, " You attack twice");
		std::cout << "\n";
		return 4;
	}
	else if (ans == 3)
	{
		delay(20, " You power attack without taking damage");
		std::cout << "\n";
		return 5;
	}
	else if (ans == 4)
	{
		delay(20, " You posined the enemy");
		std::cout << "\n";
		return 1;
	}
	else
	{
		delay(20, " That was not a valid option");
		std::cout << "\n";
		rogue(player, enemy);
	}
}
/*

rogue
1)shadow step	enemy misses for next turn
2)fast strike	attacks enemy twice with normal attack
3)circle target	attacks enemy like power attack without taking damage
4)poison knife	target loses 1 health each turn
*/
int warrior(stats &player, stats &enemy)
{
	int ans = 0;

	delay(20, " What move would you like to use");
	std::cout << "\n";
	delay(20, " 1) blood rush");
	std::cout << "\n";
	delay(20, "2) battle cry");
	std::cout << "\n";
	delay(20, " 3) beef up");
	std::cout << "\n";
	delay(20, "4) deep cut");
	std::cout << "\n";

	std::cin >> ans;

	if (ans == 1)
	{
		delay(20, " You used blood rush and do 50% more damage");
		std::cout << "\n";
		return 6;
	}
	else if (ans == 2)
	{
		delay(20, " You scare the enemy");
		std::cout << "\n";
		return 7;
	}
	else if (ans == 3)
	{
		delay(20, " You increase defense");
		std::cout << "\n";
		return 8;
	}
	else if (ans == 4)
	{
		delay(20, " You cut the enemy");
		std::cout << "\n";
		return 1;
	}
	else
	{
		delay(20, " That was not a valid option");
		warrior(player, enemy);
	}
}
/*
warrior
1)blood rush	player gets 50% attack buff
2)battle cry	enemy loses 25% attack and 25% def
3)beef up		player gets 50% def buff
4)deep cut		target losses 1 health each turn
*/