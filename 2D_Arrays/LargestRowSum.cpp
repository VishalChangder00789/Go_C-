#include <iostream>
#include <vector>
using namespace std;

int largestRowSum(vector<vector<int>> a)
{
    int currentSum = 0;
    int maxSum = 0;
    int maxRow = 0;

    for (int i = 0; i < a.size(); i++)
    {
        currentSum = 0;
        for (int j = 0; j < a[i].size(); j++)
        {
            // computing sum of row
            currentSum += a[i][j];
        }
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            maxRow = i;
        }
    }

    return maxRow;
}

int main()
{

    vector<vector<int>> a = {{1, 2, 3, 4, 5},
                             {6, 7, 8, 9, 10},
                             {11, 12, 13, 14, 15},
                             {16, 17, 18, 19, 20},
                             {21, 22, 23, 24, 25}};

    cout << largestRowSum(a);
}