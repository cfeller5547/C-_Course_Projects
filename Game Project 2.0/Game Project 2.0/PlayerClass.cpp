#include "PlayerClass.h"
#include <iostream>

using namespace std;

PlayerClass::PlayerClass(string player_name, int INITIALHEALTH, int max_rounds){
	health = INITIALHEALTH;
	gold = 0;
	maxrounds = max_rounds;
	round = maxrounds;
	name = player_name;
}

PlayerClass::~PlayerClass() {
}

void PlayerClass::addround(int num) {
	round = round + num;
}

//health
void PlayerClass::addHealth(int num) {
	health = health + num;
}

void PlayerClass::takeHealth(int num) {
	health = health - num;
}

int PlayerClass::getHealth() const  {
	return health;
}
//gold
int PlayerClass::getGold() const {
	return gold;
}

//gold
string PlayerClass::getName()  {
	return name;
}

void PlayerClass::addGold(int num) {
	gold = gold + num;
}

void PlayerClass::takeGold(int num) {
	if (gold > 0) {
		gold = gold - num;
	}
	else {
		cout << "you have no gold left." << endl; 
		gold = gold;
	}
}

void PlayerClass::displayStatus() const {
}

bool PlayerClass::wongame() {
		return health > 0;
}

bool PlayerClass::lostgame() {
		return health <= 0;
}

int PlayerClass::getrounds() {
	return round;
}
