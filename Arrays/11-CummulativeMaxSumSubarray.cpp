#include <iostream>
using namespace std;

// preprocessing
//! Information : sum of 5boxes - sum of 2boxes will give sum of 3 boxes.

int *cummulativeSumSubarray(int arr[], int n)
{
    int *cs = new int[n];

    cs[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        cs[i] = cs[i - 1] + arr[i];
    }

    return cs;
}

int cummulativeMaxSumSubArray(int arr[], int n, int cs[])
{
    int maxSum = 0;
    int currentSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            currentSum = cs[j] - cs[i - 1];
            if (currentSum > maxSum)
            {
                maxSum = currentSum;
            }
        }
    }

    return maxSum;
}

int main()
{
    int arr[] = {-4, 1, 3, -2, 6, 2, -1, -4, -7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *cs = cummulativeSumSubarray(arr, n);
    int MaximumSum = cummulativeMaxSumSubArray(arr, n, cs);
    cout << " Maximum Sum : " << MaximumSum << endl;
}