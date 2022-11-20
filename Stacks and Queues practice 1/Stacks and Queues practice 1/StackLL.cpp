#include "StackLL.h"
#include <iostream>
using namespace std;

Node::Node() {
	next = NULL;
}

StackLL::StackLL() {
	head = NULL;
}


bool StackLL::isEmpty() {
	if (head == NULL)
		return true;
	return false;
}

void StackLL::push(int val) {
	Node* temp = new Node;
	temp->data = val;
	if (!isEmpty()) {
		temp->next = head;
		head = temp;
	}

	else {
		temp->next = head;
		head = temp;
	}

}

int StackLL::pop() {
	if (isEmpty()) {
		return -999; //means nothing to pop off
	}

	Node* temp = head;
	head = head->next;
	int val = temp->data;
	delete temp;

	return val;

}
