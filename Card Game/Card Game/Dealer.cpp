#include "Dealer.h"
#include "Deck.h"
#include "Hand.h"

void Dealer::putCard(Card* card)
{
	h->putCard(card);
}

bool Dealer::dealerBusted()
{
	return h->bust();	
}

bool Dealer::isBlackJack()
{
	if (h->countCards() == 21)
		return true;
	return false;	
}

void Dealer::dealerPlayGame()
{
	if (isBlackJack()) {
		return; //make it straight to evaluate
	}

	bool bExit = false;
	while (bExit == false) {

		if (h->countCards() >= 17) {
			bExit=true;
		}
		else {
			putCard(d->popCard());

			if (dealerBusted()) {
				cout << "Dealer busted!" << endl;
				bExit = true;
			}
		}
		
	}
	cout << "Dealer has: ";
	h->display();
}




