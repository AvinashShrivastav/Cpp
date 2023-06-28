#include <iostream>
using namespace std;
namespace Name1
{
    double x = 4.56;
    int m = 100;
    namespace Name2
    {
        double y = 1.33;
    }
} //no semicolon 

namespace  Name3//unnamed namespace
{
    int m = 200;
    int n = 300;
}

int main()
{
    using namespace Name1;
    cout<<"x = "<<x<<endl;
    cout<<"m = "<<m<<endl;
    cout<<"y = "<<Name1::Name2::y<<endl;
    using Name3::m;
    cout<<"m = "<<m<<endl;
    cout<<"n = "<<Name3::n;
}