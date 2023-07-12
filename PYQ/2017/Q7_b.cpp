#include <iostream>
using namespace std;

int main()
{
    int num1 = 567;
    int num2 = 678;
    cout<<num1<<" "<<num2 <<endl;
    int * ptr1;
    int * ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    cout<<num1<<" "<<num2;

}