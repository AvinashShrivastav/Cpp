// 9.	Define a class Person having name as a data member. 
// Inherit two classes Student and Employee from Person. 
// Student has additional attributes as course, marks and year and 
// Employee has department and salary. Write display() method in 
// all the three classes to display the corresponding attributes. 
// Provide the necessary methods to show runtime polymorphism.

#include <iostream>
using namespace std;

class Person
{   protected:
    string name;

    public:
    Person(string Pname)
    {
        name = Pname;
    }
        virtual void display(void) 
        {
            cout<<"Name : "<<name<<endl;
        } 
};


class Student : public Person
{   
    string course;
    float marks;
    int year;

    public:
    Student(string name, string Mcourse, float mark, int yrs) : Person(name)
    {
        course = Mcourse;
        marks = mark;
        year = yrs;
    }
        void display(void)
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Course : "<<course<<endl;
            cout<<"Marks : "<<marks<<endl;
            cout<<"Year : "<<year<<endl;
        }

};

class Employee : public Person
{
    string department;
    float salary;

    public:
        Employee(string Ename, string dept, float sal) : Person(Ename)
        {
            department = dept;
            salary = sal;
        }
        void display(void)
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Department : "<<department<<endl;
            cout<<"Salary : "<<salary<<endl;
        }
};

int main()
{
    Person * perPtr;
    Student S1("Ravi","CS",123,2023);
    Employee E1("Anshu", "Tech",900000);
    perPtr = &E1;
    cout<<"Employee's details :"<<endl;
    perPtr->display();
    perPtr = &S1;
    cout<<endl;
    cout<<"Student's details :"<<endl;
    perPtr->display();

    return 0;
}



/*
Output :

PS C:\Users\hp\Desktop\Cpp\Cpp Practicals\Q8> cd "c:\Users\hp\Desktop\Cpp\Cpp Practicals\Q9\" ; if ($?) { g++ Q9.cpp -o Q9 } ; if ($?) { .\Q9 }
Employee's details :
Name : Anshu
Department : Tech
Salary : 900000

Student's details :
Name : Ravi
Course : CS
Marks : 123
Year : 2023
PS C:\Users\hp\Desktop\Cpp\Cpp Practicals\Q9> 

*/