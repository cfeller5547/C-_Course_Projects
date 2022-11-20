#pragma once
#include "Dealer.h"
#include "Hand.h"
#pragma once

#include "Deck.h"

class Dealer
{
public:

	Dealer(Deck *deck) {
		d = deck;
		h = new Hand();
	}

	void putCard(Card*);
	bool dealerBusted();
	bool isBlackJack();
	void makeDlrHandEmpty() { h->makeEmpty(); }
	void displayInitialDealerHand() { h->displayInitialDealerCard();  }
	void dealerPlayGame();
	int getDealerCardValue() { return h->countCards(); }

private:
	Deck* d;
	Hand* h;
};

