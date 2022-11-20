#include <iostream>
#include <cmath>
#include "PlayerClass.h"
#include "Global.h"
#include "EventClass.h"
#include "time.h"



using namespace std;


void testrand() {
    int rand_number = randfunc(10);
    cout << "your random number is: " << rand_number;
}

void playgame() {
    int curr_round = 0;
    EventClass* events = new EventClass();//
    storyopening();
    PlayerClass *player1 = setupplayer();
    addsupplies(player1);


    
    while (curr_round++ < player1->getrounds())
    {
        cout << endl;
        cout << "round: " << curr_round << "/" << player1->getrounds() << endl;
        cout << "Gold: " << player1->getGold() << endl;
        cout << "Health: " << player1->getHealth() << endl;
        int rand_event = randfunc(4);
        if (rand_event == 1) {
            events->thunderstorm(player1);
        }
        if (rand_event == 2) {
            events->bearattack(player1);
        }
        if (rand_event == 3) {
            events->biketirepop(player1);
        }
        if (rand_event == 4) {
            events->berries(player1);
        }

        cout << endl << endl;
        if (player1->lostgame()) {
            break;
        }
    }
    gameover(player1);
}

void testfunctionality() {
    while (true) {
        cout << "---Test Menu---" << endl;
        cout << "1. test randnumber" << endl;   
        cout << "2. test storyopening" << endl;
        cout << "3. test setupplayer" << endl;
        cout << "4. Exit" << endl;
        cout << endl << endl;
        cout << "enter the number of the function you want to test" << endl;
        string input;
        cin >> input;
        if (input != "1" && input != "2" && input != "3" && input != "4") {
            cout << "Invalid input. Choose '1' '2' '3' or '4' " << endl;
        }
        else if (input == "1") {
            testrand();
        }
        else if (input == "2") {
            teststoryopen();
        }
        else if (input == "3") {
            testplayersetup();
        }
        else if (input == "4") {
            return;
        }
        cout << endl << endl;
    }
}


int randfunc(int max) {
    srand(time(0));
    int randnumber = (rand() % max) + 1;
    return randnumber;
}

void storyopening() {
    cout << endl;
    cout << "Welcome to Forest Escape. You chose to participate in an event where you are lost in a forest and you need to escape." << endl;
    cout << "If you are succesful in escaping, you will be rewarded with a million dollars in recognition of your accomplishment." << endl;
    cout << "Goodluck!" << endl;
}

void teststoryopen() {
    cout << endl;
    cout << "output for the function named: storyopening"<<endl << endl;
    storyopening();
    string story1 = "Welcome to Forest Escape. You chose to participate in an event where you are lost in a forest and you need to escape.";
    string story2 = "If you are succesful in escaping, you will be rewarded with a million dollars in recognition of your accomplishment.";
    string story3 = "Goodluck!";
    if (story1 == "Welcome to Forest Escape. You chose to participate in an event where you are lost in a forest and you need to escape." && story2 == "If you are succesful in escaping, you will be rewarded with a million dollars in recognition of your accomplishment." && story3 == "Goodluck!") {
        cout << "function was successful." << endl;
    }
    else {
        cout << "function failed." << endl;
    }
}

PlayerClass *setupplayer() {
    cout << endl;
    string name;
    cout << "what is your player name?" << endl;
    cin >> name;
    cout << "Welcome " << name << endl;
    return new PlayerClass(name,  INITIALHEALTH, MAXROUNDS);
}

void testplayersetup() {
    cout << endl;
    const string PLAYERTESTNAME = "test";
    PlayerClass *player_test = new PlayerClass(PLAYERTESTNAME,  INITIALHEALTH, MAXROUNDS);
    if (player_test->getGold() != 0)
    {
        cout << "Player->getGold() failed" << endl;
    }
    else  {
        cout << "Player->getGold was successful" << endl;
    }

    if (player_test->getName() != PLAYERTESTNAME)
    {
        cout << "Player->getName() failed" << endl;
    }
    else {
        cout << "Player->getName() was successful" << endl;
    }
    if (player_test->getHealth() != INITIALHEALTH) {
        cout << "Player->getHealth() failed for INITIALHEALTH" << endl;
    }
    else  {
        cout << "Player->getHealth() was successful for INITIALHEALTH" << endl;
    }
    if (player_test->getrounds() != MAXROUNDS) {
        cout << "Player->getrounds() failed for MAXROUNDS" << endl;
    }
    else {
        cout << "Player->getrounds() was successful for MAXROUNDS" << endl;
    }
}

void addsupplies(PlayerClass* player1) {
   
    cout << endl;
    cout << "You were presented with three chests. Each chest contains something different that can help you on your journey." << endl;
    int choice = randfunc(3);
    switch (choice) {
    case 1:
        cout << endl;
        player1->addHealth(5);
        cout << "The chest opened gives you 5 health....." << endl;
        break;
    case 2:
        cout << endl;
        cout << "The chest opened was empty....." << endl;
        break;
    case 3:
        cout << endl;
        player1->addGold(5);
        cout << "The chest opened gives you 5 gold....." << endl;
        break;
    }
}



void gameover(PlayerClass* player1) {
    if (player1->wongame()) {
        cout << endl;
        cout << "Congrats! You Escaped the forest alive and won a million dollars!" << endl;
        cout << "stats" << endl;
        cout << "remaining health:" << player1->getHealth() << endl;
        cout << "remaining gold: " << player1->getGold() << endl;
        cout << endl;
        cout << endl;
    }
    else {
        cout << endl;
        cout << "You are in fatal condition and had to be rescued from the forest. You lost." << endl;
        cout << "stats" << endl;
        cout << "remaining health:" << player1->getHealth() << endl;
        cout << "remaining gold: " << player1->getGold() << endl;
        cout << endl;
        cout << endl;
    }

}




