#include <iostream>
#include <vector>
using namespace std;

vector<int> SpiralTraversal(vector<vector<int>> matrix)
{
    vector<int> ans;

    int cnt = 0;
    int ttl = matrix.size() * matrix[0].size();

    int sr = 0, sc = 0;
    int er = matrix.size() - 1;
    int ec = matrix[0].size() - 1;

    while (cnt < ttl)
    {
        // top row
        for (int i = sc; cnt < ttl && i <= ec; i++)
        {

            cout << matrix[sr][i] << " ";
            ans.push_back(matrix[sr][i]);
            cnt++;
        }
        sr++;
        // last col
        for (int i = sr; cnt < ttl && i <= er; i++)
        {

            cout << matrix[i][ec] << " ";
            ans.push_back(matrix[i][ec]);
            cnt++;
        }
        ec--;

        // bottom row
        for (int i = ec; cnt < ttl && i >= sc; i--)
        {

            cout << matrix[er][i] << " ";
            ans.push_back(matrix[er][i]);
            cnt++;
        }
        er--;

        // for the left part
        for (int i = er; cnt < ttl && i >= sr; i--)
        {

            cout << matrix[i][sc] << " ";
            ans.push_back(matrix[i][sc]);
            cnt++;
        }
        sc++;
    }

    return ans;
}

int main()
{
    vector<vector<int>> a = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25},
        {26, 27, 28, 29, 30},
    };

    vector<vector<int>> b = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25},
    };

    vector<vector<int>> c = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    SpiralTraversal(c);
}
