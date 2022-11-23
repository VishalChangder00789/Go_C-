#include <iostream>
using namespace std;

pair<int, int> StairCaseSearch(int arr[10][10], int m, int key)
{
    // For a sorted matrix

    // 2 Corners are usefull
    int i = 0;
    int j = m - 1;

    while (i > 0 || i < m || j < m || j > 0)
    {
        if (arr[i][j] == key)
        {
            return {i, j};
        }
        else if (arr[i][j] < key)
        {
            // Go down
            i++;
        }
        else if (arr[i][j] > key)
        {
            // Go left
            j--;
        }
    }

    return {-1, -1};
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

    // Stair Case Search.
    pair<int, int> p1 = StairCaseSearch(arr, m, 12);
    cout << p1.first << " , " << p1.second << endl;
}