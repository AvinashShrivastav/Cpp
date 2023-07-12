/*
1. Write a program to compute the sum of the first n terms of the following series:
S=1-1/2^2 +1/3^3 -…   1/n^n 
The number of terms n is to be taken from the user through the command line. If the 
command line argument is not found then prompt the user to enter the value of n.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main( int argc, char * argv[])
{
    int numberOfTerms;
    if (argc == 1){
        cout<<"Command line input not passed!"<<endl<<"Please Enter the number of terms ";
        cin>>numberOfTerms;
    }
    else
    {
        numberOfTerms = stoi(argv[1]);
    }
    
    cout<<"Entered number of terms : "<<numberOfTerms<<endl;
    float sumOfSeries = 0;
    for (int i = 1 ; i <= numberOfTerms ; i++)
    {
        sumOfSeries += pow(-1,i+1)/pow(i,i);
    }
    cout<<"Sum of the series till "<<numberOfTerms<<" terms is "<<sumOfSeries;

    return 0;

}


/*

Output :
case 1: 
Command line input not passed!
Please Enter the number of terms 6
Entered number of terms : 6
Sum of the series till 6 terms is 0.783429

case 2:
PS C:\Users\hp\Desktop\Cpp\Cpp Practicals\Q1> ./Q1 '6'
Entered number of terms : 6
Sum of the series till 6 terms is 0.783429
PS C:\Users\hp\Desktop\Cpp\Cpp Practicals\Q1>

*/
