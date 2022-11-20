

#include <iostream>
using namespace std;




struct student {
    string name;
    int age;
    int grad_year;

}; 

void outputstudentinfo(student st) {
    cout << st.name << endl;
    cout << st.age << endl;
    cout << st.grad_year << endl;

}


void inputstudentinfo(student *st) {
    cin >> (*st).name;
    cin >>  (*st).age;
    cin >>  (*st).grad_year;

}

int main()
{
    student chris;
    chris.name = "chris";
    chris.age = 19;
    chris.grad_year = 2023;

    
    outputstudentinfo(chris);
    inputstudentinfo(&chris);
    outputstudentinfo(chris);
}


