// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // int size1;
//     // cout<<"Enter size of first array : ";cin>>size1;
//     // sorted_arr1[size];

//     // void input_array(&sorted_arr[], int size)
//     // {
//     //     for(int i = 0; i <size; i++)
//     // {
//     //     cin>>sorted_arr[i]
//     // }
//     // }
//     int size1 = 4;
//     int size2 = 5;

//     int arr1[size1] = {1,12,24,25};
//     int arr2[size2] = {0,4,10,23,26};
//     int len = size1+size2;
//     int arr3[len];

//     for(int i = 0 ; i < size1; i++)
//     {
//         arr3[i] = arr1[i];
//     }
//     for(int j = 0 ; j <size2; j++)
//     {
//         for(int i = 0; i < len; i++ )
//         {
//             if(arr2[j] <= arr3[i])
//             {
//                 arr3 = 
//             }
//         }
//     }





//     for(int j = 0; j <size2; j++)
//     {
//         arr3[j+size1] = arr2[j];
//     }
//     int n = sizeof(arr3) / sizeof(arr3[0]);
//     sort(arr3, arr3 + n);
//     cout<<"Sorted Array: ";
//     for(int i = 0; i < size1+size2; i++)
//     {
//         cout<<arr3[i]<<" ";
//     }
    
//     // int sorted_array[size1+size2];
//     // sorted_array[0] = arr3[0];
//     // for (int i = 1 ; i <size1+size2; i++)
//     // {

//     // }
    
// }

#include <iostream>
using namespace std;


void displayArray(int newarr[],int len);
int main()
{
    int arr1[] = {1,2,3,15,65};
    int arr2[] = {0,11,12,14};
    int len1 = sizeof(arr1)/sizeof(int);
    int len2 = sizeof(arr2)/sizeof(int);

    int newarr[len1+len2];
    for(int i = 0; i < len1; i++ )
    {
        newarr[i] = arr1[i];
    }
    for(int i = 0; i < len2; i++ )
    {
        newarr[i + len1] = arr2[i];
    }


    int n = sizeof(newarr)/sizeof(int);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (newarr[j] > newarr[j+1]) 
            {
                int temp = newarr[j];
                newarr[j] = newarr[j+1];
                newarr[j+1] = temp;
            }
        }
    }
    cout<<"Orded Array 1 : "<<endl;
    displayArray(arr1,len1);
    cout<<"Orded Array 2 : "<<endl;
    displayArray(arr2,len2);
    cout<<"Orded Merged Array : "<<endl;
    displayArray(newarr,n);

}
void displayArray(int newarr[],int len)
{
    for(int i = 0; i < len; i++ )
    {
        cout<<newarr[i]<<" ";
    }
    cout<<endl;
}