#pragma once
#include <iostream>


struct node {
	int data;
	node* next;

};

class LinkedList
{
public:

	LinkedList() {
		head = NULL;
		tail = NULL;
		curr = NULL;
	}

	bool isEmpty() {
		if (head == NULL) {
			return true;
		}
		else {
			return false;
		}
	}

	void Next() {
		curr = curr->next;
	}

	void addNode(int val) { // only create a temp when you are adding a node

		node* temp = new node;
		temp->next = NULL;
		temp->data = val;

		if (!isEmpty()) {
			curr = head; // 
			while (curr->next != NULL) {
				Next();
			}
			curr->next = temp; // why cant we just say curr = temp?
		}
		else {
			head = temp;
		}
	}

	void displayList() {
		curr = head;
		while (curr != NULL) {
			std::cout << curr->data << std::endl;
			Next();
		}
	}

	int findNode(int val) {
		curr = head;
		int idx = 0;
		while (curr != NULL) {
			if (curr->data == val) {
				return idx;
			}
			else {
				Next();
				idx++;
			}
		}
		return -99; // this means not found
	}
	

private:
	node* head;
	node* tail;
	node* curr;

};

