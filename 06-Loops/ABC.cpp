#include <iostream>


void abc()
{
	//65 -90
	char letter = 'a';
	for (int i = 65; i <= 90; i++)
	{
		letter = (int)i;
		std::cout << letter << std::endl;
	}
}

void AaBbCc()
{
	// 95 - 90 cap
	//97 - 122 low
	//32 diff

	char upletter = 'A';
	char lowletter = 'a';

	for (int i = 65; i <= 90; i++)
	{
		upletter = (int)i;
		lowletter = (int)i + 32;

		std::cout << upletter << lowletter << std::endl;
	}
}