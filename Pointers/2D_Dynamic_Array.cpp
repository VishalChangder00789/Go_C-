#include <iostream>
using namespace std;

int main()
{
    int **arr; // double pointer
    int row, col;

    cin >> row >> col;

    // Create row heads
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col]{0}; // each row contains the address of first block of coloumn arrays
    }

    // input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    delete[] arr;
}