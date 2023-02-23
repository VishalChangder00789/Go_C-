#include <iostream>
#include <vector>
using namespace std;

bool searchIn2DMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int i = 0;
    int j = col - 1;

    cout << i << endl
         << j << endl;

    while (i < row && j >= 0)
    {
        // cout << "Enter" << endl;
        if (matrix[i][j] == target)
        {
            // cout << "Exit" << endl;
            return 1;
        }
        else if (matrix[i][j] > target)
        {
            // cout << "Run2" << endl;
            j--;
        }
        else
        {
            //      cout << "Run" << endl;
            i++;
        }
    }

    return 0;
}

int main()
{
    // vector<vector<int>> a = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    //     {13, 14, 15, 16},
    // };

    // vector<vector<int>> a = {
    //     {1, 4, 7, 11, 15},
    //     {2, 5, 8, 12, 19},
    //     {3, 6, 9, 16, 22},
    //     {10, 13, 14, 17, 25},
    //     {18, 21, 23, 26, 30},
    // };

    // vector<vector<int>> a = {
    //     {1, 4, 7, 11, 15},
    //     {2, 5, 8, 12, 19},
    //     {3, 6, 9, 16, 22},
    //     {20, 27, 29, 31, 33},
    //     {34, 42, 45, 89, 90}};

    // vector<vector<int>> a = {
    //     {-1, 3},
    // };

    // vector<vector<int>> a = {
    //     {1, 1},
    // };

    vector<vector<int>> a = {{48, 65, 70, 113, 133, 163, 170, 216, 298, 389},
                             {89, 169, 215, 222, 250, 348, 379, 426, 469, 554},
                             {178, 202, 253, 294, 367, 392, 428, 434, 499, 651},
                             {257, 276, 284, 332, 380, 470, 516, 561, 657, 698},
                             {275, 331, 391, 432, 500, 595, 602, 673, 758, 783},
                             {357, 365, 412, 450, 556, 642, 690, 752, 801, 887},
                             {359, 451, 534, 609, 654, 662, 693, 766, 803, 964},
                             {390, 484, 614, 669, 684, 711, 767, 804, 857, 1055},
                             {400, 515, 683, 732, 812, 834, 880, 930, 1012, 1130},
                             {480, 538, 695, 751, 864, 939, 966, 1027, 1089, 1224}};

    cout << searchIn2DMatrix(a, 802);
}