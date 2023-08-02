#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Hello World";
    string s2 = "Program in C++";
    string substr1 = s1.substr(0,4);
    string substr2 = s2.substr(s2.length()-2,2);
    int comp = substr1.compare(substr2);
    if(comp == 1)
    {
        cout<<substr1 <<">"<<substr2;
    }
    else if (comp == -1)
    {
        cout<<substr1 <<"<"<<substr2;
    }
    else{
        cout<<substr1 <<"="<<substr2;
    }
}