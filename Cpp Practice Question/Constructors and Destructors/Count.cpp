#include <iostream>
using namespace std;

int main()
{
    string m;
    cout << "Enter String : ";
    getline(cin ,m);
    int count ;
    for (int i = 0 ; i < m.size(); i++)
    {
        count = 0;
        for (int j = 0 ; j < m.size(); j++)
        {
            if (m[i] == m[j])
            {
                count++;
            }
        }
        cout<<m[i]<<" Appears "<< count << " times"<<endl;
    }
}