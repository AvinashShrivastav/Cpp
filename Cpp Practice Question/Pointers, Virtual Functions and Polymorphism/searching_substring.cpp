#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i , j;i = 6;
    char str[] = "C++ is better than C";
    int len = strlen(str);
    char *substr = new char[len];
    cout<<"Enter the string!";
    cin>>substr;
    int k;
    for(int i=0;i<len;i++) {
        k = i;
        for(int j=0;j<strlen(substr);j++) {
            if(str[k]==substr[j]) {
               if (j == strlen(substr) -1 )
               {
                cout<<"Substring is present"<<endl;
                exit(0);
               }
               k++;
            } 
            else{
                break;
            }
        }
        if (i == len -1)
        {
            cout<<"Substr is not present"<<endl;
        }
    }
  





}