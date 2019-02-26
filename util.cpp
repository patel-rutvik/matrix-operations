/*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
Created by: Rutvik Patel
E-mail: rutvik@ualberta.ca
Personal Site: https://patel-rutvik.github.io

This program demonstrates the implementation of a basic matrix transpose and
multiplier program.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*/
#include "util.h"

void getMode()
{
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
The getMode function takes in no parameters, nor does it return a value.

This function is responsible for getting the mode from the user at the beginning
of the program.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    cout << "Please enter your matrix operation of choice: " << endl;
    cout << "transpose (T)" << endl;
    cout << "multiply (M)" << endl;
    cout << ": ";
    cin >> mode;
}

void getMatrix(long int* arr, int r, int c)
{
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
The getMatrix function takes in the parameters:
    arr       : the array to store the values into
    r         : rows of the matrix
    c         : columns of the matrix

It does not return a value.

This function is responsible for getting the elements of the array specified and
storing them accordingly.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    for (int i = 0; i < r; i++)
    {
        cout << "row " << i + 1 << " of " << r << ": ";
        for (int j = 0; j < c; j++)
        {
            cin >> *(arr + i*c + j);
        }
    }
}

void printMatrix(long int* arr, int r, int c)
{
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
The printMatrix function takes in the parameters:
    arr       : the array to store the values into
    r         : rows of the matrix
    c         : columns of the matrix

It does not return a value.

This function is responsible for printing the array passed through to the screen
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c;  j++)
        {
            cout << *(arr + i*c + j) << " ";
        }
        cout << endl;
    }
}
