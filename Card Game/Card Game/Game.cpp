#include "Game.h"
#include <time.h>

void Game::playGames()
{
	int GameNum = 0;
	
	shuffle();
	while (d->getSize() > 10)
	{
		
		GameNum++;
		cout << "Game #" << GameNum << " Cards Remaining:" << d->getSize() << endl;

		playGame();

		cout << endl << "Press [enter]" << endl << endl;
		getchar();
		getchar();
	}
	cout << "Game Over - Cards Remaining:" << d->getSize() << endl;
}

void Game::playGame()
{
	cout << "The purse starts with - ";
	p->displayPurseAndWinnings();
	p->setWager();
	p->displayPurseAndWinnings();
	
	dealCards();

	displayHands();

	//cases for testing if player busted in the player play game, player has to plat until he is done, once this done do dealer
	p->playerPlayGame();
	dlr->dealerPlayGame();
	evaluate();
	 //
	clearHands();
}

void Game::dealCards()
{
	//player
	Card* temp = d->popCard();
	p->putCard(temp);
	Card* temp2 = d->popCard();
	p->putCard(temp2);

	//dealer
	Card* temp3 = d->popCard();
	dlr->putCard(temp3);
	Card* temp4 = d->popCard();
	dlr->putCard(temp4);
}

void Game::shuffle()
{
	d->shuffleDeck();
}

void Game::clearHands()
{
	dlr->makeDlrHandEmpty();
	p->makePlayerHandEmpty();
}

void Game::displayHands()
{
	cout << "Dealer Hand: ";
	dlr->displayInitialDealerHand();
	cout << "Player Hand: ";
	p->displayPlayerHand();
	cout << endl;
}


void Game::evaluate()
{
	bool won{false};
	bool lost{false};
	bool tie{false};

	if (p->isBlackJack() && dlr->isBlackJack()) {
		tie = true;
		cout << "Push" << endl;
	}
	else if (p->isBlackJack() && !dlr->isBlackJack()) {
		won = true;
		cout << "Player won!" << endl;
	}
	else if (dlr->isBlackJack() && !p->isBlackJack()) {
		lost = true;
		cout << "Player lost" << endl;
	}
	else if (p->playerBusted()) {
		lost = true;
		cout << "Player lost" << endl;
	}
	else if (dlr->dealerBusted()) {
		won = true;
		cout << "Player won!" << endl;
	}
	else if (!p->isBlackJack() && !dlr->isBlackJack() && p->getPlayerCardValue() == dlr->getDealerCardValue()) {
		tie = true;
		cout << "Push" << endl;
	}
	else if (p->getPlayerCardValue() > dlr->getDealerCardValue()) {
		won = true;
		cout << "Player won!" << endl;
	}
	else if (dlr->getDealerCardValue() > p->getPlayerCardValue()) {
		lost = true;
		cout << "Player lost" << endl;
	}

	p->updatePurse(won, lost, tie);
}





