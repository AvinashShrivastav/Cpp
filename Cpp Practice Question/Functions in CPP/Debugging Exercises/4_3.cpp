#include <iostream>
using namespace std;
int p;
int & display();
int main()
{
    display() = 5;
    cout<<p;

    return 0;
}

int & display()
{
    return 2; //returning constant to reference
}