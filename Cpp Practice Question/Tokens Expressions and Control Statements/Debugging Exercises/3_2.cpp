#include <iostream>
using namespace std;
#define pi 3.14
int squareArea(int &);
int circleArea(int &);

int main()
{
    int a = 10;
    cout<<squareArea(a)<<" ";
    cout<<circleArea(a)<<" ";
    cout<<a<<endl;
    return 1;
}

int squareArea(int &a)  //reference is not needed
{
    return a*= a;
}

int circleArea(int & r) //return is double
{
    return r = pi*r*r;
}

// Error in circleArea function:
// The circleArea function is declared to return an int, but the calculation of the area involves multiplying pi (a double) with r*r (an int), resulting in a double. This can lead to data loss, as the function is expected to return an integer. To resolve this, either change the return type of circleArea to double or cast the result to int.

// Incorrect return value in main function:
// The main function should return 0 instead of 1 to indicate successful program execution. Conventionally, returning 0 from main means the program ran successfully without any issues.