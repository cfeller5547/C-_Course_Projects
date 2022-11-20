

#include <iostream>
#include "Queue.h"
using namespace std;



Queue *queue;


void test_enqueue() {
    queue->enqueue("max");
    queue->enqueue("bob");
    queue->enqueue("chris");
    queue->enqueue("pete");
    queue->enqueue("isa");
}



int main()
{
    /*string my_arr[10];
    int carNum{};
    cout << "Congratulations on owning your own car wash." << endl;
    cout << "Enter the number of cars you want to allow in your car wash today." << endl;
    cin >> carNum;

    queue = new Queue(carNum);

    cout << "The maximum number of cars today is: " << queue->getMaxSize();

    cout << "Enter the names of everyone in line for car wash." << endl;*/
  
    /*for (int i = 0; i < queue->getMaxSize(); i++) {
        cin >> my_arr[i]; 
        queue->enqueue(my_arr[i]);
    }
   
    queue->peekQueue();*/


    queue = new Queue(8); 
    test_enqueue();
    /*cout << queue->peekQueue() << endl;
    string s = queue->dequeue();
    cout << queue->peekQueue() << endl;*/
   // queue->displayQueue();

    while (!queue->isEmpty())
    {
        cout << queue->dequeue() << endl;
    }

    cout << "displayQueue" << endl; 
    queue->displayQueue();
    queue->enqueue("bob");
    queue->enqueue("chris");

    cout << "displayQueue" << endl;
    queue->displayQueue();
    test_enqueue();
    cout << "displayQueue" << endl;
    queue->displayQueue();

}


