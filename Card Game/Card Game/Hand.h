#pragma once
using namespace std;
#include <iostream>
#include <string>

#include "Card.h"

const int MAXNUM = 21;

class Hand
{
public:
	
	Hand() {
		
		index = 0;
		size = 0;
		for (int i = 0; i < MAXSIZE; i++) {
			myArr[i] = NULL;
		}
	}
	
	void putCard(Card *);
	Card* getCard(int ndx);
	int getNumCards();
	bool isEmpty();
	bool isFull();
	void makeEmpty();
	void display();
	int countCards();
	bool bust();
	void displayInitialDealerCard();

private:

	int index{};
	const static int MAXSIZE = 10;
	Card *myArr[MAXSIZE];
	// number of cards in hand
	int size{};
};

