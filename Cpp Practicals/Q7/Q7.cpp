/*
7.	Write a program to calculate GCD of two numbers. 
*/

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter num 1 : ";
    cin>>a;
    cout<<"Enter num 2 : ";
    cin>>b;
    if (a<b)
    {
        while (b % a != 0)
        {
            a = b%a;
        }
        cout<<"Required GCD : "<<a;
    }
    else 
    {
        while (a % b != 0)
        {
            b = a%b;
        }
        cout<<"Required GCD : "<<b;
    }


}

/*
Output:

PS C:\Users\hp\Desktop\Cpp> cd "c:\Users\hp\Desktop\Cpp\Cpp Practicals\Q7\" ; if ($?) { g++ Q7.cpp -o Q7 } ; if ($?) { .\Q7 }
Enter num 1 : 66
Enter num 2 : 4
Required GCD : 2
PS C:\Users\hp\Desktop\Cpp\Cpp Practicals\Q7> 

*/



