#include <iostream>
#include <string>

using namespace std;
void display(string &str)
{
    cout<<"size = "<<str.size()<<endl;
    cout<<"length = "<<str.length()<<endl;
    cout<<"capacity = "<<str.capacity()<<endl;
    cout<<"maximum size = "<<str.max_size()<<endl;
    cout<<"empty : "<<(str.empty()? "yes" : "no")<<endl;
}
int main()
{
    string s1;
    cout<<"Initial Status "<<endl;
    display(s1);

    cout<<"Enter a word ";cin>>s1;
    cout<<"Status now"<<endl;
    display(s1);

    s1.resize(15);
    cout<<"After resizing"<<endl;

    display(s1);
}
