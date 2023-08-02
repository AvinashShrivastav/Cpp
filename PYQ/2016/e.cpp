#include <iostream>
using namespace std;

int main()
{
    char vowel[5] = {'a','e','i','o','u'};
    char charArray[7] = {'a','v','i','n','a','s','h'};
    for (int i = 0; i <7; i++)
    {
        for (int j = 0; j <5; j++)
        {
            if (charArray[i] == vowel[j])
            {
                charArray[i] = '*';
            }
        }
    }
    for (int i = 0; i <7; i++)
    {
        cout<<charArray[i];
    }

    return 0;
}