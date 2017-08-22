#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
#include "printArrays.h"
#include "sortingArrays.h"

using namespace std;

int main()
{
	int numbers[]{1,3,7,6,9};
	srand(time(NULL));

	//for (int i = 0; i < 5; i++)
		//numbers[i] = rand() % 10 + 1;
	
	int size = (sizeof(numbers) / sizeof(*numbers));  //math for size of array if unknown
	
	printNumbers(numbers, size);
	/*sumNumbers(numbers, size);
	LargestValue(numbers, size);

	findIndex(numbers, size, 4);
	uniqueness(numbers, size, numbers, size);
	reverse(numbers, size);
	ascendSort(numbers, size);
	descendSort(numbers, size);*/

	cout << endl;

	insertSort(numbers, size);
	system("pause");

	return 0;
}