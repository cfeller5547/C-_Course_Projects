// Factors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



bool IsPrime(int num) {
	if (num == 1 || num == 2) {
		return true;
	}
	else {
		int evendivisible = 0;
		int rem;
		for (int y = 1; y <= num; y++) {
			rem = num % y;
			if (rem == 0) {
				evendivisible++;
			}
		}
		if (evendivisible > 2)
			return  false;
	}
	return true;
}

void factors(int num) {
	cout << "the factors for: " << num << " are: ";
	while (IsPrime(num) != true) {
		for (int x = 2; x <= num; x++) {
			int rem;
			rem = num % x;

			if (rem == 0) {
				cout << x << " ";
				num = num / x;
				break;
			}
		}
	}
	cout << num << endl;
}

int main()
{
	int num;
	cout << "enter a number to find its factors" << endl;
	cin >> num;
	factors(num);
}
