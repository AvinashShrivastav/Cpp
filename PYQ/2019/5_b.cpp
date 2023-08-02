#include <iostream>
using namespace std;

class X
{
    int i1;
    public:
    X()
    {
        i1 = 15;
    }
    virtual void Display()
    {
        cout<<"i1"<<i1<<endl;
    }

};
class Y : public X
{
    int j1;
    public:
        Y()
        {
            j1 = 10;
        }
    void Display()
    {
        cout<<"j1"<<j1<<endl;
    }

};
class Z : public Y
{
    int k1;
    public:
        Z()
        {
            k1 = 20;
        }
    void Display()
    {
        cout<<"k1"<<k1<<endl;
    }

};

int main()
{
    X x;
    Y y;
    Z z;
    X *baseptr;
    baseptr = &x;
    baseptr->Display();
    baseptr = &y;
    baseptr->Display();
    baseptr = &z;
    baseptr->Display();

    return 0;


}