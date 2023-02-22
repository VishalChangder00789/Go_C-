#include <iostream>
#include <vector>
using namespace std;

void printMatrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void reverseEachRow_Matrix(vector<vector<int>> &matrix)
{

    for (int i = 0; i < matrix.size(); i++)
    {
        int x = 0;
        int z = matrix[0].size() - 1;

        while (x < z)
        {
            int temp = matrix[i][x];
            matrix[i][x] = matrix[i][z];
            matrix[i][z] = temp;
            x++;
            z--;
        }
    }
}

void transposeMatrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            if (i < j)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
}

void RotateClockWise90(vector<vector<int>> &matrix)
{
    transposeMatrix(matrix);
    reverseEachRow_Matrix(matrix);
    printMatrix(matrix);
}

void Rotate_AntiClockWise90(vector<vector<int>> &matrix)
{
    reverseEachRow_Matrix(matrix);
    transposeMatrix(matrix);
    printMatrix(matrix);
}

int main()
{
    vector<vector<int>> a = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    // RotateClockWise90(a);
    Rotate_AntiClockWise90(a);
}