#include "Account.h"
#include <iostream>



using namespace std;

int menu();
void clearScreen();
void pauseScreen();


int main()
{
	int input = 0;
	Account acct(100.00, 0.05); //create instance of account
	//fix second 100
	double dep{};
	double with{};
	int mon{};

	do
	{
		input = menu();

		switch (input)
		{
		case 1: 
			cout << "Balance: $" << acct.getBalance();
			pauseScreen();
			break;
		case 2: 
			cout << "Current Rate: " << acct.getrate();
			pauseScreen();
			break;
		case 3: 
			cout << "Enter how much money you want to deposit: " << endl;
			cin >> dep;
			cout << acct.deposit(dep);
			pauseScreen();
			break;
		case 4: 
			cout << "Enter how much money you want to withdraw: " << endl;
			cin >> with;
			cout << acct.withdraw(with);
			pauseScreen();
			break;
		case 5: 
			cout << "Enter how many months of interest you would like to accrue: " << endl;
			cin >> mon;
			cout << acct.accrueinterest(mon);
			pauseScreen();
			break;
		case 6: //ToDo
			cout << "Goodbye";
			pauseScreen();
		}
		
		clearScreen();
	} while (input != 6);

}

int menu()
{
	int input;
	cout << "Enter the number for the operation you wish to perform from the menu." << endl
		<< "1. Check Balance" << endl
		<< "2. Check Current Rate" << endl
		<< "3. Deposit to Account" << endl
		<< "4. Withdraw from Account" << endl
		<< "5. Accrue Interest" << endl
		<< "6. Exit program" << endl << endl;

	cout << "Enter Choice: ";
	cin >> input;

	while (input < 1 or input > 6)
	{
		cout << "Enter a valid Choice from the menu: ";
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
		}
		cin >> input;
	}

	return input;
}

void clearScreen()
{
	system("CLS");
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
	}
}

void pauseScreen()
{

	std::cin.clear();
	std::cin.ignore(1000, '\n');
	std::cout << "\n---Enter to Continue!---\n";

	std::cin.get();
}