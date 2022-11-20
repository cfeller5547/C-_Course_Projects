

#include <cmath>

#include <cstdio>

#include <string>

#include <iostream>

#include <algorithm>

using namespace std;

string stringFunc1(string& str)

{

    str = str + "!";

    return "goodbye world";

}


int main()
{

    string str;

    {

        string str = "hello world";

        cout << stringFunc1(str) << endl;

        cout << str << endl;

    }


    if (str == "hello world!")

        cout << "awesome sauce";

    else

        cout << "bummer dude";

}

