#include <iostream>
#include "clamp.h"
#include "distance.h"
#include "EstimatedTimeOfArrival.h"
#include "FunctionPrototypes.h"
#include "FunctionsDefinitions.h"
#include "Max.h"
#include "Min.h"
#include "SumOfThreeInt.h"
#include "HighAndLowGame.h"
#include "ToUpperOrToLower.h"

int main()
{
	std::cout << (1, 2, 3);
	system("pause");
	std::cout << Min(1, 2);
	system("pause");
	std::cout << Max(1, 2);
	system("pause");
	std::cout << comma(1, 2);
	system("pause");
	std::cout << fractions(4, 2);
	system("pause");
	std::cout << hello();
	system("pause");
	std::cout << square(4);
	system("pause");
	std::cout << sub(1, 2, 3);
	system("pause");
	std::cout << ETA(1, 2, 3, 4, 5);
	system("pause");
	std::cout << dist(1, 1, 2, 2);
	system("pause");
	std::cout << clamp(1, 2, 3);
	system("pause");
	start();
	system("pause");
	cap();
	system("pause");
	
	return 0;
}