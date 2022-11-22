#include <iostream>
using namespace std;

string PiyushMagicalPark(char arr[][10], int m, int n, int s, int k)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char a = arr[i][j];

            if (s < k)
            {
                return "No";
            }

            if (a == '.')
            {
                s -= 2;
            }
            else if (a == '*')
            {
                s += 5;
            }
            else
            {
                break;
            }

            if (j != (n - 1))
            {
                s--;
            }
        }
    }

    return "Yes";
}

int main()
{
    char arr[10][10];
    int m, n, k, s;

    cin >> m >> n >> k >> s;

    // Filling char array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[m][n];
        }
    }

    string res = PiyushMagicalPark(arr, m, n, s, k);
    cout << "Result : " << res << endl;
}