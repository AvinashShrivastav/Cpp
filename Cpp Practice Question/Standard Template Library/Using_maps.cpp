#include <iostream>
#include <map>
#include <string>

using namespace std;
typedef map <string, int> phoneMap;
int main()
{
    string name;
    int number;
    phoneMap phone;
    cout<<"Enter three sets of name and number"<<endl;
    for(int i =0 ; i <3; i++)
    {
        cin>>name;
        cin>>number;
        phone[name] = number;
    }
    phone["Jac"] = 887766;

    phone.insert(pair<string, int> ("Bob",1234));
    cout<<phone.size()<<endl;
    //Printing using iterator

    phoneMap ::iterator p;
    for(p = phone.begin(); p != phone.end(); ++p)
    {
        cout<<(*p).first<<" : "<<(*p).second<<endl; //.first = key; .second = value;
    }

    // Searcing in map;
    cout<<"Enter name";cin>>name;
    cout<<phone[name];
}
