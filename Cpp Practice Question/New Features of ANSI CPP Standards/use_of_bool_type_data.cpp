#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {1, 99, 3, -1, 6};
    int arr2[5] = {0, 66, 3, 0, 6};

    bool comp[5];
    
    cout<<"Array 1: "<<endl;
    for (int i : arr1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Array 2: "<<endl;
    for (int i : arr2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Comparing two arrays:"<<endl;
    for(int i =0; i<5; i++)
    {
        comp[i] = arr1[i] == arr2[i];
    }
    cout<<endl;
    cout<<"Displaying the comparison results "<<endl;
    for(int i : comp)
    {
        cout<<i;
    }

    return 0;
}

