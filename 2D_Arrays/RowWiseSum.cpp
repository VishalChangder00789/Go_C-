#include <iostream>
#include <vector>

using namespace std;
void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void _printMatrix(vector<vector<int>> a)
{
    cout << "Printing Vector... " << endl;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void RowWiseSum(vector<vector<int>> a, int m, int n)
{
    int sum = 0;
    // vector<int> v;

    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        // v.push_back(sum);
        cout << sum << " ";
    }
    cout << endl;
    // return v;
}

void ColWiseSum(vector<vector<int>> a, int m, int n)
{
    int sum = 0;
    // vector<int> v;

    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[j][i];
        }
        // v.push_back(sum);
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> a = {{1, 2, 3, 4, 5},
                             {6, 7, 8, 9, 10},
                             {11, 12, 13, 14, 15},
                             {16, 17, 18, 19, 20},
                             {21, 22, 23, 24, 25}};
    int m = 5, n = 5;

    _printMatrix(a);
    cout << endl;

    // vector<int> v = RowWiseSum(a, m, n);
    // printVector(v);

    // or

    RowWiseSum(a, m, n);
    ColWiseSum(a, m, n);
}