#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Creating string objects
    string s1; //empty
    string s2 = "Aman";
    string s3("New Delhi");
    cout<<s1<<endl<<s2<<endl<<s3<<endl;

    //Assigning value to string objects 
    s1 = s3;
    cout<<"s1 = "<<s1<<endl;

    //Using another object
    string s4(s2);
    cout<<s4<<endl;

    string inp;
    cin>>inp;
    cout<<inp<<endl;
    getline(cin, inp);
    cout<<inp<<endl;

    //concatinate string
    string s5 = s1+s2;
    cout<<s5;



}