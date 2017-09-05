#pragma once
#include <iostream>
#include <string>


void spiciness()
{
	// Field:       Thai Spiciness Rating
	// Constraints: Any number from 0 to 5, inclusive of both ends.
	int thaiSpiceRating = 0;
	std::cout << "How spicy should your food be?\n";
	std::cin >> thaiSpiceRating;
	if (thaiSpiceRating > 5) { thaiSpiceRating = 5; }
	else if (thaiSpiceRating < 0) { thaiSpiceRating = 0; }
	std::cout << "You ordered with a spiciness rating of " << thaiSpiceRating << "!\n";
}

void cookies()
{
	// Field:       Purchase Order for Cookies
	// Constraints: Must be ordered in multiples of 23. Only whole numbers.
	//              Round down to the nearest multiple if not a multiple of 23.
	//
	//              If nearest multiple is zero, provide an error message.

	int amount;
	std::cout << "how many cookies would you like" << std::endl;
	std::cin >> amount;

	amount = amount / 23;
	if (amount == 0)
		std::cout << "error" << std::endl;
	else
		std::cout << "you got " << amount * 23 << " cookies" << std::endl;
}

void sketchbooks()
{
	// Field:       Purchase Order for Sketchbooks (3pk)
	// Constraints: Must order at least 9 sketchbooks total.
	//              The total may not exceed 30 sketchbooks ordered.
	//
	//              If the total number of sketchbooks ordered does not meet
	//              the minimum order count or exceeds the maximum order count,
	//              provide an error message.

	std::cout << "how many sketch books do you want" << std::endl;
	int amount;
	std::cin >> amount;

	if (amount < 9 || amount > 30)
		std::cout << "error" << std::endl;
	else
		std::cout << "you got " << amount << " sketch books" << std::endl;
}

void motionBlur()
{
	// Field:       Enable Motion Blur
	// Constraints: Must be a 'y' or 'n' value.
	//
	//              Provide an error message if any other value.

	std::cout << "would you like to enable motion blur? (y/n)" << std::endl;
	std::string answer;
	std::getline(std::cin, answer);

	if (answer != "y" && answer != "n")
		std::cout << "error" << std::endl;
	else if (answer == "y")
		std::cout << "you have enabled motion blur" << std::endl;
	else
		std::cout << "you have dissabled motion blur" << std::endl;
}

void textureSize()
{
	// Field:       Texture Size
	// Constraints: Round to the nearest power of two. Only whole numbers. 2^n
	//
	//              If nearest power is zero, provide an error message.

	int size;
	int exponent = 1;
	int num1 = 0;
	int num2 = 2;
	int end = 0;
	std::cout << "enter number for size" << std::endl;
	std::cin >> size;

	while(end != 1)
	{
		for (int i = 1; i < exponent; i++)
		{
			num2 = num2 * i;
		}
		if (size > num1 && size > num2)
		{
			exponent++;
			num1 = num2;
		}
		else if (size < num2 )
		{
			std::cout << "size is set for " << num1 << std::endl;
			end = 1;
		}
		else
		{
			std::cout << "error" << std::endl;
			end = 1;
		}
		//std::cout << "end of loops" << std::endl;
	}
}

inline int validation()
{
	/*spiciness();
	system("pause");
	cookies();
	system("pause");
	sketchbooks();
	system("pause");*/
	//motionBlur();
	//system("pause");
	textureSize();
	return 0;
}