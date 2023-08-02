#include <iostream>
using namespace std;

class P
{
    public:
    P()
    {
        cout<<"Inside constructor"<<endl;

        try{
            throw "m";
        }
        catch(...)
        {
            cout<<"What is this??"<<endl;
            
        }
        cout<<"Still inside constructor"<<endl;
    }
    ~P()
    {
        cout<<"Inside destructor"<<endl;
    }

};


int main()
{
    cout<<typeof "Q";
    try{
        P var;
        throw "Q";
    }
    catch(...)
    {
        cout<<"Exception : Ends"<<endl;
    }
    cout<<"Exit point"<<endl;

    return 0;

}