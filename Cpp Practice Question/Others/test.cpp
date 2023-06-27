#include <iostream>
using namespace std;

int main()
{
    int list[] = {2,4,-5,6,7,0,-1,6};
    bool pos = true;
    int i = 0;
    while (pos && list[i] !=0)
    {
        pos = (list[i++]>0);
    }
    cout<<pos<<" "<<i;
}