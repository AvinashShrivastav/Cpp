#include <iostream>
using namespace std;
class personal
{
    public:
    int p();

};

int personal:: p()
{
    return 1;
}

int main()
{
    personal a;
    a.x = &personal::p;
    cout<<((a.*(a.x))());
}

//      a.x = &personal::p;
//        ^
// 5_1.cpp:19:19: error: 'class personal' has no member named 'x'
//      cout<<((a.*(a.x))());