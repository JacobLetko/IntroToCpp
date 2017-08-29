#include <iostream>
#include <Windows.h>

#include "Battle.h"
#include "level.h"
#include "textanimations.h"


stats player;

int menue(int x)
{
	int answer;
	colorFunction(6);
	delay(20, " What would you like to do?");
	std::cout << "\n";
	std::cout << "\n";
	delay(20, " 1) fight");
	std::cout << "\n";
	delay(20, " 2) rest");
	std::cout << "\n";
	delay(20, " 3) stats");
	std::cout << "\n";
	delay(20, " 4) quit game");
	std::cout << "\n";
	if (x >= player.boss*10 && player.boss != 0)
	{
		delay(20, " You can fight the boss.");
		std::cout << "\n";
		delay(20, " If you want to fight him press 7");
		std::cout << "\n";
	}
	std::cin >> answer;

	return answer;
}

void startUp()
{
	colorFunction(3);
	int answer;
	delay(20, " What class would you like?");
	std::cout << "\n";
	delay(20, " 1) Wizzard");
	std::cout << "\n";
	delay(20, " 2) Rouge");
	std::cout << "\n";
	delay(20, " 3) Warrior");
	std::cout << "\n";
	std::cin >> answer;

	if (answer == 1)
	{
		player.playerClass = " Wizzard";
		player.ATK = 1;
		player.DEF = 2;
		player.intel = 10;
		player.maxHP = 5;
	}
	else if (answer == 2)
	{
		player.playerClass = " Rouge";
		player.ATK = 10;
		player.DEF = 2;
		player.intel = 1;
		player.maxHP = 5;
	}
	else if (answer == 3)
	{
		player.playerClass = " Warrior";
		player.ATK = 5;
		player.DEF = 3;
		player.intel = 0;
		player.maxHP = 5;
	}
	else
	{
		std::cout << " That was not a valid option" << std::endl;
		startUp();
	}
	player.remaingHP = player.maxHP;
	player.LVL = 1;
}

int main()
{
	player.EXP = 0;
	player.boss = 0;
	player.win = 0;
	player.lose = 0;
	
	
	/*int x; 
	int y;
	std::cin >> x;
	std::cin >> y;
	test(x, y);*/
	
	bool play = true;
	int option;

	SetConsoleTitle("The Arena");

	
	
	colorFunction(4);
	delay(100, "Welcome to the");
	colorFunction(4);
	std::cout << "\n" << std::endl;
	delay(20, "         (            )          " );
	std::cout << "" << std::endl;
	delay(20,"   (      )\\ )      ( /(   (      ");
	std::cout << "" << std::endl;
	delay(20, "   )\\    (()/( (    )\\())  )\\     ");
	std::cout << "" << std::endl;
	delay(20, "((((_)(   /(_)))\\  ((_)\\((((_)(   ");
	std::cout << "" << std::endl;
	delay(20, " )\ _ )\\ (_)) ((_)  _((_))\\ _ )\\  ");
	std::cout << "" << std::endl;
	delay(20, " (_)_\\(_)| _ \\| __|| \\| |(_)_\\(_) ");
	std::cout << "" << std::endl;
	delay(20, "  / _ \\  |   /| _| | .` | / _ \\   ");
	std::cout << "" << std::endl;
	delay(20, " /_/ \\_\\ |_|_\\|___||_|\\_|/_/ \\_\\  ");
	std::cout << "\n" << std::endl;

	stats enemy;
	stats boss;
	
	startUp();

	while (play)
	{
		enemy.LVL = player.LVL / 2 + 1;
		enemy.ATK = enemy.LVL + 3;
		enemy.DEF = enemy.LVL + 1;
		enemy.maxHP = enemy.LVL + 10;
		enemy.remaingHP = enemy.maxHP;
		enemy.playerClass = "enemey";

		boss.LVL = (enemy.LVL + player.LVL) / 2;
		boss.ATK = boss.LVL + 5;
		boss.DEF = boss.LVL + 3;
		boss.maxHP = boss.LVL + 15;
		boss.remaingHP = boss.maxHP;
		boss.playerClass = "boss";

		player.expneeded = (player.LVL / 2) + player.LVL * 8;
		
		std::cout << "\n" << std::endl;
		option = menue(player.win);
		
		if (option == 1)
		{
			player.EXP += fight(player, enemy);
			if (player.EXP >= player.expneeded)
			{
				lvlUp(player);
			}
		}
		else if (option == 2)
		{
			Sleep(1500);
			std::cout << "\n";
			delay(20, " You have regaind all health");
			std::cout << "\n";
			player.remaingHP = player.maxHP;
		}
		else if (option == 3)
			status(player);
		else if (option == 4)
			play = false;
		else if (option == 7)
		{
			fight(player, boss);
			player.boss++;
			player.EXP += player.expneeded / 2;
		}
		else if (option == 10)
			status(enemy);
		else if (option == 11)
			status(boss);
			
	}

}