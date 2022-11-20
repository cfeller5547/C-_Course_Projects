// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <vector>
#include <iostream>
using namespace std;


//double Accrueinterest(int months) {
//	double Balance{ 50.0 };
//
//	for (int i{}; i < months; i++) {
//		Balance = i * ((Balance * 0.05) / 12) + Balance;
//	}
//
//	return Balance;
//}


double Accrueinterest(int months) {
	double Balance{50.0};
	for (int i{ 0 }; i < months; i++){
		Balance =  ((Balance * 0.05) / 12) + Balance;
	}
	return Balance;
}

//double Accrueinterest(int months) {
//	double Balance{ 50.0 };
//	vector <int> vec;
//
//
//
//	while (vec.size() < months) {
//		
//		Balance += ((Balance * 0.05) / 12) + Balance;
//	}
//}

int main()
{
	double dog = Accrueinterest(5);
	cout << dog;

}

