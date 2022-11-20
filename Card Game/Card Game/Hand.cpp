#include "Hand.h"
#include <iostream>

void Hand::putCard(Card *input)
{
    if (!isFull()) {
        myArr[size++] = input;
        index++; 
    }
    else {
        std::cout << "Empty Deck" << std::endl;
    }
}

Card* Hand::getCard(int ndx) { 
    if (!isEmpty()) {
        return myArr[ndx];
    }
    else {
        return NULL; // means empty
    }
}

int Hand::getNumCards()
{
    return size;
}

bool Hand::isEmpty()
{
    if (size == 0)
        return true;
    return false;
}

bool Hand::isFull()
{
    if (size == MAXSIZE)
        return true;
    return false;
}

void Hand::makeEmpty()
{
    size = 0;

}

void Hand::display()
{
    if (!isEmpty()) {
        for (int i = size - 1; i >= 0; i--) { // bc stack we do a greater than, and i--
            Card* c = myArr[i];//assigning contents of stack index i to c 
            cout << c->display() << " ";
        }
        cout << "[" << countCards() << "]";
        cout << endl;
    }
    else
        cout << "Empty Hand" << endl;
}

void Hand::displayInitialDealerCard()
{
    if (!isEmpty()) {
        Card* visibleCard = myArr[1];
        cout << "* " << visibleCard->display() << " ";
        cout << endl;
    }
    else
        cout << "Empty Hand" << endl;
}


int Hand::countCards()
{
    int cardValue = 0;
    for (int i = 0; i < size; i++) {
        cardValue += getCard(i)->getCardValue(); //we got the card value from getcard and then we got(by using a pointer) the member "getCardValue()" from the object
    }
    return cardValue;
}

bool Hand::bust()
{
    if (countCards() > 21) //cardvalue is getting the size not the card numbers added, problem is the count cards function
        return true;
    return false;
}


