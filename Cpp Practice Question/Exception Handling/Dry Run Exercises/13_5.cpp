#include <iostream>
using namespace std;
int main()
{
    int a, b, r;
    a = 10;
    b = 0;
    try{
    try{
if(b == 0)
    {
        throw b;
    }
    r = a/b;
    cout<<"Result = "<<r<<endl;
    }
    


catch (int arg1)
{
    cout<<"first catch"<<endl;
    throw;
}
    }
    
catch(int arg2)
{
    cout<<"2nd catch"<<endl;
}
cout<<"End"<<endl;

return 0;



}
