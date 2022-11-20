
#include <iostream>
#include <string>

using namespace std;


string reverse(string s) {
    //"" initializes output to an empty string
    string output = "";
    //s is the string and length is the length of the string, doesnt require a length because it knows the length
    int length = s.length();
    //allocate a standard array
    char char_array[100]; // char is when you work with letters
    cout << "enter the word you want to reverse: " << endl;
    //strcpy copies string into a character array(array of characters)
    strcpy_s(char_array, s.c_str());
    //length -1 because an array starts at 0
    for (int n = length-1; n >= 0; n--) { // checks length and knows length is 5
       
        output = output + char_array[n]; //think of output as " " and char array is the n which first is s then keeps going backwards
        cout << output << endl;;
        
    }
    return "";
}

int main()
{
    string one = "dog";
    string two = "is";
    string three = "happy";

    string combo = one + " "+ two + " " + three;
    cout << combo << endl;
    //its assigned to a string so put string chicken
    string chicken = reverse(combo);
    cout << chicken << endl;

}

