#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    int numberOfTerms;
    cout<<"Please enter number of terms : ";
    cin>>numberOfTerms;
    float sumOfSeries = 0;
    for (int i = 1 ; i <= numberOfTerms ; i++)
    {
        sumOfSeries += pow(-1,i+1)/pow(i,i);
    }
    cout<<"Sum of the series till "<<numberOfTerms<<" terms is "<<sumOfSeries;

    return 0;

}