#pragma once
#include <string>
using namespace std;

class PlayerClass {

public:
    PlayerClass(string, int, int);//Constructor
    

    ~PlayerClass();//Destructor

    

    //rounds
    void addround(int);
    int getrounds();


    //Health interface
    void addHealth(int);
    void takeHealth(int);
    int getHealth() const;
    string getName();

    //Gold interface
    int getGold() const;
    void addGold(int);
    void takeGold(int);

    void displayStatus() const;

    bool wongame();
    bool lostgame();

private:
    string name;
    int maxHealth;
    int health;
    int gold;
    int round;
    int maxrounds;
};

