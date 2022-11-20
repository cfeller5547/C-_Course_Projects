#include "Queue.h"


// practice creating objects, and learn modulus thing


Queue::Queue(int maxsize=10) {
    MaxSize = maxsize;
    carList = new string[maxsize];
    head = 0;
    rear = 0;
}

//Queue::Queue() {
//
//    Queue(10);
//}
 
Queue::~Queue() {
    delete carList;
}


void Queue::enqueue(string input)
{
    if (isFull())
        cout << "Is full";
    else {
        carList[rear] = input;
        rear = (rear + 1) % MaxSize;
    }
}

string Queue::dequeue()
{
    if (isEmpty())
        return "-999"; // means full
    else {
        string temp = carList[head]; // why we create a temp for dequeue here
        head = (head + 1) % MaxSize; // explain this part
        return temp;
    }
}

bool Queue::isEmpty()
{
    if (head == rear)
        return true;
    return false;
}

bool Queue::isFull() {
    if (head == (rear + 1) % MaxSize) // explain modulus stuff
        return true;
    return false;

}

void Queue::makeEmpty() {
    head = 0;
    rear = 0;
}



string Queue::peekQueue()
{
    if (isEmpty()) {
        return "-999";
    }
    return carList[head];
}

void Queue::displayQueue()
{
    if (!isEmpty()) {
        for (int i = head; i < rear; i++) {
            cout << carList[i] << endl;
        }
    }
    else {
        cout << "Queue is Empty" << endl;
    }
}
