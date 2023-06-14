#include <iostream>
using namespace std;

void test(int x) throw()
{

        if (x == 1) throw(x);
        else if( x == 0) throw('x');
        else if (x == -1) throw(1.0);
        cout<<"End of try block"<<endl;

   
}

int main()
{
    try{
        test(0);
        test(1);
        test(-1);
        test(2);
    }
     catch(char c)
    {
        cout<<"caught a character"<<endl;
    }
    catch(int a)
    {
        cout<<"caught an integer"<<endl;
    }
    catch( double d)
    {
        cout<<"caught a double"<<endl;
    }


    return 0;
}