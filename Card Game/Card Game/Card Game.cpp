
#include "Card.h"
#include <iostream>
#include "deck.h"
#include "Hand.h"
#include "Game.h"
#include <time.h>
using namespace std;





void testGetSuit() {
    Card card(suit::hearts, cardName::king);
    std::cout << card.getCardValue();

}

void testPush() {
    Deck deck;
    Card* card = new Card(suit::hearts, cardName::queen);
    Card* card2 = new Card(suit::clubs, cardName::jack);
    Card* card3 = new Card(suit::diamonds, cardName::eight);
    Card* card4 = new Card(suit::spades, cardName::six);
    deck.pushCard(card);
    deck.pushCard(card2);
}

void testCountCards() {
    Hand hand;
    Deck deck;
    Card* temp = deck.popCard();
    hand.putCard(temp);
    Card* temp2 = deck.popCard();
    hand.putCard(temp2);
    cout << "Hand Currently has: ";
    hand.display();
    cout << "total: ";
    cout << hand.countCards();

}

void testPlayGame()
{
    Deck* deck = new Deck();
    Dealer* dlr = new Dealer(deck);
    Player* ply1 = new Player(deck);
    Game* game = new Game(dlr, ply1, deck);

    game->playGames();
}

void testShuffleDeck() {
    Deck deck;
    cout << "Deck before shuffle" << endl << endl;
    deck.displayEntireDeck();
    cout << endl << endl;
    cout << "Deck after shuffle" << endl << endl;
    deck.shuffleDeck();
    deck.displayEntireDeck();
}


void testFunctionality() {
    while (true) {
        cout << "---Test Menu---" << endl;
        cout << "1. test getSuit" << endl;
        cout << "2. test push" << endl;
        cout << "3. test countCards" << endl;
        cout << "4. test playGame" << endl;
        cout << "5. test shuffleDeck" << endl;
        cout << "6. Exit";
        cout << endl << endl;
        cout << "enter the number of the function you want to test" << endl;
        string input;
        cin >> input;
        if (input != "1" && input != "2" && input != "3" && input != "4" && input != "5" && input != "6") {
            cout << "Invalid input. Choose '1' '2' '3' '4' '5' or '6' " << endl;
        }
        else if (input == "1") {
            testGetSuit();
        }
        else if (input == "2") {
            testPush();
        }
        else if (input == "3") {
            testCountCards();
        }
        else if (input == "4") {
            testPlayGame();
        }
        else if (input == "5") {
            testShuffleDeck();
        }
        else if (input == "6") {
            return;
        }
        cout << endl << endl;
    }
}




void explainRules()
{
    cout << "welcome to blackjack!" << endl;
    cout << "The first thing you will have to do is place your bet/wager" << endl;
    cout << "After this cards will be dealt by the dealer to the player as well as the dealer himself" << endl;
    cout << "The dealer will have one card facing up and one facing down" << endl;
    cout << "The player's goal is to get as close to 21 as possible" << endl;
    cout << "Each round the player can choose to either hit, which means ask for an extra card." << endl;
    cout << "Or to stand, which means they do not want to receive any cards." << endl;
    cout << "The dealer gets cards until they add up to at least 17 and then he must stop." << endl;
    cout << "If the dealer or player exceeds 21 this is called a bust, and the person who busted loses the round." << endl;
    cout << "Goodluck!" << endl << endl;
}


int main()
{
    srand(time(NULL));
    
    

    //testCountCards();

    while (true) {
        cout << "--- MAIN MENU ---" << endl;
        cout << "1. Play Game" << endl;
        cout << "2. Rules" << endl;
        cout << "3. Run Test Mode" << endl;
        cout << "3. Quit" << endl;
        cout << "Choice: " << endl;
        string input;
        cin >> input;


        if (input != "1" && input != "2" && input != "3" && input != "4")
        {
            cout << "Incorrect choice. Your choices are: '1', '2', '3'" << endl;
        }
        else {

            if (input == "1") {
                testPlayGame();
            }
            else if (input == "2") {
                explainRules();
            }
            else if (input == "3") {
                testFunctionality();
            }
            else if (input == "4") {
                return 0;
            }
        }
    }

}




