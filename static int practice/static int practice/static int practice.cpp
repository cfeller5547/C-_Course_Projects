// static int practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;



class Money {

public:

    Money() {
        money_amount = 0;
    }

    int add_money(int j) {
        money_amount = money_amount + j;
        return money_amount;
    }

    int get_money(){
        return money_amount;
    }

    
protected:
    int money_amount;
};


class Decisions {
    Money new_money;
public:

    void game_intro() {
        cout << "You began the story of your life, you will be asked random questions and depending on your answer you will" << endl;
        cout << "make a certain amount of money. Once you are 30 years old you will be taken to a car dealership where you can pick out a car." << endl;
        cout << "Depending on the amount of money you have you can have a more luxurious or basic vehicle. Goodluck!" << endl;
    }

    void highschool() {
        cout << "Do you want to enroll in a public(a) or private school(b)?" << endl;
        cin >> cow;
        if (cow == "a") {
            new_money.add_money(500);
            cout << "your decision to enroll in a public school earned you $500." << endl;
        }
        else if (cow == "b") {
            new_money.add_money(5000);
            cout << "your decision to enroll in a private school has paid off and earned you $5000." << endl;
        }
        else {
            cout << "invalid input. please enter 'a' or 'b' " << endl;
        }

    }

    void college() {
        cout << "Do you want to enroll in a university(b) or a community college(a)?" << endl;
        cin >> penguin;
        if (penguin == "a") {
            new_money.add_money(500);
            cout << "your decision to enroll in community college earned you $500." << endl;
        }
        else if (penguin == "b") {
            new_money.add_money(5000);
            cout << "your decision to enroll in a university has paid off due to surrounding yourself with scholarly peers and earned you $5000." << endl;
        }
        else {
            cout << "invalid input. please enter 'a' or 'b' " << endl;
        }

    }

    void friends() {
        cout << "Your friends asked you to hangout the day before an exam, do you choose to study(a) or hangout(b)?" << endl;
        cin >> chicken;
        if (chicken == "a") {
            new_money.add_money(5000);
            cout << "Choosing to study was a good choice, you got an A on your exam and earned $5000. " << endl;
        }
        else if (chicken == "b") {
            new_money.add_money(500);
            cout << "You had a great time with your friends but every decision effects your future, your exam grade was a B and you earn $500." << endl;
        }
        else {
            cout << "invalid input. please enter 'a' or 'b' " << endl;
        }

    }

    Money getMoney() { return new_money; }

protected:
    string penguin;
    string cow;
    string chicken;

};


class Car {

public:

    Car() {
        cost = 0;
    }

    int virtual get_car_cost() {
        return cost;
    }

protected:
    int cost;

};

class Toyota : public Car {

public:
    Toyota() {
        cost = 25000;
    }



protected:


};

class BMW : public Car {

public:

    BMW() {
        cost = 50000;
    }



protected:


};

class Ferrari : public Car {

public:

    Ferrari() {
        cost = 250000;
    }


protected:


};

class Range_Rover : public Car {

public:

    Range_Rover() {
        cost = 65000;
    }

protected:


};

class Dealership {
    Car new_car;
    
public:

    Dealership(Money m)
    {
        dMoney = m;
    }

    void car_purchase() {
        cout << endl;
        cout << endl;
        cout << "Its time to see how well the decisions you made in your life have paid off!" << endl;
        cout << endl;
        cout << "you currently have: " << dMoney.get_money() << "to spend on a car." << endl;
        cout << "Now lets select your car!" << endl;
        cout << endl;
        cout << endl;
        cout << "These are your options:" << endl;
        cout << endl;
        cout << "Toyota(a): " << car_toyota.get_car_cost() << endl;
        cout << "BMW(b): " << car_bmw.get_car_cost() << endl;
        cout << "Range Rover(c): " << car_range_rover.get_car_cost() << endl;
        cout << "Ferrari(d): " << car_ferrari.get_car_cost() << endl;
        cout << endl;
        cout << "Type in the letter of the car you want to purchase." << endl;
        cin >> input;
        if (input == "a") { 
            cout << "you chose to purchase a Toyota, lets see if you have enough money." << endl;
            if (dMoney.get_money() >= car_toyota.get_car_cost()) {
                cout << "Purchase was successful, enjoy your new Toyota!" << endl;//exit entire code after this
            }
            else {
                cout << "Unfortunately you don't have enough money for this car. You will be asked to leave the dealership now " << endl;
                cout << "because this was the cheapest car. Make better decisions in life." << endl; //now make it restart entire code to beginning
            }
        }
        else if (input == "b") {
            cout << "you chose to purchase a BMW, lets see if you have enough money." << endl;
            if (dMoney.get_money() >= car_bmw.get_car_cost()) {
                cout << "Purchase was successful, enjoy your new BMW!" << endl;//exit entire code after this
            }
            else {
                cout << "Unfortunately you don't have enough money for this car. Try picking a car you can afford." << endl;
                 //now make it take the user back to the car purchase options.
            }
        }
        else if (input == "c") {
            cout << "you chose to purchase a Range Rover, lets see if you have enough money." << endl;
            if (dMoney.get_money() >= car_range_rover.get_car_cost()) {
                cout << "Purchase was successful, enjoy your new Range Rover!" << endl;//exit entire code after this
            }
            else {
                cout << "Unfortunately you don't have enough money for this car. Try picking a car you can afford." << endl;
                //now make it take the user back to the car purchase options.
            }
        }
        else if (input == "d") {
            cout << "you chose to purchase a Ferrari, lets see if you have enough money." << endl;
            if (dMoney.get_money() >= car_ferrari.get_car_cost()) {
                cout << "Purchase was successful, enjoy your new Ferrari!" << endl;//exit entire code after this
            }
            
            else {
                cout << "Unfortunately you don't have enough money for this car. Try picking a car you can afford." << endl;
                //now make it take the user back to the car purchase options.
            }
        }
        else {
            cout << "incorrect input, please enter either 'a', 'b', 'c', or 'd'." << endl;
        }
    }




protected:
    string input;
    Toyota car_toyota;
    BMW car_bmw;
    Range_Rover car_range_rover;
    Ferrari car_ferrari;

    Money dMoney;
};




int main()
{
    
    Decisions new_decisions2;
    new_decisions2.game_intro();
    new_decisions2.highschool();
    new_decisions2.college();
    new_decisions2.friends();


    Dealership new_dealership2(new_decisions2.getMoney());

    new_dealership2.car_purchase();
    
    
    
}






//static int dog; //static ints should go into a public


//int Car::dog = 50; //static ints need to be initiated. do this under the class in this format.

