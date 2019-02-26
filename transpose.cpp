/*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
Created by: Rutvik Patel
E-mail: rutvik@ualberta.ca
Personal Site: https://patel-rutvik.github.io

This program demonstrates the implementation of a basic matrix transpose and
multiplier program.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*/
#include "util.cpp"

void transpose()
{
    long int rows = 0, columns = 0;
    cout << "Please enter the dimensions of your matrix" << endl;
    cout << "rows: ";

    while (!(cin >> rows))
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << endl << "Please enter a valid number of rows..." << endl;
        cout << "rows: ";
    }
    cout << "columns: ";

    while (!(cin >> columns))
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Please enter a valid number of columns..." << endl;
        cout << "columns: ";
    }
    long int mat[rows][columns], trans[columns][rows];
    cout << "Please enter the values (row by row): " << endl;
    getMatrix(mat[0], rows, columns);

    cout << "The elements entered into the " << rows << " x " << columns <<
            " matrix are: " << endl;

    printMatrix(mat[0], rows, columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }

    cout << "The resulting " << columns << " x " << rows <<
            " transpose is: " << endl;
    printMatrix(trans[0], columns, rows);
}
