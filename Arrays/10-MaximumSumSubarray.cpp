// Complexity :  O(n^3)
#include <iostream>
using namespace std;

void MaxiumSumSubArray(int arr[], int n)
{
    int maxSum = INT16_MIN;
    int currentSum = 0;
    int left = 0;
    int right = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            currentSum = 0;

            for (int k = i; k <= j; k++)
            {
                currentSum += arr[k];
            }

            if (currentSum > maxSum)
            {
                maxSum = currentSum;
                left = i;
                right = j;
            }
        }
    }

    cout << "Sub-Array is : " << endl;
    for (int i = left; i <= right; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;
    cout << "Maximum Sum is : " << maxSum << endl;
}
int main()
{
    int arr[] = {-4, 1, 3, -2, 6, 2, -1, -4, -7};
    int n = sizeof(arr) / sizeof(arr[0]);
    MaxiumSumSubArray(arr, n);
}
