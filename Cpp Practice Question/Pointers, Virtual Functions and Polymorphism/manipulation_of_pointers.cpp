#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;
    cout <<"The value of a is "<<*ptr<<endl;
    *ptr += 1;
    cout<<"Incremented value of a is "<<*ptr;

    return 0;
}