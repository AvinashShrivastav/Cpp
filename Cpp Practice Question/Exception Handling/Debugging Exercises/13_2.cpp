#include <iostream>
using namespace std;
void practical(int x)
{
    try{
        throw 20;
        throw 30;

    }
    catch( int e)
    {
        cout<<"Exception caught"<<endl << e;

    }
    catch(...) //mixsing ellipse
    {
        cout<<"Exception caught";
    }
}

int main()

{
    practical(1);
    practical(2);
    return 0;
}