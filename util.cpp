// matrix function definitions

#include "util.h"


//string mode;

void getMode()
{
    cout << "Please enter your matrix operation of choice: " << endl; 
    cout << "transpose (T)" << endl;
    cout << "multiply (M)" << endl;
    cout << ": ";
    cin >> mode;
}

void getMatrix(long int* arr, int r, int c)
{
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
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c;  j++)
        {
            cout << *(arr + i*c + j) << " ";
        }
        cout << endl;
    }
}

