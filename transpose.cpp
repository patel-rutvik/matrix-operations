#include <stdio.h>
#include <iostream>
#include "util.cpp"

using namespace std;

void transpose()
{
    long int rows = 0, columns = 0;
    cout << "Please enter the dimensions of your matrix" << endl;
    cout << "rows: ";
    cin >> rows;
    while (rows < 1) 
    {
        // bug where if you enter the letter Q, infinite loop...
        // can we check what type is entered?
        cout << "Please enter a valid number of rows..." << endl;
        cout << "rows: ";
        cin >> rows;
    }
    cout << "columns: ";
    cin >> columns;
    while (columns < 1) 
    {
        // bug where if you enter the letter Q, infinite loop...
        // see if we can check what type is entered???
        cout << "Please enter a valid number of columns..." << endl;
        cout << "columns: ";
        cin >> columns;
    }
    long int mat[rows][columns], trans[columns][rows];
    cout << "Please enter the values (row by row): " << endl;
    getMatrix(mat[0], rows, columns);
    /*
    for (int i = 0; i < rows; i++)
    {
        cout << "row " << i + 1 << ": ";
        for (int j = 0; j < columns; j++)
        {
            cin >> mat[i][j];
        }
    }
    */
    cout << "The elements entered into the " << rows << " x " << columns << " matrix are: " << endl;

    printMatrix(mat[0], rows, columns);
    /*
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    */

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }

    cout << "The resulting " << columns << " x " << rows << " transpose is: " << endl;
    printMatrix(trans[0], columns, rows);
    /*
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
    */
    
}
