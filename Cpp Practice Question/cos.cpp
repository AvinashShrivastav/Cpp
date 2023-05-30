#include <iostream>
#include <cmath>

using namespace std;
int factorial(int);
int main()
{
    int x;
    int n;
    cout<<"Enter x and n :";
    cin>>x>>n;
    float cosx = 0;
    int a = 0;
    int i = 0;
    while( i <= n)
    {
        cosx += pow(-1,a)*pow(x,i)/factorial(i);
        i += 2;
        a+= 1;
    }
    cout<<"The value of cos("<<x<<") = "<<cosx;
}
int factorial(int num)
{
    int fact = 1;
    for (int i = num ; i >0; i--)
    {
        fact*=i;
    }
    return fact;
}
