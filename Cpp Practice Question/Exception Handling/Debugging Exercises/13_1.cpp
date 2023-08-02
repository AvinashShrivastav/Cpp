#include <iostream>
using namespace std;

int main()
{
    int p, q;
    cout<<"Input two integer numbers : ";
    cin>>p>>q;
    int m;
    char t;
    try
    {
        if (q != 0)
        {
            float div = (float)p/q;
            if (div < 0)
                throw (t);
            cout<<"p/q = "<<div;

        }
        else 
        {
            throw (q);
        }
    }
    catch(int q)
    {
        cout<<"Dision by zero";
    }
    catch(char t)
    {
        cout<<"Division is less than 0";
    }
    return 0;
}