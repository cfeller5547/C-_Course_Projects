#pragma once


#include <iostream>

class Account {

public:
    Account(double,double);


    double getBalance();

    double getrate();

    bool deposit(double);

    bool withdraw(double);

    bool accrueinterest(int);


protected:
    double balance;
    double interest_rate;

};





