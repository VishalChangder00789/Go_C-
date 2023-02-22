// Check for the practice folder in root directory

#include <iostream>
using namespace std;

void SpiralTraversal(int arr[10][10], int m, int n)
{
    int sr = 0, sc = 0;
    int er = m - 1;
    int ec = n - 1;

    while (sr <= er && sc <= ec)
    {
        // Top row
        for (int i = sc; i <= ec; i++)
        {
            cout << arr[sr][i] << " , ";
        }
        sr++;
        cout << endl;

        // Right side
        for (int i = sr; i <= er; i++)
        {
            cout << arr[i][ec] << " , ";
        }
        ec--;
        cout << endl;

        // Bottom Row
        if (er > sr)
        {
            for (int i = ec; i >= sc; i--)
            {
                cout << arr[er][i] << " , ";
            }
            er--;
        }
        cout << endl;

        if (ec > sc)
        {
            for (int i = er; i >= sr; i--)
            {
                cout << arr[i][sc] << " , ";
            }
            sc++;
        }
        cout << endl;
    }
}

int main()
{

    int arr[10][10];
    int m, n;
    cin >> m >> n;

    // Input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    SpiralTraversal(arr, m, n);

    return 0;
}