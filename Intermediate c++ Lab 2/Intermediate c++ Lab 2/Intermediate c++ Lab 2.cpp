
#include "AddressBook.h"
#include <iostream>
#include<string>


using namespace std;

AddressBook L;

//void FillList()
//{
//    L.appendNode("Nam1", "Las1", "Add1", "Pho1");
//    L.appendNode("Nam2", "Las2", "Add2", "Pho2");
//    L.appendNode("Nam3", "Las3", "Add3", "Pho3");
//    L.appendNode("Nam4", "Las4", "Add4", "Pho4");
//    L.appendNode("Nam5", "Las5", "Add5", "Pho5");
//    L.appendNode("Nam6", "Las6", "Add6", "Pho6");
//}

////
////void DeleteHead()
//{
//    int pos = L.findNode("Nam1"); 
//    cout << "Delete the first node" << endl;
//    L.deleteNode(pos);
//}
//
//void DeleteTail()
//{
//    int pos = L.findNode("Nam6"); 
//    cout << "Delete the last node" << endl;
//    L.deleteNode(pos);
//}
//
//void DeleteMiddle()
//{
//    int pos = L.findNode("Nam3");
//    // middle node
//    cout << "Delete a node out of the middle" << endl;
//    L.deleteNode(pos);
//}
//
//void TestStuff()
//{
//    FillList();
//
//    int pos = L.findNode("Nam3");
//    if (pos == 2)
//        cout << "Test 1 Passed" << endl;
//    else
//        cout << "Test 1 Failed" << endl;
//
//    pos = -1;
//    DeleteMiddle();
//    pos = L.findNode("Nam3");
//    if (pos == -99)
//        cout << "Test 2 Passed" << endl;
//    else
//        cout << "Test 2 Failed" << endl;
//
//    // last node
//    pos = -1;
//    DeleteTail(); 
//    pos = L.findNode("Nam6");
//    if (pos == -99)
//        cout << "Test 3 Passed" << endl;
//    else
//        cout << "Test 3 Failed" << endl;
//
//    // first node
//    pos = -1;
//    DeleteHead(); 
//    pos = L.findNode("Nam1");
//    if (pos == -99)
//        cout << "Test 4 Passed" << endl;
//    else
//        cout << "Test 4 Failed" << endl;
//
//    AddressBook Empty;
//    Empty.deleteNode(0);
//}
//

//void TestFindNodeFromIndex()
//{
//    FillList();
//
//    // happy path
//    int pos = L.findNode("Nam3");
//    cout << "Test 1 - Look up an existing contact" << endl;
//    Contact* temp = L.findNodeFromIndex(pos);
//    if (temp != NULL)
//        cout << temp->lastName << endl;
//
//    // look up index that does not work
//    cout << "Test 2 - Look up an non-existing index" << endl;
//    temp = L.findNodeFromIndex(10);
//    if (temp != NULL)
//        cout << temp->lastName << endl;
//    else
//    {
//        cout << "Test 2 passed";
//    }
//
//    AddressBook empty;
//    cout << "Test 3 - Look up an non-existing index in an empty list" << endl;
//    temp = empty.findNodeFromIndex(1);
//    if (temp != NULL)
//        cout << temp->lastName << endl;
//    else
//    {
//        cout << "Test 3 passed";
//    }
//}
//

//
//void testInsertNode() {
//    AddressBook Empty;
//
//    node* test = new node();
//    test->contact.address = "adr11";
//    test->contact.firstName = "firstName11";
//    test->contact.lastName = "lastName11";
//    test->contact.phoneNumber = "phoneNum11";
//    test->next = NULL;
//
//    Empty.insertNode(2, test);
//    cout << "Inerting to empty list" << endl;
//    Empty.displayList();
//
//    FillList();
//    L.insertNode(2, test);
//    cout << "Inerting into index 2 in list" << endl;
//    L.displayList();
//
//    node* test1 = new node();
//    test1->contact.address = "adr12";
//    test1->contact.firstName = "firstName12";
//    test1->contact.lastName = "lastName12";
//    test1->contact.phoneNumber = "phoneNum12";
//    test1->next = NULL;
//    L.insertNode(0, test1);
//    cout << "Inserting into index 0 in list" << endl;
//    L.displayList();
//}

