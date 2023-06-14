#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outf("item");
    cout<<"Enter name:";
    char name[20];
    cin>>name;
    outf<<name<<"\n";
    float price;
    cin>>price;
    outf<<price;
    outf.close();
    ifstream inf("item");
    inf>>name;
    cout<<name;
    inf>>price;
    cout<<price;
    inf.close();
    return 0;
}