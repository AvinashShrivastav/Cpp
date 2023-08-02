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
        throw 0.0;
    }
    r = a/b;
    cout<<"Result = "<<r<<endl;
    }
    


catch (int arg1)
{
    cout<<"first catch"<<endl;
}
catch(float arg2)
{
    cout<<"float catch"<<endl;
}
catch(double arg2)
{
    cout<<"double catch"<<endl;
}
cout<<"End"<<endl;

return 0;



}
