#include <iostream>
using namespace std;

void test(int x)
{
    try{
        if (x == 1) throw(x);
        else if( x == 0) throw('x');
        else if (x == -1) throw(1.0);
        cout<<"End of try block"<<endl;
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
    catch(...)
    {
        cout<<"caught unspecified error"<<endl;
    }
    cout<<"End of try-catch block"<<endl;
}

int main()
{
    cout<<"Testing multiple throws and catches"<<endl;
    test(0);
    test(1);
    test('a'); //ascii value of char a is implicitely taken
    test(-1);
    test(2);

    return 0;
}