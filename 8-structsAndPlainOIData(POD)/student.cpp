#include <iostream>

#include "student.h"

float averageTestScores(int scores[], int size)
{
	float score = 0.0f;
	float Size = size;

	for (int i = 0; i < size; i++)
		score += scores[i];

	return score / Size;
}

float medianTestScores(int scores[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (scores[j] > scores[j++])
			{
				scores[j] = scores[j++] + scores[j];
				scores[j++] = scores[j] - scores[j++];
				scores[j] = scores[j] - scores[j++];
			}
		}
	}

	if (size % 2 == 0)
		return scores[size % 2];
	else
		return (scores[size % 2] + scores[size % 2 + 1]) / 2;
}

int numOfStudentsEnrolled(int students[], int size, int course)
{
	int x = 0;

	for (int i = 0; i < size; i++)
		if (students[i] == course)
			x++;
	return x;
}


void printAverageTestScores(student person, int size)
{
	std::cout << "average test score " << averageTestScores(person.testScore, size) << std::endl;
}

void printMedianTestScores(student person, int size)
{
	std::cout << "average test score of student " << medianTestScores(person.testScore, size) << std::endl;
}