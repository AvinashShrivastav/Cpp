#include <iostream>
using namespace std;
int main()
{
int arr1[2][2] = {{1,1},{1,1}};
int arr2[2][2] = {{1,1},{1,1}};
int row = 2; 
int col = 2;
int arr[2][2]= {{0,0},{0,0}};
for (int i = 0 ;i <row; i++)
{

    for (int k = 0; k< col; k++)
    {
    int ele = 0;
    
    for (int j = 0; j <col; j ++)
    {         
        ele += arr1[i][j] * arr2[j][i];
    }
    arr[i][k] = ele;
    }
    
    
}
for (int i = 0; i <2; i ++)
{
    for (int j = 0; j <2 ; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
return 0;

}