#include <iostream>

using namespace std;

void addToList(int*); // adds integer to integer array
void displayList(int*); //displays all items in array
void dispSum(int*); //gives sum of all elements in array
void dispAverage(int*); //gives average of elements in array.

unsigned short SIZE = 0;

int main()
{
	unsigned int input{};
	int arrayList[10];

	// adding a character causes the program to stop. I would need to input a string and validate that the string is an integer
	do
	{
		cout << "***Main Menu***" << endl
			<< "1. add number to list" << endl
			<< "2. display list." << endl
			<< "3. display sum." << endl
			<< "4. display average." << endl
			<< "0. Quit" << endl;
		//clears iostream buffer
		cin.clear();
		
		cout << "enter a menu choice: ";
		
		cin >> input;
		switch (input)
		{
		case 1: addToList(arrayList);
			break;
		case 2: displayList(arrayList);
			break;
		case 3: dispSum(arrayList);
			break;
		case 4: dispAverage(arrayList);
			break;
		case 0:
			return 0;
		default:cout << "enter a valid choice from menu:";
		}

	} while (input != 0);
	return 0;
}

void addToList(int* arrayList)
{
	// adding a character causes the program to stop. I would need to input a string and validate that the string is an integer
	if (SIZE < 10) {
		int input;
		cout << "enter a number int the array: ";
		cin >> input;
		arrayList[SIZE++] = input;
	}
}

void displayList(int* arrayList)
{
	for (int i = 0; i < SIZE; ++i)
		cout << arrayList[i];
	cout << endl;
}

void dispSum(int* arrayList)
{
	int sum = 0;
	for (int i = 0; i < SIZE; ++i)
		sum += arrayList[i];
	cout << "The Sum is " << sum << "!" << endl;
}

void dispAverage(int* arrayList)
{
	int sum = 0;
	for (int i = 0; i < SIZE; ++i)
		sum += arrayList[i];
	cout << "The Average is " << sum/(double)SIZE << "!" << endl;
}

