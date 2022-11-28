#include <iostream>
using namespace std;

int firstOccurance(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}

int lastOccurance(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {1, 2, 5, 8, 8, 8, 8, 8, 10, 12, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;

    int res = firstOccurance(arr, n, key);
    cout << res << endl;

        int res1 = lastOccurance(arr, n, key);
    cout << res1 << endl;
}