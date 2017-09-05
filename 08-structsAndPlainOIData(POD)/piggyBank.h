#pragma once


struct piggyBank
{
	int oneDollar;
	int twoDollar;
	int fiveDollar;

	int quarters;
	int dimes;
	int nickels;
	int pennies;
};

float calcPiggyBankNotes(piggyBank piggy);

float calcPiggyBankCoins(piggyBank piggy);

float calcPiggyBankTotal(piggyBank piggy);