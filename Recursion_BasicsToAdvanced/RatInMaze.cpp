#include <iostream>
#include <vector>
using namespace std;
bool isSafe(int i, int j, int n, vector<vector<int>> visited, vector<vector<int>> &m)
{
    if ((i >= 0 && i < n) && (j >= 0 && j < n) && visited[i][j] == 0 && m[i][j] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(vector<vector<int>> &m, int n, vector<string> &ans, int i, int j, vector<vector<int>> &visited, string output)
{
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(output);
        return;
    }

    visited[i][j] = 1;

    // down
    if (isSafe(i + 1, j, n, visited, m))
    {
        output.push_back('D');
        solve(m, n, ans, i + 1, j, visited, output);
        output.pop_back();
    }

    // left
    if (isSafe(i, j - 1, n, visited, m))
    {
        output.push_back('L');
        solve(m, n, ans, i, j - 1, visited, output);
        output.pop_back();
    }

    // Right
    if (isSafe(i, j + 1, n, visited, m))
    {
        output.push_back('R');
        solve(m, n, ans, i, j + 1, visited, output);
        output.pop_back();
    }

    // UP
    if (isSafe(i - 1, j, n, visited, m))
    {
        output.push_back('U');
        solve(m, n, ans, i - 1, j, visited, output);
        output.pop_back();
    }

    visited[i][j] = 0;
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    cout << n << endl;
    vector<string> ans;
    if (m[0][0] == 0)
    {
        return ans;
    }
    string output = "";
    vector<vector<int>> visited = m; // very important
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }
    int src_i = 0;
    int src_j = 0;

    solve(m, n, ans, src_i, src_j, visited, output);

    return ans;
}

int main()
{
    vector<vector<int>> m{
        {1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

    int n = 4;
    vector<string> res = findPath(m, n);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
}