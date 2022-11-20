
#include "StackLL.h"
#include "Stack.h"
#include <iostream>
#include "Queue.h"
#include "QueueLL.h"

using namespace std;



StackLL stack;
Queue queue;

int main()
{
    //stack array (LIFO)
    //for (int x = 10; x > 0; x--)
    //{
    //    stack.push(x);
    //}
    //while (!stack.isEmpty())
    //{
    //    cout << stack.pop() << endl;
    //}
   

    //int y{};
    ////queue array (FIFO)
    //queue.enqueue(10);
    //queue.enqueue(9);
    //int ten=queue.dequeue();
    //queue.enqueue(7);
    //queue.enqueue(4);
    //queue.dequeue();
    //queue.enqueue(4);
    //queue.print();
    //queue.print();
    //queue.dequeue();

    //cout << "while" << endl; 
    //while (!queue.isEmpty())
    //{
    //    cout << queue.dequeue() << endl;
    //    y=queue.dequeue();
    //}
    //cout << "last" << endl;
    //queue.print();
    //cout << "y=" << y << endl;

    
    //QueueLL

    QueueLL queueLL;

    queueLL.enqueue(5);
    queueLL.enqueue(6);
    queueLL.enqueue(1);
    queueLL.enqueue(9);

    cout << "head: " << (queueLL.head)->data << endl;// should be 5
    cout << "rear: " << (queueLL.rear)->data; // should be 9 

    queueLL.printList();
}

