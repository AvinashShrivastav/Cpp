#include <iostream>
using namespace std;
int main()
{
    int a, b, r;
    a = 10;
    b = 0;
    try{
if(b == 0)
    {
        throw "division by 0";
    }
    r = a/b;
    cout<<"Result = "<<r<<endl;
    }
    


catch (int arg)
{
    cout<<"catch - int"<<endl;
}
catch(const char* ch)
{
    cout<<"Error"<<endl<<ch;
}
cout<<"End"<<endl;

return 0;



}
