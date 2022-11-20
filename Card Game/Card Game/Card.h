#pragma once
#include <string>
using namespace std;

enum class suit { hearts, spades, clubs, diamonds };
enum class cardName{ two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace };

class Card
{
private:
	suit _suit; 
	cardName _cardName;
	
public:
	
	Card(suit, cardName);

	suit getSuit() { return _suit; } 
	cardName getCardName() { return _cardName; }
	string display();
	string getSuitStr();
	string getCardStr();
	int getCardValue();
	

};

