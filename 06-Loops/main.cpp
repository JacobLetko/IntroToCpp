#include <iostream>
#include "counting.h"
#include "favThreeNum.h"
#include "printXY.h"
#include "largAndSmallNum.h"
#include "evenOdd.h"
#include "FizzBuzz.h"
#include "gridGenerator.h"
#include "HigherOrLower.h"
#include "FibonacciSequence.h"
#include "ABC.h"

int main()
{
	one();
	system("pause");
	hundred();
	system("pause");
	years();
	system("pause");
	
	favThreeNum();
	system("pause");

	printXY(0,20);
	system("pause");

	promptLargest(10);
	system("pause");
	promptSmallest(10);
	system("pause");

	evenOdd(0, 10);
	system("pause");

	FizzBuzz(0, 50);
	system("pause");

	grid(5, 5);
	system("pause");

	guessingGame(1, 10, 5);
	system("pause");

	fib(0, 1);
	system("pause");

	abc();
	system("pause");

	AaBbCc();
	system("pause");

	return 0;
}