#include <iostream>
using namespace std;
void swapint(int &a, int &b)
{
    int *ptr1 = &a;
    int *ptr2 = &b;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main()
{
    int a = 4, b = 6;
    cout<<a<<" "<<b<<endl;
    swapint(a,b);
    cout<<a<<" "<<b<<endl;
}