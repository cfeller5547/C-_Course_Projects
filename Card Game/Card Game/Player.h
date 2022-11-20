#pragma once
using namespace std;

#include <iostream>
#include <string>
#include "Hand.h"
#include "Deck.h"


class Player
{
public:

	Player(Deck *deck){
		h = new Hand(); 
		d = deck;
		purse = 1000;
	}
	

	void setWager();
	void updatePurse(bool, bool, bool);
	
	void putCard(Card *);
	bool playerBusted();
	
	bool isBlackJack();
	void makePlayerHandEmpty() { h->makeEmpty(); }
	void displayPlayerHand() { h->display(); }
	void playerPlayGame();
	void displayPurseAndWinnings() { cout << "Purse: " << purse << endl; cout << "Winnings: " << winnings << endl; }
	int getPlayerCardValue() { return h->countCards(); }
private:
	int purse{};
	int currWager{};
	Hand* h;
	Deck* d;
	int winnings{};
};

