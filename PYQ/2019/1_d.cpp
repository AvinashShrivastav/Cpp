#include <iostream>
using namespace std;

void removeDuplicate(int arr[], int& n)
{
    int newArray[n];
    int index = 0;
    for(int i = 0; i < n; i++)
    {
        bool found= false;
        for(int j = 0; j <i; j++)
        { 
            if(arr[i] == newArray[j])
            {
                found = true;
                break;
            }

        }
        if(!found)
        {
            newArray[index] = arr[i];
            index++;
        }
        
        

    }
    for(int i = 0; i <index; i++)
    {
        arr[i] = newArray[i];
    }
    n = index;

}



int main()
{
    int arr[] = {1,2,3,4,1,2,3,88};
    int n = 8;
    removeDuplicate(arr, n);
    for(int i = 0; i <8; i++)
    {
        cout<<arr[i];
    }
    
}