#include <iostream>
using namespace std;

// The array should be in a sorted order only

void TwoPointerSum(int a[], int n, int target)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        // base case
        if (a[i] + a[j] == target)
        {
            cout << a[i] << " , " << a[j] << endl;
            i++;
            j--;
        }
        else if (a[i] + a[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int arr[] = {1, 3, 5, 6, 7, 10, 11, 12, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 17;
    TwoPointerSum(arr, n, target);
}