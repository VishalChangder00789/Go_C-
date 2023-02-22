#include <iostream>
using namespace std;

bool LinearSearch_2D(int a[][10], int m, int n, int target)
{
    // Time complexity : O(N^2)

    // Performing linear search
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == target)
                return 1;
        }
    }

    return 0;
}

void _printMatrix(int a[10][10], int m, int n)
{
    cout << "Printing Square Matrix... " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
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

int main()
{
    int a[10][10] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    // int m, n;
    // cin >> m >> n;

    // _takeInputs(a, m, n);
    _printMatrix(a, 5, 5);
    cout << endl;

    if (LinearSearch_2D(a, 5, 5, 15))
    {
        cout << "Found " << endl;
    }
    else
    {
        cout << "Not found " << endl;
    }
}