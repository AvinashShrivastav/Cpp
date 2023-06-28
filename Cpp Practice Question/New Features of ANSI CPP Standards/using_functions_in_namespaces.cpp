#include <iostream>
using namespace std;

namespace Functions
{   
    int divide( int x, int y)
    {
        return (x/y);
    }
    int prod(int x , int y);
}

int Functions :: prod(int x , int y)
{
        return (x*y);
}

int main()
{
    using Functions::divide; //divide means calling divide function..we are impoting here not calling
    cout<<"Division :"<<divide(100,5)<<endl;
    cout<<"Product : "<<Functions::prod(100,50)<<endl;

    return 0;
}