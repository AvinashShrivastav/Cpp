#include <iostream>
using namespace std;

void Myclass()
{
    try{
        throw "y";

    }
    catch(const char *)
    {
        cout<<"Exception inside myclass"<<endl;
        throw;
    }
}

int main()
{
    cout<<"Now main starts"<<endl;
    try
    {
        Myclass();
    }
    catch(const char*)
    {
        cout<<"Exception inside main"<<endl;
    }
    cout<<"Now main ends"<<endl;

    return 0;
}