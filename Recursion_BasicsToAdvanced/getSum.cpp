#include <iostream>
#include <vector>

using namespace std;

int getSum(int arr[], int size, int sum)
{
    if (size == 1)
    {
        return sum += arr[0];
    }

    sum += arr[0];
    int ans = getSum(arr + 1, size - 1, sum);
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    cout << getSum(arr, size, sum);
}