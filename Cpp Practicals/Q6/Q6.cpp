// 6.	Write a program to search a given element in a set of N numbers. 

#include <iostream>
using namespace std;

int main()
{
    int set[] = {1,2,3,5,81,7,8,9};
    int size = sizeof(set)/sizeof(int);
    int search_int;
    cout<<"Enter number to be searched : ";
    cin>>search_int;
    bool found = false;
    int pos;

    for (int i = 0; i<size; i ++ )
    {
        if (search_int == set[i])
        {
            found = true;
            pos = i;
            break;
        }
    }
    if (found)
    {
        cout <<search_int<<" found at "<<pos+1<<" position";
    }
    else
    {   
        cout <<search_int<<" is not in the set";
    }
}


/*

Output :
PS C:\Users\hp\Desktop\Cpp\Cpp Practicals\Q5> cd "c:\Users\hp\Desktop\Cpp\Cpp Practicals\Q6\" ; if ($?) { g++ Q6.cpp -o Q6 } ; if ($?) { .\Q6 }
Enter number to be searched : 45
45 is not in the set

PS C:\Users\hp\Desktop\Cpp\Cpp Practicals\Q6> cd "c:\Users\hp\Desktop\Cpp\Cpp Practicals\Q6\" ; if ($?) { g++ Q6.cpp -o Q6 } ; if ($?) { .\Q6 }
Enter number to be searched : 1
1 found at 1 position
PS C:\Users\hp\Desktop\Cpp\Cpp Practicals\Q6> 
*/