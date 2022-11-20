// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;


double Accrueinterest(int months) {
	double Balance{ 50.0 };

		for (int i{}; i < months; i++) {
			Balance = i * ((Balance * 0.05) / 12) + Balance;
		}
		
	return Balance;
}





//double Accrueinterest(int months) {
//	double Balance{50.0};
//	vector <int> vec{ months };
//	for (size_t i{}; i < vec.size(); i++) {
//		Balance = (vec.at(i)) * ((Balance * 0.05) / 12) + Balance;
//	}
//	return Balance;
//}

int main()
{
	double dog = Accrueinterest(6);
	cout << dog;
	
}

