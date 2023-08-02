#include <iostream>
using namespace std;
int & fun(int & x)
{
    x++;
    return (x);
}

int main()
{
    int a = 5;
    fun(a) = a; //6
    cout<<a<<endl;
    fun(a) = ++a; //8
    cout<<a<<endl;
    fun(a) = a++; // 9
    cout<<a<<endl;

    return 0;
}