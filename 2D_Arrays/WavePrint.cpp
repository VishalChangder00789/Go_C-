#include <iostream>
using namespace std;

void wavePatternTraversal(int a[10][10], int m, int n)
{
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << a[i][j] << " , ";
            }
            cout << endl;
        }
        else
        {
            for (int i = m - 1; i >= 0; i--)
            {
                cout << a[i][j] << " , ";
            }
            cout << endl;
        }
    }
}

int main()
{

    int a[10][10];
    int m, n;
    cin >> m >> n;

    // input in the array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    wavePatternTraversal(a, m, n);
}