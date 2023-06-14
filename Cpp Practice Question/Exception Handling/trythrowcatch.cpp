#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Enter values of a and b :";
    cin>>a;
    cin>>b;
    int x = a-b;
    try
    {
        if (x !=0)
        {
            cout<<a/x;
        }
        else
        {
            throw(x);
        }
        
    }
    catch(int x)
    {
        cout<<"Exception!!"<<x;
    }

    return 0;
}