#include <iostream>

#include "Battle.h"
#include "level.h"

int menue()
{
	int answer;
	std::cout << "what would you like to do?" << std::endl;
	std::cout << " 1) fight" << std::endl;
	std::cout << " 2) rest" << std::endl;
	std::cout << " 3) stats" << std::endl;
	std::cout << " 4) quit game" << std::endl;
	std::cin >> answer;
	std::cout << "\n" << std::endl;

	return answer;
}

int main()
{
	bool play = true;
	int option;

	stats player;
	player.EXP = 0;
	

	void startUp();
	{
		int answer;
		std::cout << "What class would you like? \n 1) wizard \n 2) rouge \n 3) warrior"<< std::endl;
		std::cin >> answer;

		if (answer == 1)
		{
			player.playerClass = "wizzard";
			player.ATK = 2;
			player.DEF = 2;
			player.intel = 10;
			player.maxHP = 5;
		}
		else if (answer == 2)
		{
			player.playerClass = "rouge";
			player.ATK = 10;
			player.DEF = 2;
			player.intel = 2;
			player.maxHP = 5;
		}
		else if (answer == 3)
		{
			player.playerClass = "warrior";
			player.ATK = 5;
			player.DEF = 3;
			player.intel = 1;
			player.maxHP = 7;
		}
		player.remaingHP = player.maxHP;
		player.LVL = 1;
	}

	stats enemy;
	enemy.LVL = player.LVL / 2 + 1;
	enemy.ATK = enemy.LVL / 2 + 3;
	enemy.DEF = enemy.LVL / 2 + 1;
	enemy.maxHP = enemy.LVL / 2 + 10;
	enemy.remaingHP = enemy.maxHP;

	while (play)
	{
		std::cout << "\n" << std::endl;
		option = menue();
		
		if (option == 1)
		{
			player.EXP += fight(player, enemy);
			if (player.EXP >= ((player.LVL / 2) * 8))
			{
				lvlUp(player);
			}
		}
		else if (option == 2)
		{
			std::cout << "you have regaind all health" << std::endl;
			player.remaingHP = player.maxHP;
		}
		else if (option == 3)
			status(player);
		else if (option == 4)
			play = false;
			
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