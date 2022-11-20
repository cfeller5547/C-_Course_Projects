#pragma once

#include "Dealer.h"
#include "Player.h"
#include "Deck.h"

#include <iostream>


using namespace std;


class Game
{
public:

	Game(Dealer* dealer, Player* player, Deck* deck) {
		dlr = dealer;
		p = player;
		d = deck;
	};

	void playGames();
	void playGame();
	void dealCards();
	void shuffle();
	void play(string);
	void evaluate();
	void clearHands();
	void displayHands();
	




private:

	Deck* d;
	Player* p;
	Dealer* dlr;
	int gameWager{};
	
};

