#include <iostream>
using namespace std;

int main()
{

    const int m = 2;
    const int n = 3;
    int a[m][n];

    // Filling array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << "," << j;
            cin >> a[i][j];
        }
    }

    cout << "============================================>" << endl;

    // Output of the array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << "," << j << endl;
            cout << a[i][j] << endl;
        }
        cout << endl;
    }
}