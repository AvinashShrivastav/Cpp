#include <iostream>
#include <string>
using namespace std;
template <class T1, class T2>
void display(T1 x, T2 y)
{
    cout<<x<<" "<<y<<endl;
}

int main()
{
    display(1999,"EBG");
    display(12.32,3656);

    return 0;
}