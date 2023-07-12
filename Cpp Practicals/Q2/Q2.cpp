// 2.	Write a program to remove the duplicates from an array.

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,1,2,3,2};
    int uni[5] = {0,0,0,0,0};
    uni[0] = arr[0];
    int index = 1;
    bool found;
    for (int i = 1; i < 5; i++){
        found = false;
        for( int j = 0; j <i; j++ ){
            if (arr[i] == arr[j]){
                found = true;
                break;
            }    
        }
        if (!found){
            uni[index] = arr[i];
            index++;
        }
    }
    for(int i = 0; i <5; i++){
        cout<<uni[i]<<" ";
    }
    return 0;
}

/*
Output :

PS C:\Users\hp\Desktop\Cpp> cd "c:\Users\hp\Desktop\Cpp\Cpp Practicals\Q2\" ; if ($?) { g++ Q2.cpp -o Q2 } ; if ($?) { .\Q2 }
1 2 3 0 0 

*/