#include "palindrome.h"
#include <iostream>

bool test(char word[])
{
	int x = 0;
	for (int i = 0; i < strlen(word)/2; i++)
	{
		if (word[i] == word[strlen(word) - i])
			x++;
	}
	if (x == strlen(word)/2)
		return true;
	
	return false;
}
