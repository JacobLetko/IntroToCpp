#pragma once
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int cap()
{
	string word = "";
	cout << "enter a word" << endl;
	cin >> word;

	transform(word.begin(), word.end(), word.begin(), ::tolower);
	cout << word << endl;
	transform(word.begin(), word.end(), word.begin(), ::toupper);
	cout << word << endl;
	return 0;
}