

#include <iostream>

using namespace std;


void Quiz(int n) {

    if (n > 0) {
        cout << 0;
        Quiz(n - 1);
        cout << 1;
        Quiz(n - 1);
    }


    int x, y
}

int main()
{
    Quiz(2);
}

