#include <iostream>
using namespace std;

int main()
{
    int num[]= {56,75,22,18,90};
    int *ptr;
    int i;
    cout<<"The array values are : "<<endl;
    for (int i = 0; i <5; i++)
    {
        cout<<num[i]<<endl;
    }

    ptr = num; //pointer points to the base element of the array
    cout<<"Base postion of array : "<<ptr<<" and base element of the array "<<*ptr<<endl;
    ptr++;
    cout<<"ptr++ points to "<<*ptr<<endl;
    ptr--;
    cout<<"ptr-- points back to the base element "<<*ptr<<endl;
    ptr += 4;
    cout<<"ptr points to last element "<<*ptr;
     

     return 0;
}