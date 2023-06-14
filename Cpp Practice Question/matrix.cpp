#include <iostream>
using namespace std;


class matrix 
{
    int matrix[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    for (int i = 0; i <3; i ++)
    {
        for (int j = 0; j <3 ; j ++)
        {
            cout<<"Enter element at "<<i<<" , "<<j<<" position : ";
            int element;
            cin>>element;
            matrix[i][j] = element;
        }
    }
    public:
    void display();

}
int main()
{
    matrix A;
    A.display();
    
};
void matrix :: display()
{
    for (int i=0;i<3;i++)
    {
        for (int j= 0;j<3;j++)
        {
            cout<<"matrix:"<<matrix[i][j]<<endl;
            
        }
        
    }
}