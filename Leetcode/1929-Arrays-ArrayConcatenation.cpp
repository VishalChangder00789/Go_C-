#include <iostream>
using namespace std;

// adjustment to leetcode remaining

int *concatenation(int arr[], int n)
{
    int *result = new int[n + n];
    int i = 0;
    int j = 0;
    for (; i <= (n + n); i++)
    {
        result[i] = arr[j];
        j++;
        if (j == n)
        {
            j = 0;
        }
    }

    return result;
}

int main()
{

    int arr[] = {1, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *result = concatenation(arr, n);
    for (int i = 0; i < n + n; i++)
    {
        if (i == (n + n) - 1)
        {
            cout << result[i];
        }
        else
        {
            cout << result[i] << ",";
        }
    }
}