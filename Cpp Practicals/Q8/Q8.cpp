#include <iostream>
using namespace std;

class Matrix
{
    int row = 5;
    int col = 5;
    int mat[];
    public:
        Matrix()
        {
            for(int i =0; i<row; i++)
            {
                int row[col];
                for (int j = 0; j<col; j++)
                {
                    row[j] = 0;
                }
                mat[i] = row;
            }
        }
        void print_mat()
        {
           for (int i = 0; i < col; i++)
           {
            cout<<mat[i];
           }
        }
};

int main()
{
    // Matrix A;
    // A.print_mat();
    // return 0;

    int mat[3];

    for(int i = 0 ; i <3; i++)
    {
        int row[3];
        for(int j = 0; j<3; j++)
        {
            row[j] = 0;
        }
        mat[i] = row;
    }

    
}
