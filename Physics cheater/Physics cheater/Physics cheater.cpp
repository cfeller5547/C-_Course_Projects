// Physics cheater.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <string>

using namespace std;

class Vector {

public:
    
    void vec_menu() {
        
        double c1;
        double c2;
        int compo{};
        cout << "-----Vectors Menu-----" << endl << endl;
        cout << "1. Find the magnitude given the components " << endl;
        cin >> vec_input;
        switch (vec_input) {
        case '1':
            cout << "How many components do you have?" << endl;
            cin >> compo;
            if (compo == 2) {
                cout << "Enter your first component: " << endl;
                cin >> c1;
                cout << "Enter your second component: " << endl;
                cin >> c2;
                double components = two_components_calc_magnitude(c1, c2);
                cout << "Magnitude: " << components << endl;
            }
        }
    }

    double two_components_calc_magnitude(double comp1, double comp2) { // we using these parameters bc we dont know the numbers yet
        double _comp1 = comp1; // why is it helpful that i did _comp1 = comp1, also did i even need to????
        double _comp2 = comp2;
        return sqrt((pow(_comp1, 2) + pow(_comp2, 2)) );
    }

    double four_components_calc_magnitude() {

    }

protected:

    char vec_input{};
    
};

class Velocity {

public:

    void velocity_menu() {
        double a;
        double b;
        double c;
        double a2;
        double c2;
        string t{""};
        char velocity_input{};
        double result{};
        string integral = "";

        cout << "-----Velocity Problems Menu-----" << endl << endl;
        cout << "1. Get integral of equation" << endl;
        cout << "2. Calculate instantaneous velocity" << endl;
        cin >> velocity_input;

        switch (velocity_input) {
        case '1': 
            cout << "Enter your a: " << endl;
            cin >> a;
            cout << "Enter the exponent: " << endl;
            cin >> c;
            integral = get_integral(a, c);
            cout << "The integral is : " << integral << endl;
            break;

        case '2':
            cout << "First enter your position equation" << endl;
            cout << "Enter your a: " << endl;
            cin >> a2;
            cout << "Enter the exponent: " << endl;
            cin >> c2;
            integral = get_integral(a2, c2);
            cout << "The integral is : " << integral << endl;
            cout << "input your t: " << endl;
            std::getline(cin, t);
            cout << "The instantaneous velocity at t = " << t << "is: " << integral * t;
        }
    }
    //enter an a, and your exponent on x
    string get_integral(int c, int e) {
        int newExp = e + 1;
        char buff[100];
        snprintf(buff, sizeof(buff), "(%d * x^%d)/%d", c, newExp, newExp);
        std::string buffAsStdStr = buff;

        return buff;
    }

    double get_instantaneous_velocity(double v) {

    }

protected:
    char velocity_input{};
    
};


class Rate {

public:

    void rate_menu() {
        double a;
        double b;
        double result{};
        cout << "-----Rate Menu-----" << endl << endl;
        cout << "1. Calculate rate ";
        cin >> rate_input;
        switch (rate_input) {
        case '1':
            cout << "Input your B value: ";
            cin >> a;
            cout << "Input your A value: ";
            cin >> b;
            calc_rate(a, b);
            result = calc_rate(a, b);
            cout << "Rate: " << result << endl;
        }
    }

    Rate() {
    }

    double eval_func(double x) {
        return (2 * pow(x, 2));
    }

    int calc_rate(double a, double b) {
        double f_of_a = eval_func(a);
        double f_of_b = eval_func(b);
        //(f(b) - f(a)) / b - a
        return ((f_of_b - f_of_a) / (b - a));
    }

protected:

    char rate_input{};
};

int main()
{
    Rate new_rate;
    Vector new_vector;
    Velocity new_velocity;

    char input{};
    cout << "------------Welcome to Physics - CheatMaster5000---------" << endl << endl << endl;
    cout << "-----Menu-----" << endl << endl;
    cout << "1. Rate" << endl;
    cout << "2. Vectors" << endl;
    cout << "3. Unit Conversion" << endl;
    cout << "4. Velocity problems" << endl;
    cin >> input;
    switch (input) {
    case '1': 
        new_rate.rate_menu();
        break;
    case '2':
        new_vector.vec_menu();
        break;
    case '4': 
        new_velocity.velocity_menu();
        break;
    }
}