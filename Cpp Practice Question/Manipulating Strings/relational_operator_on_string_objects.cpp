#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("ABC");
    string s2("XYZ");
    string s3 = s1 + s2;

    if (s1 != s2)
    {
        cout<<s1<<" is not = "<<s2<<endl;

    }
    if (s1 > s2)
    {
        cout<<s1<<" is > "<<s2<<endl;
    }
    else if(s1 < s2 )
    {
        cout<<s1<<" is < "<<s2<<endl;
    }
    if(s3 == s1+ s2)
    {
        cout<<s3<<" = "<<s1 + s2<< endl;
    }
    int x = s1.compare(s2);
    if (x == 0)
    {
        cout<<"="<<endl;
    }
    else if(x > 0)
    {
        cout<<s1 <<" > "<<s2 <<endl;
    }
    else {
        cout<<s1 <<" < "<<s2 <<endl;
    }

    return 0;
}