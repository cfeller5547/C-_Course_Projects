#pragma once
#include "Card.h"

#pragma once

class Deck
{
public:

	Deck();

	void shuffleDeck();
	void pushCard(Card *); // add card bla bla here
	Card *popCard();
	void makeEmpty();
	bool isEmpty();
	Card *peek();
	bool isFull();
	void init();
	void displayEntireDeck();
	int getSize() { return size;  }

private:

	int static const MaxSize = 52;
	Card *stack[MaxSize]; //why pointer
	int size{};
	int head{};

};

