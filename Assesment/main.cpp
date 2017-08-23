#include <iostream>
#include <Windows.h>

#include "Battle.h"
#include "level.h"
#include "textanimations.h"



int menue()
{
	int answer;
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
	std::cin >> answer;

	return answer;
}

int main()
{
	
	bool play = true;
	int option;

	SetConsoleTitle("The Arena");

	stats player;
	player.EXP = 0;
	
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

	void startUp();
	{
		colorFunction(1);
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
			player.DEF = 5;
			player.intel = 0;
			player.maxHP = 5;
		}
		player.remaingHP = player.maxHP;
		player.LVL = 1;
	}

	stats enemy;
	

	while (play)
	{
		enemy.LVL = player.LVL / 2 + 1;
		enemy.ATK = enemy.LVL + 3;
		enemy.DEF = enemy.LVL + 1;
		enemy.maxHP = enemy.LVL + 10;
		enemy.remaingHP = enemy.maxHP;
		
		std::cout << "\n" << std::endl;
		option = menue();
		
		if (option == 1)
		{
			player.EXP += fight(player, enemy);
			if (player.EXP >= ((player.LVL / 2) + player.LVL * 8))
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
		else if (option == 10)
			status(enemy);
			
	}

}


/*
__/\\\_________________________/\\\\\\_____/\\\\\\__________________
_\/\\\________________________\////\\\____\////\\\__________________
_\/\\\___________________________\/\\\_______\/\\\__________________
_\/\\\_____________/\\\\\\\\_____\/\\\_______\/\\\________/\\\\\____
_\/\\\\\\\\\\____/\\\/////\\\____\/\\\_______\/\\\______/\\\///\\\__
_\/\\\/////\\\__/\\\\\\\\\\\_____\/\\\_______\/\\\_____/\\\__\//\\\_
_\/\\\___\/\\\_\//\\///////______\/\\\_______\/\\\____\//\\\__/\\\__
_\/\\\___\/\\\__\//\\\\\\\\\\__/\\\\\\\\\__/\\\\\\\\\__\///\\\\\/___
_\///____\///____\//////////__\/////////__\/////////_____\/////_____		slant relief

_|                  _|  _|
_|_|_|      _|_|    _|  _|    _|_|
_|    _|  _|_|_|_|  _|  _|  _|    _|
_|    _|  _|        _|  _|  _|    _|
_|    _|    _|_|_|  _|  _|    _|_|			Block

_  _ ____ _    _    ____ 
|__| |___ |    |    |  | 
|  | |___ |___ |___ |__|		cybermedium

_           _        _          _           _
_/\\___    __/\\___  _/\\_      _/\\_      __/\\___
(_ __ __)) (_  ____))(_  _))    (_  _))    (_     _))
/  |_| \\  /  ._))   /  \\      /  \\      /  _  \\
/:.  _   \\/:. ||___ /:.  \\__  /:.  \\__  /:.(_)) \\
\___| |  //\  _____))\__  ____))\__  ____))\  _____//
\//  \//         \//        \//      \//					merlin2

)       (   (
( /(    (  )\  )\
)\())  ))\((_)((_) (
((_)\  /((_)_   _   )\
| |(_)(_)) | | | | ((_)
| ' \ / -_)| | | |/ _ \
|_||_|\___||_| |_|\___/				fire font-k



                           ,---.
                          /    |
                         /     |
                        /      |
                       /       |
                  ___,'        |
                <  -'          :
                 `-.__..--'``-,_\_
                    |o/ <o>` :,.)_`>
                    :/ `     ||/)
                    (_.).__,-` |\
                    /( `.``   `| :
                    \'`-.)  `  ; ;
                    | `       /-<
                    |     `  /   `.
    ,-_-..____     /|  `    :__..-'\
   /,'-.__\\  ``-./ :`      ;       \
   `\ `\  `\\  \ :  (   `  /  ,   `. \
     \` \   \\   |  | `   :  :     .\ \
      \ `\_  ))  :  ;     |  |      ): :
     (`-.-'\ ||  |\ \   ` ;  ;       | |
      \-_   `;;._   ( `  /  /_       | |
       `-.-.// ,'`-._\__/_,'         ; |
          \:: :     /     `     ,   /  |
           || |    (        ,' /   /   |
           ||                ,'   /    |






*/