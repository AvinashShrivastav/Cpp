#include <iostream>
using namespace std;

void divide( double x, double y)
{
    cout<<"inside function"<<endl;
    try{
        if (y == 0.0) throw(y);
        else{
            cout<<x/y;
        }
    }
    catch (double d)
    {
        cout<<"caught double error inside function"<<endl;
        throw;
    }
}



int main()
{

try{
divide(10.5, 0);
}
    
    catch(double d)
    {
        cout<<"caught error outside function"<<endl;
    }
    

}