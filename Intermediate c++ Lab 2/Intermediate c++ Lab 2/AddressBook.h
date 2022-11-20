#pragma once
#include <iostream>
#include "Contacts.h"
#include <string>

using namespace std;

class node {
public:
	Contact contact;
	node* next = NULL;

};

class AddressBook {

public:

	AddressBook() {
		head = NULL;
		tail = NULL;
		curr = NULL;
	}
		

	void appendNode(string, string, string, string);

	int findNodeIdx(string);

	void Next();

	void displayList();

	void deleteNode(int);

	bool isEmpty();

	void findThenDelete(string);

	node *insertNode(int, node*);

	Contact *findNodeFromIndex(int);

	void insertSorted(Contact*);


private:
	node* head{ NULL };
	node* tail{ NULL };
	node* curr{ NULL };

};

