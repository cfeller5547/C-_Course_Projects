#include "AddressBook.h"
#include <iostream>
#include <string>
using namespace std;


	

node *AddressBook::insertNode(int index, node* ptr) {
	string fn = ptr->contact.firstName;
	string ln = ptr->contact.lastName;
	string address = ptr->contact.address;
	string phoneNum = ptr->contact.phoneNumber;
	curr = head;
	node* beforeCurr{ NULL };

	if (isEmpty()) {
		appendNode(fn, ln, address, phoneNum);
		return head;
	}
	else {
		if (index == 0)
		{
			ptr->next = head; 
			head = ptr; 
		}
		else {
			beforeCurr = head;
			for (int i = 0; i < index && curr != NULL; i++) {
				beforeCurr = curr;
				curr = curr->next;
			}

			if (curr != NULL) {
				beforeCurr->next = ptr;
				ptr->next = curr;
			}
		}
	}
}
	

	void AddressBook::insertSorted(Contact *temp) {
		curr = head;
		int idx = 0;
		string fn = temp->firstName;
		string ln = temp->lastName;
		string address = temp->address;
		string phoneNum = temp->phoneNumber;

		while (curr != NULL) {
			string name1 = temp->firstName;
			string currName = curr->contact.firstName;
			int ret = name1.compare(currName); 
			if (ret < 0) {
				break;
			}
			Next();
			idx++;
		}
		if (curr == NULL)
		{
			appendNode(fn, ln, address, phoneNum);
		}
		else
		{
			node* temp2 = new node;
			temp2->contact = *temp;
			insertNode(idx, temp2);
		}
	}

	void AddressBook::appendNode(string firstName, string lastName, string address, string phoneNumber) {
		node* temp = new node; 
		temp->next = NULL; 
		temp->contact.firstName = firstName;
		temp->contact.lastName = lastName;
		temp->contact.address = address;
		temp->contact.phoneNumber = phoneNumber;

		if (!isEmpty()) { 
			curr = head;
			while (curr->next != NULL) {
				curr = curr->next; 
			}
			curr->next = temp; 
		}
		else {
			head = temp; 
		}
	}

	void AddressBook::Next() {
		curr = curr->next;
	}

	void AddressBook::displayList() {
		curr = head; 
		while (curr != NULL) {
			cout << "Name: " << curr->contact.firstName << " "; 
			cout << curr->contact.lastName << " " << endl;;
			cout << "Address: " << curr->contact.address << " " << endl;;
			cout << "Phone number: " << curr->contact.phoneNumber << " " << endl;
			Next();
			cout << endl;
		}
		
	}

	void AddressBook::deleteNode(int position_input) {  
		node* previous = NULL;

		
		curr = head;
		for (int i = 0; i < position_input; i++) {
			previous = curr;
			Next();
		}
			if (curr == head)
			{
				if (curr != NULL) {
					head = curr->next;
					delete previous;
				}
			}
			else {
				previous->next = curr->next;
			}
			delete curr;
			curr = head;
		
	}

	bool AddressBook::isEmpty() {
		return head == NULL;
	}

	int AddressBook::findNodeIdx(string name) {
		curr = head;
		int idx = 0;
		while (curr != NULL) {
			if (curr->contact.firstName == name) {
				return idx;
			}
			else {
				Next();
				idx++;
			}
		}
		return -99; // this means not found
	}

	Contact *AddressBook::findNodeFromIndex(int index) {
		curr = head;
		for (int i = 0; (i < index && curr!=NULL); i++) {
			curr = curr->next;
		}
		if (curr != NULL) {
			return &curr->contact;
		}
		else {
			return NULL;
		}
	}

	void AddressBook::findThenDelete(string pos) {
		int found;
		found = findNodeIdx(pos);
		deleteNode(found);
	}



