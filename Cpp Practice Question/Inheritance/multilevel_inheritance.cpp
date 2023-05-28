#include <iostream>

using namespace std;

class student
{
    protected:
        int roll_number;
    public:
        void get_number(int);
        void put_number();
};

void student :: get_number(int a)
{
    roll_number = a;
}
void  student :: put_number()
{
    cout<< "Roll Number : "<<roll_number<<endl;
}

class test : public student //First level derivation
{
    protected:
        float sub1;
        float sub2;
    public:
        void get_marks(float, float);
        void put_marks();
};

void test :: get_marks(float a, float b)
{
    sub1 = a;
    sub2 = b;
}
void  test :: put_marks()
{
    
    cout<< "Marks in Sub 1 : "<<sub1<<endl;
    cout<< "Marks in Sub 2 : "<<sub2<<endl;
}

class result : public test
{   
    float total;
    public:
        void display(void);
};
void result :: display(void)
{
    total = sub1 + sub2;
    put_number();
    put_marks();
    cout<<"Total : "<<total;
}

int main()
{
    result student1;
    student1.get_number(121);
    student1.get_marks(20.0,60.0);
    student1.display();

    return 0;
}