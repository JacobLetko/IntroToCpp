#include <iostream>
#include <Windows.h>

#include <mmsystem.h>

#include "Battle.h"
#include "level.h"
#include "textanimations.h"


stats player;

int menue(int x)
{
	int answer;
	colorFunction(6);
	delaySkip(20, " What would you like to do?");
	std::cout << "\n";
	delaySkip(20, " 1) fight");
	delaySkip(20, " 2) rest");
	delaySkip(20, " 3) stats");
	delaySkip(20, " 4) quit game");
	if (x >= player.boss*10)
	{
		delaySkip(20, " You can fight the boss.");
		delaySkip(20, " If you want to fight him press 7");
	}
	std::cin >> answer;

	return answer;
}

void startUp()
{
	colorFunction(3);
	int answer;
	delaySkip(20, " What class would you like?");
	delaySkip(20, " 1) Wizzard");
	delaySkip(20, " 2) Rogue");
	delaySkip(20, " 3) Warrior");
	std::cin >> answer;

	if (answer == 1)
	{
		player.playerClass = " Wizzard";
		player.ATK = 0;
		player.DEF = 1;
		player.intel = 8;
		player.maxHP = 5;
	}
	else if (answer == 2)
	{
		player.playerClass = " Rogue";
		player.ATK = 7;
		player.DEF = 1;
		player.intel = 0;
		player.maxHP = 5;
	}
	else if (answer == 3)
	{
		player.playerClass = " Warrior";
		player.ATK = 5;
		player.DEF = 2;
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
	player.boss = 1;
	player.win = 0;
	player.lose = 0;
	player.special = true;
	
	
	/*int x; 
	int y;
	std::cin >> x;
	std::cin >> y;
	test(x, y);*/
	
	bool play = true;
	int option;

	SetConsoleTitle("The Arena");

	
	
	colorFunction(4);
	delaySkip(100, "Welcome to the");
	colorFunction(4);
	delaySkip(20, "         (            )          " );
	delaySkip(20,"   (      )\\ )      ( /(   (      ");
	delaySkip(20, "   )\\    (()/( (    )\\())  )\\     ");
	delaySkip(20, "((((_)(   /(_)))\\  ((_)\\((((_)(   ");
	delaySkip(20, " )\ _ )\\ (_)) ((_)  _((_))\\ _ )\\  ");
	delaySkip(20, " (_)_\\(_)| _ \\| __|| \\| |(_)_\\(_) ");
	delaySkip(20, "  / _ \\  |   /| _| | .` | / _ \\   ");
	delaySkip(20, " /_/ \\_\\ |_|_\\|___||_|\\_|/_/ \\_\\  ");

	stats enemy;
	stats boss;
	
	startUp();

	colorFunction(7);
	delaySkip(30, " You wake up in a unknown room with a cell door.");
	delaySkip(30, " A gard notices you wake up and walks over to you.");
	delaySkip(30, " \"Hey you finally awake are ya.\"");
	delaySkip(30, " \"Well I hope you like your bed cause your gonna be here till you drop dead.\"");
	delaySkip(30, " \"As you can guess this is a prison of a sort.\"");
	delaySkip(30, " \"There are an endless line of people here all waiting to fight.\"");
	delaySkip(30, " \"Dont worry you wont die from them you will die of old age or bordem\"");
	delaySkip(30, " \"Have fun \"");
	delaySkip(30, " The gaurd walks away");


	while (play)
	{
		PlaySound(TEXT("fight.wav"), NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
		enemy.LVL = player.LVL / 2 + 1;
		enemy.ATK = enemy.LVL + 3;
		enemy.DEF = enemy.LVL + 1;
		enemy.maxHP = enemy.LVL + 10;
		enemy.slow = false;
		enemy.miss = false;
		enemy.drain = false;
		enemy.remaingHP = enemy.maxHP;
		enemy.playerClass = "enemey";

		boss.LVL = (enemy.LVL + player.LVL) / 2;
		boss.ATK = boss.LVL + 5;
		boss.DEF = boss.LVL + 3;
		boss.maxHP = boss.LVL + 15;
		boss.remaingHP = boss.maxHP;
		boss.playerClass = "boss";
		player.expneeded = powers((player.LVL - 1)+4,2);
		player.special = true;
		
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
			delaySkip(250, "ZZZZZZZZZZZZZZZ ...");
			delaySkip(20, " You have regaind all health");
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
			if (player.EXP >= player.expneeded)
			{
				lvlUp(player);
			}
		}
		else if (option == 10)
			status(enemy);
		else if (option == 11)
			status(boss);
			
	}

}