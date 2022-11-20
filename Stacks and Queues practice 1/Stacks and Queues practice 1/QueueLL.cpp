#include "QueueLL.h"

using namespace std;

Node2::Node2() {
	next = NULL;
}

QueueLL::QueueLL() {
	head = NULL;
	rear = NULL;
}

bool QueueLL::isEmpty() {
	if (head == NULL)
		return true;
	return false;
}

void QueueLL::enqueue(int val) {
	Node2* temp = new Node2;
	temp->data = val;
	head = temp = rear;
	temp->next = NULL;
	if (isEmpty()) {
		head = temp;
		rear = temp;
	}
	else {
		rear->next = temp;
		rear = temp;
	}
}

void QueueLL::clearList() {

}

void QueueLL::printList() {

}
