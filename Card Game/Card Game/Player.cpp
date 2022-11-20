#include "Player.h"

void Player::setWager()
{
	cout << "Enter your starting wager: " << endl;
	cin >> currWager;
	purse = purse - currWager;
}

void Player::updatePurse(bool won, bool lost, bool push)
{
	if (won == true) {
		purse = purse + currWager;
		winnings = winnings + currWager;
	}
	else if (lost == true) {
		purse = purse - currWager;
		winnings = winnings - currWager;
	}
	else if (push == true) {
		purse = purse + currWager;
	}
}

void Player::putCard(Card *card)
{
	h->putCard(card);
}

bool Player::playerBusted()
{
	return h->bust();	
}



bool Player::isBlackJack()
{
	if (h->countCards() == 21)
		return true;
	return false;
}

void Player::playerPlayGame()
{
	char input{};

		if (isBlackJack()) {
			return;
		}

		while (true) {
			cout << "Hit(h) or Stand(s)" << endl;
			cin >> input;
			bool badInput = false;
			switch (input) {
				case 's': case 'S':
					
					cout << "player chose to stand" << endl;
					return;
				case 'h': case 'H':
					cout << "Player chose to Hit" << endl;
					putCard(d->popCard());
					break;
				default:
					badInput = true;
					cout << "Invalid input enter an h or s" << endl;
					break;
			}
			if (badInput == false) {
				h->display();
			}
			if (playerBusted()) {
				cout << "Player Busted!" << endl;
				return;
			}

		}
	}
