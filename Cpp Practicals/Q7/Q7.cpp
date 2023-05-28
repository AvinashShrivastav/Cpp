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




// int factors(int);
// int commonFactors(int, int);
// int main()
// {
//     int num1 = 5;
//     // cin>>num1;
//     int num2 = 6;
//     // cin>>num2;
//     factorOfNum1 = factors(6); 
//     for (int i = 0; i < num1; i ++)
//         {
//             cout<<factorOfNum1[i]<<" ";
//         }
// }
// int factors(int num1)
// {
//     int  factors(int num1);
//     {
//         int factorList[num1];
//         for(int i = 0; i < num1 ; i++)
//         {
//             factorList[i] = 0;
//         }
//         for (int i = 1; i <=num1; i ++)
//         {
//             if(num1 % i == 0)
//             {
//                 factorList[i-1] = 1;

//             }
//         }
        
//     }
//     return(factorList);
// }

// int commonFactors(int a, int b)
// {

// }

