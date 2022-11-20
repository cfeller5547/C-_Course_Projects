

#include <iostream>
using namespace std;
#include <time.h>
#include <fstream>
#include <string>


int division(int a, int b, int maxtries) {
    int attempts = 0;
    double correctnums = 0;
    while (attempts++ < maxtries) {
        int sum;
        int z;
        int MAXNUM = 100;
        srand(time(NULL));
        int random = rand() % MAXNUM;
        a = rand() % 100;
        b = a * (rand() % 100);
        cout << b << "/" << a << endl;
        cout << "what is the correct answer?" << endl;
        cin >> z;
        sum = b / a;
        if (z == sum) {
            cout << "Correct! The answer is: " << sum << endl;
            correctnums++;
        }
        else {
            cout << "Wrong, the correct answer is: " << sum << endl;
        }
    }
    return correctnums / maxtries * 100; 
}

int multiplication(int a, int b, int maxtries) {
   int attempts = 0;
    double correctnums = 0;
    while (attempts++ < maxtries) {
        int sum;
        int z;
        int MAXNUM = 100;
        srand(time(NULL));
        int random = rand() % MAXNUM;
        a = rand() % 100;
        b = rand() % 100;
        cout << b << "*" << a << endl;
        cout << "what is the correct answer?" << endl;
        cin >> z;
        sum = a * b;
        if (z == sum) {
            cout << "Correct! The answer is: " << sum << endl;
            correctnums++;
        }
        else {
            cout << "Wrong, the correct answer is: " << sum << endl;
        }
    }
    return correctnums / maxtries * 100;
} 


int subtraction(int a, int b, int maxtries) {
    int attempts = 0;
    double correctnums = 0;
    while (attempts++ < maxtries) {
        int sum;
        int z;
        int MAXNUM = 100;
        srand(time(NULL));
        int random = rand() % MAXNUM;
        a = rand() % 100;
        b = rand() % 100;
        cout << b << "-" << a << endl;
        cout << "what is the correct answer?" << endl;
        cin >> z;
        sum = a - b;
        if (z == sum) {
            cout << "Correct! The answer is: " << sum << endl;
            correctnums++;
        }
        else {
            cout << "Wrong, the correct answer is: " << sum << endl;
        }
    }
    return correctnums / maxtries * 100;
}


int addition(int a, int b, int maxtries) {
    int attempts = 0;
    double correctnums = 0;
    while (attempts++ < maxtries) {
        int sum;
        int z;
        int MAXNUM = 100;
        srand(time(NULL));
        int random = rand() % MAXNUM;
        a = rand() % 100;
        b = rand() % 100;
        cout << b << "+" << a << endl;
        cout << "what is the correct answer?" << endl;
        cin >> z;
        sum = a + b;
        if (z == sum) {
            cout << "Correct! The answer is: " << sum << endl;
            correctnums++;
        }
        else {
            cout << "Wrong, the correct answer is: " << sum << endl;
        }
    }
    return correctnums / maxtries * 100;
}


void writefile(int val) {
    ofstream outfile;
    outfile.open("report.txt");
    outfile << val << "%" << endl;
    outfile.close();

}

int main()
{   
    int num1;
    int num2;
    int MAXNUM = 100;
    num1 = rand() % MAXNUM;
    num2 = rand() % MAXNUM;

    int x;
    int y;
    int z;
    int sum = num1 + num2;
    srand(time(NULL));
    int random = rand() % MAXNUM;
    cout << "Math Tutor" << endl;
    for (;;) {
        cout << "What is your name?" << endl;
        string name;
        getline(cin, name);

        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quit" << endl;
        cout << "Select a number for the chosen problem type " << endl;
        cin >> x;
        cout << "How many problems do you want to solve? " << endl;
        cin >> y;
        if (x == 1) {
            int ret = addition(num1, num2, y);
            cout << "your score is:" << ret << "%" << endl;
            writefile(ret);
        }
        if (x == 2) {
            int ret = subtraction(num1, num2, y);
            cout << "your score is:" << ret << "%" << endl;
            writefile(ret);
        }
        if (x == 3) {
            int ret = multiplication(num1, num2, y);
            cout << "your score is:" << ret << "%" << endl;
            writefile(ret);
        }
        if (x == 4) {
            int ret = division(num1, num2, y);
            cout << "Your score is: " << ret << "%" << endl;
            writefile(ret);
        }
        if (x == 5) {
            cout << "Quit" << endl;
            return 0;
        }
    }
    
}



    



//ofstream outfile;
//outfile.open("report.txt");
//outfile << "heyyyyy";
//outfile.close();
//return 0;
