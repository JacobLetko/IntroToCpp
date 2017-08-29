#pragma once
#include <string>

struct stats
{
	int maxHP;
	int remaingHP;
	int ATK;
	int DEF;
	int intel;
	int LVL;
	int EXP;
	int expneeded;
	int boss;
	int win;
	int lose;
	std::string playerClass;
};

void lvlUp(stats &player);
void statsUp(stats &player, int up);
void status(stats player);