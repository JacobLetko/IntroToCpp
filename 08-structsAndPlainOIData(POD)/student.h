#pragma once


struct student
{
	int studentID;
	int course;
	int numScores;
	int testScore[5];	
};

float averageTestScores(int scores[], int size);
float medianTestScores(int scores[], int size);
int numOfStudentsEnrolled(int students[], int size, int course);

void printAverageTestScores(student person, int size);
void printMedianTestScores(student person, int size);