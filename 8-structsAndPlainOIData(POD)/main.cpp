#include <iostream>
#include <ctime>
#include <cstdlib>
#include <typeinfo>
#include <type_traits>

#include "piggyBank.h"
#include "student.h"
#include "vector2D.h"
#include "PlayerVsZombie.h"


/*

*/
template<typename T, typename C>
bool test(const T &a, const C &b)
{
	return std::is_same<T, C>::value;
}



int main()
{
	srand(time(NULL));

	
	piggyBank myPiggyBank;
	myPiggyBank.quarters = rand()%10;
	myPiggyBank.dimes = rand() % 10;
	myPiggyBank.fiveDollar = rand() % 10;
	myPiggyBank.nickels = rand() % 10;
	myPiggyBank.oneDollar = rand() % 10;
	myPiggyBank.pennies = rand() % 10;
	myPiggyBank.twoDollar = rand() % 10;

	std::cout << calcPiggyBankNotes(myPiggyBank) << std::endl;
	std::cout << calcPiggyBankCoins(myPiggyBank) << std::endl;
	std::cout << calcPiggyBankTotal(myPiggyBank) << std::endl;

	system("pause");

	student one{ 1111, 1, 5, {60, 20, 30, 60, 90} };
	student two{ 1112, 1, 4, {80, 30, 60, 60, 60} };
	student three{ 1113, 2, 5, {54, 15, 20, 60, 90} };
	student four{ 1114, 2, 5, {57, 17, 28, 60, 90} };
	student five{ 1115, 1, 5, {100, 100, 10, 50, 90} };

	// You can use sizeof(array)/sizeof(type) to determine the length of a fixed-length array.
	

	// FUN TIMES - testing to see if the different lengths of student are still treated as equivalent types
	// SURPRISE, they are.
	//auto tyysy = typeid(four).name();
	//auto tyyyy = typeid(two).name();

	//bool test_result = test(two, four);

	int studentsID[]{one.studentID, two.studentID, three.studentID, four.studentID, five.studentID};
	int studentsCourse[]{ one.course, two.course, three.course, four.course, five.course };
	int studentTestScores[]{ one.testScore[1], two.testScore[1], three.testScore[1], four.testScore[1], five.testScore[1]};
	
	std::cout << "students average test score : " << averageTestScores(studentTestScores, 5) << std::endl;
	printAverageTestScores(one, 5);
	printMedianTestScores(one, 5);
	std::cout << "number of students enrolled " << numOfStudentsEnrolled(studentsCourse, 5, 1) << std::endl;

	system("pause");

	vector vOne{ 6,6 };
	vector vTwo{ 2, 3 };

	vector x = sum(vOne, vTwo);
	vector y = diff(vOne, vTwo);

	PrintVec(x);
	PrintVec(y);
	std::cout << distance(vOne, vTwo) << std::endl;

	system("pause");

	stats player{100, 5, 2};
	stats zombie{100, 5, 0};

	fight(player, zombie);

	return 0;
}

