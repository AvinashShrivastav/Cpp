#include <iostream>
#include <string>
using namespace std;

int main( int argc, char* argv[])
{
    if (argc <2)
    {
        cout<<"Please enter string as commandline "<<endl;
    }
    else if( argc == 2)
    {
        string str = argv[1];
        int count = 0;
        char vowel[5] = {'a','e','i','o','u'};
        for(int i = 0; i <str.length(); i ++)
        {
            for(int j = 0; j <5; j++)
            {
                if(str[i] == vowel[j])
                {
                    count++;
                }
            }
        }
        cout<<"Number of vowels = "<<count;
    }

    return 0;
}