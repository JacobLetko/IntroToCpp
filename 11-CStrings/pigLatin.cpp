#include "pigLatin.h"
#include <iostream>

void pigLatin(char word[])
{
	char newWord[] = "";

	for (int i = 2; i < strlen(word); i++)
	{
		for (int k = 0; k < strlen(word); k++)
		{
			newWord[k] = word[i];
			if (i >= strlen(word)-2)
				newWord[k] = 'w';
		}
	}
	std::cout << newWord << std::endl;
}
