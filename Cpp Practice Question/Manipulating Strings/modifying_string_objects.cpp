#include <iostream> 
#include <string>
using namespace std;
int main()
{
    string s1 = "12345";
    string s2 = "abcde";

    cout<<"Original String"<<endl<<s1<<endl<<s2;


    //Inserting string into another

    s1.insert(2, s2);
    // for (auto it = s1.begin(); it != s1.end(); ++it) {
    //     cout << *it;
    // }

    //Removing character 

    s1.erase(0,s1.length()-3);
    cout<<endl<<s1;
    s1.replace(1,1,s2);
    cout<<s1<<endl;
    
}