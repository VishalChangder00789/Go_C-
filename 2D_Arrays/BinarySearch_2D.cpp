#include <iostream>
#include <vector>
using namespace std;

pair<int, int> BinarySearch(vector<vector<int>> a, int target)
{
    int row = a.size();
    int col = a[0].size();
    pair<int, int> p{-1, -1};

    int s = 0;
    int e = (row * col) - 1;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        int el = a[m / col][m % col];

        if (el == target)
        {
            p.first = m / col;
            p.second = m % col;
            return p;
        }
        else if (el > target)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }

    return {-1, -1};
}

int main()
{
    vector<vector<int>> v{
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60},
    };

    pair<int, int> p = BinarySearch(v, 10);
    cout << p.first << " " << p.second << endl;
}