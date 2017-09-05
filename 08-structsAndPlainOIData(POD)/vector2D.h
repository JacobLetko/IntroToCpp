#pragma once


struct vector
{
	float X;
	float Y;
};

vector sum(vector one, vector two);
vector diff(vector one, vector two);
float distance(vector one, vector two);
void PrintVec(vector a);