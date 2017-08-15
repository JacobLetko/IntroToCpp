#include <iostream>
#include "ProblemA.cpp"
#include "ProblemB.cpp"

int main()
{
	std::cout << "Hello AIE" << std::endl;

	system("pause");

	std::cout << "dancing with my slef" << std::endl;
	std::cout << "youve sparked a war" << std::endl;

	system("pause");

	for (int i = 0; i < 6; i++)
		std::cout << i << std::endl;

	system("pause");

	int k = 0;
	int p = 0;

	while (k < 6 && k > -1)
	{
		std::cout << k << std::endl;
		if (k == 5)
			p = 1;
		if (p == 1)
			k--;
		if (p == 0)
			k++;
	}

	system("pause");

	ProblemA();
	// calls ProblemA function NOT file
	system("pause");
	ProblemB();
	/*
	same as above except it calls ProblemB
	remember to #include "fileName.cpp"!!!
	that lets you accsess the function
	*/
	system("pause");
}