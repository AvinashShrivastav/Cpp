#include <iostream>
using namespace std;
template <class T>
void Swap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 12, b = 20;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    Swap(a,b);
    cout<<"a = "<<a<<" b = "<<b<<endl;
}