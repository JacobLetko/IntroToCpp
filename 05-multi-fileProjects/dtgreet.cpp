#include <iostream>
#include "dtgreet.h"

using namespace std;

void dayGreeting(int day, int month, int year)
{
	if (year % 2 == 0)
		cout << "hello ";
	else if (year % 2 == 1)
		cout << "hi ";

	if (day < 10)
		cout << "its a good ";
	else if (day >= 10 && day < 21)
		cout << "its a ok ";
	else if (day >= 21 && day <= 31)
		cout << "its a bad ";
	
	if (month <= 4)
		cout << "day" << endl;
	else if (month > 4 && month <= 8)
		cout << "month" << endl;
	else if (month <= 12 && month > 8)\
		cout << "year" << endl;
}

void timeGreeting(int hour, int min)
{
	if (min <= 15)
		cout << "good ";
	else if (min > 15 && min <= 30)
		cout << "its an ok ";
	else if (min > 30 && min <= 45)
		cout << "";
	else if (min > 45 && min <= 60)
		cout << "its a bad ";

	if (hour < 6)
		cout << "morning" << endl;
	else if (hour > 5 && hour < 12)
		cout << "afternoon" << endl;
	else if (hour > 11 && hour < 18)
		cout << "evning" << endl;
	else if (hour > 17 && hour < 25)
		cout << "night" << endl;
}

bool isLeapYear(int year)
{
	// if divide by 4 yes but if divide by 100 no but if divide by 400 yes

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return true;
	else
		return false;
}