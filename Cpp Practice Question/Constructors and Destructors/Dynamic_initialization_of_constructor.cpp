
#include <iostream>
using namespace std;
class fixed_deposit
{
    long int P_amount;
    int Years;
    float Rate;
    float R_value;
    public:

    fixed_deposit(){}
    fixed_deposit(long int P, int y, float r = 0.12);
    fixed_deposit(long int P, int y, int r);
    void display(void);
};

fixed_deposit :: fixed_deposit(long int P, int y, float r )
{
    P_amount = P;
    Years = y;
    Rate = r;
    R_value = P_amount;
    for (int i = 1 ; i <= Years; i++)
    {
        R_value = R_value*(1 + Rate);
    }

}
fixed_deposit :: fixed_deposit(long int P, int y, int r)
{
    P_amount = P;
    Years = y;
    Rate = r;
    R_value = P_amount;
    for (int i = 1; i <= Years; i++)
    {
        R_value = R_value * (1 + float(Rate)/100); 
    }
}
void fixed_deposit :: display(void)
{
    cout<<endl<<"Principal Amount = "<<P_amount<<endl<<"Return Value = "<<R_value<<endl;
}

int main()
{
    fixed_deposit FD1, FD2, FD3;
    long int p; //principal 
    int y; //years
    int R; //Rate for percentage
    int r; //Rate for decimal
    cout<<"Enter amount, period, interest rate (in percent) : "<<endl;
    cin>> p>>y>>R;
    FD1 = fixed_deposit(p,y,R);

    cout<<"Enter amount, period, interest rate (in decimal) : "<<endl;
    cin>> p>>y>>r;
    FD2 = fixed_deposit(p,y,r);

    cout<<"Enter amount, period : "<<endl;
    cin>> p>>y;
    FD3 = fixed_deposit(p,y);

    cout<<"Deposit 1: "; FD1.display();
    cout<<"Deposit 2: "; FD2.display();
    cout<<"Deposit 3: "; FD3.display();

    return 0;
}