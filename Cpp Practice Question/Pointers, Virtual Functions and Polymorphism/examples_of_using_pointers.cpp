#include <iostream>
using namespace std;

int main()
{
    int a, *ptr1, **ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;
    cout<<"Address of a is "<<&a<<" and ptr1 is point to "<<ptr1<<endl;
    cout<<"Address of ptr1 is "<<&ptr1<<" and now ptr2 is pointing to "<<ptr2<<endl;
    cout<<"After incrementing the value of addresses :"<<endl;
    ptr1 += 2;
    cout<<"Address of a is "<<&a<<" and now ptr1 is point to "<<ptr1<<endl;
    ptr2 += 2;
    cout<<"Address of ptr1 is "<<&ptr1<<" and now ptr2 is pointing to "<<ptr2;

    return 0;


}