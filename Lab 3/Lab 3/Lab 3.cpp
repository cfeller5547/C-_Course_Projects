

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int weight;
    int distance;
    cout << "What is the distance the package is being shipped?" << endl;
    cin >> distance;

    if (distance < 10 || distance > 3000) {
        cout << "illegal distance value weight entered" << endl;
        return 0;
    }
    int unit = (distance - 1) / 500 + 1;
    cout << "distance = " << distance << " unit " << unit << endl;
    cout << "what is the weight of the package?" << endl;
    cin >> weight;
    
    
    if (weight <= 2 && weight > 0) {
        cout << "The total cost is $ "<< 1.10*unit << endl;
    }
    else if (weight > 2 && weight <= 6) {
        cout << "The total cost is $ " << 2.20*unit << endl;
    }
    else if (weight > 6 && weight <= 10) {
        cout << "The total cost is $ " << 3.70*unit << endl;
    }
    else if (weight > 10 && weight <= 20) {
        cout << "The total cost is $ " << 4.80 * unit << endl;
    }
    else {
        cout << "illegal weight value entered.";
    }
}


