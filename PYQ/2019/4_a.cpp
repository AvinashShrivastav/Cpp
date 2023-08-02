#include <iostream>
using namespace std;

class Rationalnumber
{
    int p,q;
    public:
    Rationalnumber(int a, int b)
    {
        p = a;
        q = b;
    }
    Rationalnumber operator+(Rationalnumber &r1)
    {
        int num = p*r1.q + q*r1.p;
        int deno = q*r1.q;
        return(Rationalnumber(num, deno));
    }
    void Display(void)
    {
        cout<<p<<"/"<<q<<endl;
    }
};
int main()
{
    Rationalnumber r1(5,7);
    Rationalnumber r2(6,7);
    Rationalnumber r3(8,7);
    cout<<"Entered Rational Number :"<<endl;
    r1.Display();
    r2.Display();
    r3.Display();
    r3 = r1 + r2;
    cout<<"After calculation Rational Number :"<<endl;
    r1.Display();
    r2.Display();
    r3.Display();

    return 0;
}