void testInsertSorted() 
{
    AddressBook TestInsSorted;

    Contact contactA("A", "L1", "Addr1", "Ph1");
    Contact contactC("C", "L1", "Addr1", "Ph1");
    Contact contactE("E", "L1", "Addr1", "Ph1");
    Contact contactG("G", "L1", "Addr1", "Ph1");

    TestInsSorted.insertSorted(&contactE);
    TestInsSorted.displayList();
    TestInsSorted.insertSorted(&contactA);
    TestInsSorted.displayList();
    TestInsSorted.insertSorted(&contactG);
    TestInsSorted.displayList();
    TestInsSorted.insertSorted(&contactC);
    TestInsSorted.displayList();


}



int main()
{
    /*testInsertSorted();*/
    /*return 0;*/

    int edit{};
    Contact* tmp{ NULL };
    Contact* test{ NULL };
    int idx2{};
    int index{};
    string del{ "" };
    string fn{ "" };
    string ln{ "" };
    string address{ "" };
    string fn2{ "" };
    string phoneNum{ "" };
    string ed{ "" };
    string input2 = "";

    char input{ 0 };

    while (true)
    {

        cout << "-----Main Menu------" << endl << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Find Contact" << endl;
        cout << "3. Edit Contact" << endl;
        cout << "4. Delete Contact" << endl;
        cout << "5. Display Current Contacts" << endl;


        cin >> input;

        switch (input)
        {
        case '1':

            cout << "Enter the first name: " << endl;
            cin >> fn;
            cout << "Enter the last name: " << endl;
            cin >> ln;
            cout << "Enter the address: " << endl;
            cin.ignore();
            getline(cin, address);
            cout << "Enter the phone number: " << endl;
            cin >> phoneNum;
            L.appendNode(fn, ln, address, phoneNum);
            break;

        case '2':

            cout << "Enter the first name of the person to find: " << endl;
            cin >> fn2;
            L.findNodeIdx(fn2);
            test = L.findNodeFromIndex(idx2);
            cout << test->address;
            break;

        case '3':
            edit = L.findNodeIdx(ed);
            tmp = L.findNodeFromIndex(edit);

            cout << "Enter the first name of the person you wish to edit: " << endl;
            cin >> ed;
            cout << "Current information associated with: " << ed << endl << endl;
            cout << "Name: " << tmp->firstName << " " << tmp->lastName << endl;
            cout << "Address: " << tmp->address << endl;
            cout << "Phone number: " << tmp->phoneNumber << endl << endl << endl;


            do {
                cout << "Change first name? (Enter f)" << endl;
                cout << "Change last name? (Enter l)" << endl;
                cout << "Change address? (Enter a)" << endl;
                cout << "Change phone number? (Enter p)" << endl;
                cout << "I am done editing. (Enter e)" << endl;
                cin >> input2;

                if (input2 == "f") {
                    cout << "Enter the new first name for " << tmp->firstName << endl;
                    cin >> fn;
                }

                if (input2 == "l") {
                    cout << "Enter the new last name for " << tmp->firstName << endl;
                    cin >> ln;
                }


                if (input2 == "a") {
                    cout << "Enter the new address for " << tmp->firstName << endl;
                    cin >> address;
                }
                
                if (input2 == "p") {
                    cout << "Enter the new phone number for " << tmp->firstName << endl;
                    cin >> phoneNum;
                }

                if (input2 == "e") {
                    break;
                }
                    
                tmp->firstName = fn;
                tmp->lastName = ln;
                tmp->address = address;
                tmp->phoneNumber = phoneNum;
            } while (input2 != "e");
            break;
        case '4':

            cout << "Type the first name of the person contact you want to delete: " << endl;
            cin >> del;
            L.findThenDelete(del);
            break;

        case '5':

            L.displayList();
            break;

        default:
            cout << "Please enter a valid choice from the menu from 1-5. " << endl;
        }
        cout << endl;
    }

}

