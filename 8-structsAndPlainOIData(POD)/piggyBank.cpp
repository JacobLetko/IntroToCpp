#include <iostream>
#include "piggyBank.h"

float calcPiggyBankNotes(piggyBank piggy)
{
	float x = 0.0f;
	
	x += piggy.oneDollar;
	x += piggy.twoDollar;
	x += piggy.fiveDollar;

	return x;
}

float calcPiggyBankCoins(piggyBank piggy)
{
	float x = 0.0f;

	x += piggy.quarters * .25;
	x += piggy.dimes * .1;
	x += piggy.nickels * .05;
	x += piggy.pennies * .01;

	return x;
}

float calcPiggyBankTotal(piggyBank piggy)
{
	float x = 0.0f;

	x += calcPiggyBankCoins(piggy);
	x += calcPiggyBankNotes(piggy);

	return x;
}