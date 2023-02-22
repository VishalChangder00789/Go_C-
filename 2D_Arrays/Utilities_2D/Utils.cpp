#include "Utils.h"
#include <iostream>
#include <vector>
using namespace std;

// For a square matrix m , n are same

void _takeInputs(int a[10][10], int m, int n)
{
    cout << "Enter the inputs for the matrix" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << " " << j << endl;
            cin >> a[i][j];
        }
    }
}

void _printMatrix(int a[10][10], int n)
{
    cout << "Printing Square Matrix... " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

// For rectangular matrix

void _printMatrix(int a[10][10], int m, int n)
{
    cout << "Printing Rectangular Matrix... " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void _printMatrix(vector<vector<int>> a, int m, int n)
{
    cout << "Printing Vector... " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
