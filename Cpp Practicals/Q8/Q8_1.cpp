// 8.	Create a Matrix class. Write a menu-driven program to perform following Matrix operations 
// (exceptions should be thrown by the functions if matrices passed to them are incompatible 
// and handled by the main() function):
// a.	Sum 
// b.	Product 
// c.	Transpose 


// #include <iostream>
// using namespace std;

// class Matrix
// {
    
//     public:
//     int row = 0, col = 0;
//     int arr[row][col];

//         Matrix(int noOfRow, int noOfCol)  //Default matrix with all elements 0
//         {
//             row = noOfRow;
//             col = noOfCol;
//             for (int i = 0; i <row; i ++)
//             {
//                 for (int j = 0; j <col; j ++)
//                 {
//                     arr[i][j] = 0 ;
//                 }
//             }

//         }
//         void inputMatrix(void);
//         void displayMatrix(void);


// };

// void Matrix :: inputMatrix(void)
// {
//     for (int i = 0; i < row ; i ++)
//     {
//         for (int j = 0 ; j < col; j++)
//         {
//             int element;
//             cout<<"Enter element at ("<<i<<" ," <<j <<") position";
//             cin>>element;
//             arr[i][j] = element;
//         }
//     }
// }
// void Matrix :: displayMatrix(void)
// {
//     for (int i = 0; i < row ; i ++)
//     {
//         for (int j = 0 ; j < col; j++)
//         {
//             cout<<arr[i][j]<<" ";
        
//         }
//         cout<<endl;
//     }
// }


// int main()
// {
//  Matrix A(2,3);
// }

#include <iostream>
#include <vector>
using namespace std;
class Matrix {
    int row, col;
    vector<vector<int>> arr;

public:
    Matrix(){};
    Matrix(int noOfRow, int noOfCol) : 
    row(noOfRow), col(noOfCol), arr(noOfRow, vector<int>(noOfCol, 0)) {}
    void inputMatrix() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                int element;
                cout << "Enter element at (" << i << "," << j << ") position: ";
                cin >> element;
                arr[i][j] = element;
            }
        }
    }

    void displayMatrix() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    int getElement(int i, int j)
    {
        return(arr[i][j]);
    }
    int setElement(int i,int j, int ele)
    {
        arr[i][j] = ele;
    }
    friend Matrix sum(Matrix, Matrix);


    
};
Matrix sum(Matrix A, Matrix B)
{
    int row = A.row;
    int col = A.col;
    Matrix C(row,col);
    for (int i = 0; i < row; i ++)
    {
        for(int j = 0; j < col; j++)
        {
            C.setElement(i, j ,A.getElement(i,j) + B.getElement(i,j));
        }
    }
    return(C);
}

int main() {
    Matrix A(2, 3);
    Matrix B(2, 3);
    Matrix C;
    A.inputMatrix();
    A.displayMatrix();
    C = sum(A,B);
    C.displayMatrix();

    return 0;
}
