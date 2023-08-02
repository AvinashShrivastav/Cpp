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
        throw 0;
    }
    r = a/b;
    cout<<"Result = "<<r<<endl;
    }
    


catch (int arg1)
{
    cout<<"first catch"<<endl;
}
catch(int arg2)
{
    cout<<"end catch"<<endl;
}
cout<<"End"<<endl;

return 0;



}
