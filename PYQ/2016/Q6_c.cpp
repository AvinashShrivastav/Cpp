#include <iostream>
using namespace std;

int main( int argc, char * argv[])
{
    if (argc == 2)
    {
    string str = argv[1];
    cout<<str.length();
    }
    else{
        cout<<"Please pass string as command line";
    }
    

}