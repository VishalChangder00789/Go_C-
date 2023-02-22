// Very Confusing

// Check for the Practice folder in the root directory

#include <iostream>
#include <algorithm>
using namespace std;

// Pending update
void Rotate_STL(int arr[][10], int m)
{

    // reverse
    for (int i = 0; i < m; i++)
    {
        reverse(arr[i], arr[i + m]);
    }

    // take transpose
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i < j)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " , ";
        }
        cout << endl;
    }
}

void RotateImage(int arr[][10], int m)
{

    // reverse the row
    int sc = 0;
    int ec = m - 1;
    for (int i = 0; i < m; i++)
    {
        while (sc < ec)
        {
            swap(arr[i][sc], arr[i][ec]);
            sc++;
            ec--;
        }

        // Remember to do this
        sc = 0;
        ec = m - 1;
    }

    // output
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " , ";
        }
        cout << endl;
    }

    cout << "====================================>" << endl;

    // take transpose
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i < j)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }

    // output
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " , ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[10][10];
    int m;
    cin >> m;

    // Input for array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // RotateImage(arr, m);
    Rotate_STL(arr, m);
}