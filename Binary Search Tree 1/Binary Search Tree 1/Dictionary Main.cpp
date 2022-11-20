#include "Dictionary.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;


void readFile(Dictionary* dict) {
    fstream file;

    string definition, word;

    file.open("input.txt", ios::in);
    while(getline(file, word)){
        if(getline(file, definition)){
            dict->PutItem(word, definition);
        }
    }
    file.close();
    cout << "File successfully imported" << endl;
}

void writeFile(Dictionary* dict) {
    ofstream file;

    string word, def;
    file.open("input.txt", ios::trunc);
    dict->print(file);
    file.close();
    cout << "File successfully created" << endl;
}

int main()
{
    Dictionary d;
    string w{ "" };
    string def{ "" };
    string word, definition;
    
    while (true) {
        cout << "--- Dictionary ---" << endl;
        cout << "1. Add Word" << endl;
        cout << "2. Search for a word" << endl;
        cout << "3. Display words" << endl;
        cout << "4. Read file" << endl;
        cout << "5. Write to file" << endl;
        cout << "6. Quit" << endl;
        cout << "Choice: " << endl;
        string input;
        cin >> input;


        if (input != "1" && input != "2" && input != "3" && input != "4" && input != "5" && input != "6")
        {
            cout << "Incorrect choice. Your choices are: '1', '2', '3' '4' '5' or '6' " << endl;
        }
        else {

            if (input == "1") {
                cout << "Enter the word: " << endl;
                cin >> w;
                cout << "Enter the definition: " << endl;
                cin.ignore();
                getline(cin, def);
                d.PutItem(w, def);
            }

            else if (input == "2") {
                cout << "Word to search for: " << endl;
                cin >> w;
                d.resetTree();
                Node* temp = d.search(w);
                if (temp == NULL) {
                    cout << "Word not found";
                }
                else {
                    cout << w << "- " << temp->description << endl << endl;
                }
            }

            else if (input == "3") {
                cout << "****Current list of words****"<< endl << endl;
                d.print(cout);
            }

            else if (input == "4") {
                readFile(&d);
            }

            else if (input == "5") {
                writeFile(&d);
            }
            else if (input == "6") {
                return 0;
            }
        }
    }

}
    




