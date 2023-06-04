#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2,3,27,1,3,4,6,75,44,33};
    int *ptr;
    ptr = arr; //points to first element ; stores base location
    int num;
    cout<<"Enter element to be searched : ";
    cin>>num;

    for (int i = 0 ; i < 10; i++)
    {
        if(*ptr == num)
        {
            cout<<"Element is present at index "<<i<<" and memory location "<<ptr<<endl;
            break;

        }
        else if (i == 9)
        {
            cout<<"Number is not present"<<endl;
        }
            
        ptr++;

    }
    return 0;
}



