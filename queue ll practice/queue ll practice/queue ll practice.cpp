// queue ll practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "QueueLL.h"

QueueLL queue;

void testQueue() {
    queue.enqueue("bob");
    queue.enqueue("max");
    queue.enqueue("chris");

}

void testFillAndEmptyQueue() {
    queue.enqueue("bob");
    queue.enqueue("max");
    queue.enqueue("chris");
    while (!queue.isEmpty())
        cout << queue.dequeue() << endl;
}

void testPeekOnEmptyQueue() {
    while (!queue.isEmpty())
        queue.dequeue();
    cout << queue.peek() << endl;
}


int main()
{
    testFillAndEmptyQueue();
    testPeekOnEmptyQueue();


    //cout << queue.peek();

    //testQueue();
    //cout << queue.peek() << endl;
    //queue.dequeue();
    //cout << queue.peek();

    
}

