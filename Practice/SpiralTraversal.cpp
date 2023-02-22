// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> SpiralTraversal(vector<vector<int>> matrix)
// {
//     vector<int> ans;

//     int cnt = 0;
//     int ttl = matrix.size() * matrix[0].size();

//     int sr = 0, sc = 0;
//     int er = matrix.size() - 1;
//     int ec = matrix[0].size() - 1;

//     while (cnt < ttl)
//     {
//         // top row
//         for (int i = sc; cnt < ttl && i <= ec; i++)
//         {

//             cout << matrix[sr][i] << " ";
//             ans.push_back(matrix[sr][i]);
//             cnt++;
//         }
//         sr++;
//         // last col
//         for (int i = sr; cnt < ttl && i <= er; i++)
//         {

//             cout << matrix[i][ec] << " ";
//             ans.push_back(matrix[i][ec]);
//             cnt++;
//         }
//         ec--;

//         // bottom row
//         for (int i = ec; cnt < ttl && i >= sc; i--)
//         {

//             cout << matrix[er][i] << " ";
//             ans.push_back(matrix[er][i]);
//             cnt++;
//         }
//         er--;

//         // for the left part
//         for (int i = er; cnt < ttl && i >= sr; i--)
//         {

//             cout << matrix[i][sc] << " ";
//             ans.push_back(matrix[i][sc]);
//             cnt++;
//         }
//         sc++;
//     }

//     return ans;
// }

// int main()
// {
//     vector<vector<int>> a = {
//         {1, 2, 3, 4, 5},
//         {6, 7, 8, 9, 10},
//         {11, 12, 13, 14, 15},
//         {16, 17, 18, 19, 20},
//         {21, 22, 23, 24, 25},
//         {26, 27, 28, 29, 30},
//     };

//     vector<vector<int>> b = {
//         {1, 2, 3, 4, 5},
//         {6, 7, 8, 9, 10},
//         {11, 12, 13, 14, 15},
//         {16, 17, 18, 19, 20},
//         {21, 22, 23, 24, 25},
//     };

//     vector<vector<int>> c = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//     SpiralTraversal(c);
// }

#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (((i) % 4) == 0)
        {
            cout << endl;
        }

        cout << a[i] << " ";
    }
}

vector<int> spiralTraversalMatrix(vector<vector<int>> &a)
{
    vector<int> ans;

    int sr = 0;
    int sc = 0;
    int er = a.size() - 1;
    int ec = a[0].size() - 1;
    int count = 0;
    int total = a.size() * a[0].size();

    while (count < total)
    {
        // top row
        for (int i = sc; count < total && i <= ec; i++)
        {
            // cout << a[sr][i] << " ";
            ans.push_back(a[sr][i]);
            count++;
        }
        sr++;

        // right col
        for (int i = sr; count < total && i <= er; i++)
        {
            // cout << a[i][ec] << " ";
            ans.push_back(a[i][ec]);
            count++;
        }
        ec--;
        // bottom row
        for (int i = ec; count < total && i >= sc; i--)
        {
            // cout << a[er][i] << " ";
            ans.push_back(a[er][i]);
            count++;
        }
        er--;
        // left col
        for (int i = er; count < total && i >= sr; i--)
        {
            // cout << a[i][sc] << " ";
            ans.push_back(a[i][sc]);
            count++;
        }
        sc++;
    }

    return ans;
}

int main()
{
    vector<vector<int>> a;
    a = {
        {11, 12, 13, 14},
        {15, 16, 17, 18},
        {19, 20, 21, 22},
        {23, 24, 25, 26}};

    vector<int> res = spiralTraversalMatrix(a);
    printVector(res);
}
