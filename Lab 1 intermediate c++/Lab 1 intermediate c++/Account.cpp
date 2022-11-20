#include "Account.h"
#include <vector>

using namespace std; 

Account::Account(double _balance = 0, double _interest_rate = 0) {
	balance = _balance;
	interest_rate = _interest_rate;
}

double Account::getBalance() {
	return balance;

}

double Account::getrate() {
	return interest_rate;
}

bool Account::deposit(double num) {
	if (num >= 0) {
		balance += num;
		return true;
	}
	return false;
}

bool Account::withdraw(double num) {
	if (num >= 0 && num <= balance) {
		balance -= num;
		return true;
	}
	return false;
}

bool Account::accrueinterest(int months) {
		for (int i{ 0 }; i < months; i++) {
			balance = ((balance * interest_rate) / 12) + balance;
		}
		return balance;
	}


