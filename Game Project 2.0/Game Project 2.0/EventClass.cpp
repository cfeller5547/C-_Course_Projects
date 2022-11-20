#include "EventClass.h"
#include <iostream>
#include "PlayerClass.h"
#include "Global.h"


using namespace std;

void EventClass::thunderstorm(PlayerClass* player1) {
	
	cout << endl;
	cout << "While riding your bike it starts raining really hard and thundering." << endl;
		cout << "You have two choices." << endl;
		cout << "a. Camp out the night in a safe cave nearby and slow down your journey" << endl;
		cout << "b. Continue your journey through the dangerous storm" << endl;
		string choice;
		while (true) {
			cin >> choice;
			if (choice != "a" && choice != "A" && choice != "b" && choice != "B") {
				cout << "Invalid input. Choose 'a' or 'b' " << endl;
			}
			else if (choice == "a" || choice == "A") {
				player1->addround(1);
				cout << "You chose to stay the night in the cave. an extra round has been added to your journey." << endl;
				break;
			}
			else if (choice == "b" || choice == "B") {
				player1->addround(0);
				cout << "congrats! You safely made it through the thunderstorm and your brave decision has saved you a day in your journey." << endl;
				break;
			}
		}
}
void EventClass::bearattack(PlayerClass* player1) {

	cout << endl;
	cout << "As you are riding your bike you stop for water at the river and angry a sleeping bear nearby." << endl;
	cout << "The bear immediately charges at you" << endl;
	cout << "You have two choices." << endl;
	cout << "1. Attempt to outrun the bear and continue on the path to the end of the forest(a)" << endl;
	cout << "2. Jump into the river and be taken to an unknown location(b)" << endl;
	string choice;
	while (true) {
		cin >> choice;
		if (choice != "a" && choice != "A" && choice != "b" && choice != "B") {
			cout << "Invalid input. Choose 'a' or 'b' " << endl;
		}
		if (choice == "a" || choice == "A") {
			player1->takeHealth(5);
			cout << "you got badly injured by the bear and lost 5 health." << endl;
			break;
		}
		else if (choice == "b" || choice == "B") {
			player1->addGold(5);
			cout << "congrats! You escaped the bear and you found 5 coins in the river." << endl;
			break;
		}
	}
}

void EventClass::biketirepop(PlayerClass* player1) {

	cout << endl;
	cout << "You rode over a sharp rock and your bike tire popped!" << endl;
	cout << "You have two choices." << endl;
	cout << "1. spend 5 coins to get your tire repaired and then continue on your journey(a)" << endl;
	cout << "2. Leave behind your bike and continue your journey on foot adding an extra round to your trip(b)" << endl;
	string choice;
	while (true) {
		cin >> choice;
		if (choice != "a" && choice != "A" && choice != "b" && choice != "B") {
			cout << "Invalid input. Choose 'a' or 'b' " << endl;
		}
		if (choice == "a" || choice == "A") {
			if (player1->getGold() == 0) {
				cout << "you have no gold, therefore choice b was automatically selected for you." << endl;
				player1->addround(1);
				cout << "you were forced to continue your trip and an extra day will be added." << endl;
				break;
			}
			else {
				player1->takeGold(5);
				cout << "you spent 5 coins to get your tired repaired." << endl;
				break;
			}
		}
		else if (choice == "b" || choice == "B") {
			player1->addround(1);
			cout << "you chose to continue your journey on foot, an extra day will be added to your trip." << endl;
			break;
		}
	}
}

void EventClass::berries(PlayerClass* player1) {

	cout << endl;
	cout << "As you are riding your bike you come across two trees of berries that look the exact same." << endl;
	cout << "One of the trees is poisonous the other one is not." << endl;
	cout << "Which tree will you pick berries from, the left(a) or the right(b)?" << endl;
	string choice;
	while (true) {
		cin >> choice;
		if (choice != "a" && choice != "A" && choice != "b" && choice != "B") {
			cout << "Invalid input. Choose 'a' or 'b' " << endl;
		}
		if (choice == "a" || choice == "A") {
			player1->takeHealth(5);
			cout << "you chose the tree with poisonous berries, your character will now lose 5 health." << endl;
			break;
		}
		else if (choice == "b" || choice == "B") {
			player1->addHealth(5);
			cout << "congrats! You chose the berry tree. Your character gained 5 health." << endl;
			break;
		}
	}
}