#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("one two three four");
    cout<<s<<endl;
    //using loop
    for(int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);

    }
    cout<<endl;

    //using overloaded subscript [] operator
    for(int i = 0; i <s.size(); i++)
    {
        cout<<s[i];
    }
    cout<<endl;

    //searching 
    int pos = s.find("two");
    cout<<"string found at "<<pos<<endl;
    cout<<s.find_first_of('t')<<endl;
    cout<<s.find_last_of('r')<<endl;
    cout<<s.substr(4,3);

}