#include <iostream>
using namespace std;
int main()
{
    int y =5, z = 0, t = -4;
    int c = t || z < (y+5) && -4;
    // cout<<c;
    int c2 = 3*y/4%5 && 5;
    // cout<<c2;
    int c3 = !(4+5*y >= z-4) && (z-2);
    cout<<c3;
}