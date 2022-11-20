

#include <iostream>

using namespace std;

class node {
   
public:    

    int data;
    node *next;

public:

    node(int val) {
        data = val;
        next = NULL;
    }

};


class list {

private:
    node *head;
    node *tail;
    node *curr;


public:

    list() {
        head = NULL;
        tail = NULL;
        curr = NULL;
    }

    void append_node(int value) {
        node *temp = new node(value);

        if (isempty()) {
            head = temp;
            tail = temp;
            curr = temp;
        }
        else {
            tail->next = temp; // next pointer of last node in list
            tail = temp; //reset the tail to the newly added node
            
        }
    }

    bool isempty() {
        return head == NULL;
    }

    void next() {
        curr = curr->next; // this is how iterate through node list. BOOM!
    }

    void displaylist() {
        curr = head;
        while (curr != NULL) {
            std::cout << curr->data << " ";
            next();
        }
        std::cout << endl;
    }

    void insertNode(int value, int position) {
        goTo(position);
        if (curr == NULL) {
            append_node(value);
        }
        else {
            node* temp = new node(value);
            temp->next = curr->next; // look at drawing, that curr pointing to next
            curr->next = temp; // now the node is inserted at this line
        }
         
    }

    void goTo(int idx) {
        curr = head; //we did this to start at the beginning, like when we iterated through list
        int n = 0; // counter variable
        while (curr && n < idx) {
            next();
            n++;

        }
    }

};
                                           

int main()
{
    list *l = new list();
    for (int x=0; x<5; x++)
        l->append_node(x);
    // outputs 0 1 2 3 4
    l->displaylist();
    // add an item at the 10th position
    l->insertNode(10, 10);
    // outputs 0 1 2 3 4 10
    l->displaylist();
    // add an item at the 10th position
    l->insertNode(12, 2);
    // outputs 0 1 2 12 3 4 10
    l->displaylist();
    // add an item at the 0th position
    l->insertNode(99, 0);
    // outputs 0 99 1 2 12 3 4 10
    l->displaylist();




    /*list l;

    l.append_node(10);
    l.append_node(2);
    l.displaylist();*/
}

