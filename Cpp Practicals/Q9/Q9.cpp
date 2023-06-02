// 9.	Define a class Person having name as a data member. 
// Inherit two classes Student and Employee from Person. 
// Student has additional attributes as course, marks and year and 
// Employee has department and salary. Write display() method in 
// all the three classes to display the corresponding attributes. 
// Provide the necessary methods to show runtime polymorphism.

#include <iostream>
using namespace std;

class Person
{   
    string name;

    public:
        void display(void)
        {
            cout<<"Name : "<<name<<endl;
        }
}


class Student : public Person
{   
    string course;
    float marks;
    int year;

    public:
        void display(void)
        {
            cout<<"Course : "<<course<<endl;
            cout<<"Marks : "<<marks<<endl;
            cout<<"Year : "<<year<<endl;
        }

}

class Employee : public Person
{
    string department;
    float salary;

    public:
        void display(void)
        {
            cout<<"Department : "<<department<<endl;
            cout<<"Salary : "<<salary<<endl;
        }
}

int main()
{
    return 0;
}