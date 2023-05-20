#include <iostream>
using namespace std;

int count = 0;

class alpha
{
    public:
        alpha()
        {
            count++;
            cout<<"Number of objects created : "<< count<<endl;

        }

        ~alpha()
        {
            cout<<"Number of objects destroyed : "<<count<<endl;
            count--;
        }
};

int main()
{
    cout<<"Enter Main"<<endl;
    alpha a1, a2, a3, a4;
    {
        cout<<"Enter block 1"<<endl;
        alpha a5;
    }
    {
        cout<<"Enter block 2"<<endl;
        alpha a6;
    }
    cout<<"Re-enter main"<<endl;

}