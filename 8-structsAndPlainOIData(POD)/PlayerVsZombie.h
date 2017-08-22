#pragma once


struct stats
{
	int HP;
	int atk;
	int def;
};

void fight(stats &player, stats &zombie);
void printStats(stats avatar);