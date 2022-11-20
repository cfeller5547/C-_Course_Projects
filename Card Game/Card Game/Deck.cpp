using namespace std;

#include "Deck.h"
#include "Card.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <stdlib.h>

Deck::Deck()
{
	size = 0;
	head = 0;
	init();
}

void Deck::init()
{
	for (int i = (int)suit::hearts; i <= (int)suit::diamonds; i++) {
		for (int x = (int)cardName::two; x <= (int)cardName::ace; x++) {
			pushCard(new Card((suit)i, (cardName)x)); // we are casting i to a suit, and x to a cardName
		}
	}
}

void Deck::shuffleDeck()
{
	Card* temp[MaxSize];
	bool used[MaxSize]{ false };
	int i = 0;
	while(!isEmpty()){
		temp[i++]= popCard();
	}
	//seed random number
	int j = 0;
	while (!isFull())
	{
		
		int randNum = rand() % MaxSize;
		

		if (!used[randNum]) {
			pushCard(temp[randNum]);
			used[randNum] = true;
		}
	}
}

void Deck::pushCard(Card *val)
{
	if (!isFull()) {
		stack[size++] = val;
	}
	else
		cout << "Stack is full" << endl;
}

Card *Deck::popCard() 
{
	if (!isEmpty()) {
		return stack[--size];
	}
	else {
		cout << "Stack is Empty" << endl;
		return NULL;  
	}
}

void Deck::makeEmpty()
{

}



bool Deck::isEmpty()
{
	if (size == 0)
		return true;
	return false;
}

Card *Deck::peek()
{
	if (!isEmpty()) {
		return stack[size - 1];
	}
	else {
		cout << "stack empty" << endl;
		return NULL;
	}
}

bool Deck::isFull()
{
	if (size == MaxSize)
		return true;
	return false;
}

void Deck::displayEntireDeck()
{
	if (!isEmpty()) {
		for (int i = size-1; i >= 0; i--) { 
			Card *c = stack[i];
	
			cout << c->display() << " ";
		}
	}
	else
		cout << "Empty Stack" << endl;
}


//