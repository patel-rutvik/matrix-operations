/*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
Created by: Rutvik Patel
E-mail: rutvik@ualberta.ca
Personal Site: https://patel-rutvik.github.io

This program demonstrates the implementation of a basic matrix transpose and
multiplier program.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*/
#include "transpose.cpp"


void multiply()
{
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
The multiply function takes in no parameters, nor does it return a value.

This function is responsible for getting two matrices from the user, and perfor-
ming matrix multiplication.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    long int rows1, rows2, columns1, columns2;

    // getting dimensions of the two matrices from the user
    cout << "Please enter the dimensions of the first matrix:" << endl;
    cout << "Rows for matrix 1: ";

    /* The next 4 while loops handle the case where the user does not input an
    acceptable value for the rows/columns dimensions. */
    while (!(cin >> rows1))
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << endl << "Please enter a valid number of rows..." << endl;
        cout << "Rows for matrix 1: ";
    }
    cout << "Columns for matrix 1: ";

    while (!(cin >> columns1))
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << endl << "Please enter a valid number of rows..." << endl;
        cout << "Columns for matrix 1: ";
    }
    cout << "Please enter the dimensions of the second matrix:" << endl;
    cout << "Rows for matrix 2: ";

    while (!(cin >> rows2))
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << endl << "Please enter a valid number of rows..." << endl;
        cout << "Rows for matrix 2: ";
    }
    cout << "Columns for matrix 2: ";

    while (!(cin >> columns2))
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << endl << "Please enter a valid number of rows..." << endl;
        cout << "Columns for matrix 2: ";
    }

    // Checking to make sure the dimensions comply with matrix multiplication
    // rules, if not prompt the user to try again.
    while (columns1 != rows2)
    {
        cout << endl << "ERROR! Columns of first matrix don't match rows of "<<
                        "second matrix." << endl;
        cout << "Cannot perform matrix multiplication. Please try " <<
                "again." << endl;
        cout << endl << "Please enter the dimensions of the first" <<
                         "matrix:" << endl;
        cout << "Rows for matrix 1: ";
        cin >> rows1;
        cout << "Columns for matrix 1: ";
        cin >> columns1;
        cout << endl << "Please enter the dimensions of the second " <<
                        "matrix:" << endl;
        cout << "Rows for matrix 2: ";
        cin >> rows2;
        cout << "Columns for matrix 2: ";
        cin >> columns2;
    }

    long int mat1[rows1][columns1], mat2[rows2][columns2], ans[rows1][columns2];

    // Storing elements of first matrix
    cout << endl << "Please enter the values in matrix 1 (row by row):" << endl;
    getMatrix(mat1[0], rows1, columns1);

    // Storing elements of second matrix.
    cout << endl << "Please enter the values in matrix 2 (row by row):" << endl;
    getMatrix(mat2[0], rows2, columns2);

    // Initializing elements of 2D array to 0, to avoid overflow.
    /* Modified implementation from the site:
    https://www.programiz.com/cpp-programming/examples/matrix-multiplication */
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < columns2; ++j)
        {
            ans[i][j] = 0;
        }
    }

    // Multiplying matrix a and b and storing in a 2D array
    /* This is a modified implementation from the site:
    https://www.programiz.com/cpp-programming/examples/matrix-multiplication */
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

    // printing the resulting matrix
    cout << endl << "The resulting matrix ("<< rows1 << " x " << columns2
                     << ") is: " << endl;
    printMatrix(ans[0], rows1, columns2);
}
