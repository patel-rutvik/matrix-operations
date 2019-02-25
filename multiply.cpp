#include <stdio.h>
#include "transpose.cpp"


void multiply()
{
    long int rows1, rows2, columns1, columns2;
    cout << "Please enter the dimensions of the first matrix:" << endl;
    cout << "Rows for matrix 1: ";
    cin >> rows1;
    cout << "Columns for matrix 1: ";
    cin >> columns1;
    cout << "Please enter the dimensions of the second matrix:" << endl;
    cout << "Rows for matrix 2: ";
    cin >> rows2;
    cout << "Columns for matrix 2: ";
    cin >> columns2;

    while (columns1 != rows2)
    {
        cout << endl << "ERROR! Columns of first matrix don't match rows of second matrix." << endl;
        cout << "Cannot perform matrix multiplication. Please try again." << endl;

        cout << endl << "Please enter the dimensions of the first matrix:" << endl;
        cout << "Rows for matrix 1: ";
        cin >> rows1;
        cout << "Columns for matrix 1: ";
        cin >> columns1;
        cout << endl << "Please enter the dimensions of the second matrix:" << endl;
        cout << "Rows for matrix 2: ";
        cin >> rows2;
        cout << "Columns for matrix 2: ";
        cin >> columns2;
    }
    long int mat1[rows1][columns1], mat2[rows2][columns2], ans[rows2][columns1];

    cout << endl << "Please enter the values in matrix 1 (row by row):" << endl;
    getMatrix(mat1[0], rows1, columns1);
    /*
    for(int i = 0; i < rows1; ++i)
    {
        cout << "row" << i + 1 << ": ";
        for(int j = 0; j < columns1; ++j)
        {
            cin >> mat1[i][j];
        }
    }
    */
    // Storing elements of second matrix.
    cout << endl << "Please enter the values in matrix 2 (row by row):" << endl;
    getMatrix(mat2[0], rows2, columns2);
    /*
    for(int i = 0; i < rows2; ++i)
    {
        cout << "row" << i + 1 << ": ";
        for(int j = 0; j < columns2; ++j)
        {
            cin >> mat2[i][j];
        }
    }
    */
    // Initializing elements of matrix mult to 0.
    for (int i = 0; i < rows1; ++i)
    {
        for(int j = 0; j < columns2; ++j)
        {
            ans[i][j] = 0;
        }
    }
    // Multiplying matrix a and b and storing in array mult.
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < columns2; ++j)
        {
            for (int k = 0; k < columns1; ++k)
            {
                ans[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << endl << "The resulting matrix ("<< rows1 << " x " << columns2 << ") is: " << endl;
    printMatrix(ans[0], rows1, columns2);
    /*
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    */
}