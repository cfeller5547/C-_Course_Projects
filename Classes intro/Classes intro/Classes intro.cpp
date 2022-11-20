

#include <iostream>
#include <string>
using namespace std;

class Person
{
private: 
    string FirstName;

protected:
    string LastName;

public:
    int Age;

    Person(string f, string l, int a)
    {
        FirstName = f;
        LastName = l;
        Age = a;
    }
    string FullName()
    {
        return LastName+", "+ FirstName;
    }
    string n() { return LastName; }
};

class Student : public Person
{
protected:
    int GradYear;
    string n() { return LastName; }

public:
    Student(string f, string l, int a, int g)
        :Person(f,l,a)
    {
        GradYear = g;
    }

    int getGraduatesInYear() 
    { return GradYear; }
    void setGraduatesInYear(int g) 
    {  GradYear = g; }
    bool AlreadyGraduated()
    {
        return GradYear < 2020;
    }
 

};


int main()
{
    Person Peter("Peter", "Feller", 52);
    Student Chris("Chris", "Feller", 19, 2023);

    cout << Peter.FullName();
    cout << Chris.FullName();

    cout << Chris.AlreadyGraduated();
}

