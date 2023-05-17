//Dynamic Initialization of constructor
#include <iostream>
using nampespace std;

class fixed_deposit
{
    public:
    long int P_amount;
    int years;
    float Rate;
    float R_value;

    fixed_deposit(){}
    fixed_deposit(long int P, int y, float r = 0.12);
    fixed_deposit(long int P, int y, float r);
};

fixed_deposit :: fixed_deposit(long int P, int y, float r)
{
    //incomplete
}