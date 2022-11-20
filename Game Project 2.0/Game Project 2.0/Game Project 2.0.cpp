#include <iostream>
#include <cmath>
#include <string>
#include "PlayerClass.h"
#include "Global.h"

using namespace std;



    int main()
    {
        while (true) {
            cout << "--- MAIN MENU ---" << endl;
            cout << "1. Play Game" << endl;
            cout << "2. Test Functionality" << endl;
            cout << "3. Quit" << endl;
            cout << "Choice: " << endl;
            string input;
            cin >> input;

            
            if (input != "1" && input != "2" && input != "3")
            {
                cout << "Incorrect choice. Your choices are: '1', '2', '3'" << endl;
            }
            else {

                if (input == "1") {
                    playgame();

                }
                else if (input == "2") {
                    testfunctionality();
                }
                else if (input == "3") {
                    return 0;
                }
            }
        }
    }
