#include <iostream>
using namespace std;

class shape
{
    float length, breadth;
    public:
    virtual void area()
    {
        cout<<"Base class shape area"<<endl;
    }
};

class rectangle : public shape
{
    void area()
    {
        cout<<"Derived class rectangle area"<<endl;
    }

};

int main()
{
    shape A;
    rectangle B;
    shape *basePtr;
    basePtr = &A;
    basePtr->area();
    basePtr = &B;
    basePtr->area();

    return 0;
}