#include "QueueLL.h"
#include <iostream>


void QueueLL::enqueue(string input)
{
	Node* temp = new Node(input);

	if (isEmpty()) {
		rear = head = temp;
	}
	else {
		rear->Next = temp; //these two lines
		rear = temp;
	}
}

string QueueLL::dequeue(){

	if (isEmpty()) {
		return "NULL";
	}
	else {
		Node* temp = head;
		string ret = temp->data;
		head = head->Next;
		delete temp;
		return ret;
	}
}

bool QueueLL::isEmpty()
{
	if (head == NULL)
		return true;
	return false;
}

string QueueLL::peek()
{
	if (!isEmpty()) {
		return head->data;
	}
	else {
		return "NULL";
	}
}
