#include "Card.h"
#include <string.h>
#include <iostream>
#include <stdio.h>

Card::Card(suit s, cardName c)
{
	_suit = s; //we set property equal to parameter value so we can use it
	_cardName = c;
}

string Card::display()
{
	return getSuitStr() + ":" + getCardStr();
}

string Card::getSuitStr()
{
	switch (_suit) {
	case suit::clubs:
		return "Clubs";
		
	case suit::diamonds:
		return "Diamonds";
	
	case suit::hearts:
		return "Hearts";
		
	case suit::spades:
		return "Spades";
		
	}
}

string Card::getCardStr()
{
	switch (_cardName) {
	case cardName::two:
		return "two";
		
	case cardName::three:
		return "three";
		
	case cardName::four:
		return "four";
		
	case cardName::five:
		return "five";
		
	case cardName::six:
		return "six";
		
	case cardName::seven:
		return "seven";
		
	case cardName::eight:
		return "eight";
		
	case cardName::nine:
		return "nine";
		
	case cardName::ten:
		return "ten";
		
	case cardName::jack:
		return "jack";
		
	case cardName::king:
		return "king";
		
	case cardName::queen:
		return "queen";
		
	case cardName::ace:
		return "ace";
		
	}
}

int Card::getCardValue()
{
	switch (_cardName) {
	case cardName::two:
		return 2;
	case cardName::three:
		return 3;
	case cardName::four:
		return 4;
	case cardName::five:
		return 5;
	case cardName::six:
		return 6;
	case cardName::seven:
		return 7;
	case cardName::eight:
		return 8;
	case cardName::nine:
		return 9;
	case cardName::ten:
		return 10;
	case cardName::jack:
		return 10;
	case cardName::queen:
		return 10;
	case cardName::king:
		return 10;
	case cardName::ace:
		return 11;
	}
}
