#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12,34,56,89};
    int temp;
    int size = 4;
    for (int i = 0, j = size -1; i<j; i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

    }
    for(int i = 0; i <size; i++)
    {
        cout<<arr[i]<<"\n";
    }
}