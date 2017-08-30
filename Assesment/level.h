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
	bool special;
	int boss;
	int win;
	int lose;
	std::string playerClass;

	bool drain = false;
	int drainAmount = 0;
	bool slow = false;
	bool miss = false;
};

void lvlUp(stats &player);
void statsUp(stats &player, int up);
void status(stats player);