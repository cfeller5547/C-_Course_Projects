

#include <iostream>
#include "LinkedList.h"

LinkedList L;



int main()
{
    int findVal;
    int temp;
    L.addNode(10);
    L.addNode(4);
    L.addNode(7);
    L.displayList();
    std::cout << "Enter what you are searching for: " << std::endl;
    std::cin >> findVal;
    int temp = L.findNode(findVal);
    
}
