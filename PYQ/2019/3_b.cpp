#include <iostream>
using namespace std;
int const order = 3;
void UpperTriangular(int mat[][order],int order)
{
    for(int i = 0; i <order; i++)
    {
        for(int j = 0; j<order; j++)
        {
            if(i>j)
            {
                mat[i][j] = 0;
            }
        }
    }
}
int main()
{
    int mat[order][order] = {{1,2,3},{1,1,4},{1,2,2}};
    for(int i =0; i<order; i++)
    {
        for(int j = 0; j<order; j++)
        {
            cout<<mat[i][j];
        }
        cout<<endl;
    }

    UpperTriangular(mat, order);
    for(int i =0; i<order; i++)
    {
        for(int j = 0; j<order; j++)
        {
            cout<<mat[i][j];
        }
        cout<<endl;
    }

}