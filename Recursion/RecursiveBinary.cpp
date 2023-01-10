#include <iostream>
using namespace std;

int RecursiveBinary(int a[], int n, int key, int s, int e)
{

    int mid = (s + e) / 2;

    // base case
    if (a[mid] == key)
    {
        return mid;
    }
    else if (a[mid] < key)
    {
        // search right
        RecursiveBinary(a, n, key, mid + 1, e);
    }
    else
    {
        // search left
        RecursiveBinary(a, n, key, s, mid - 1);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 18, 19, 46, 54, 77, 88, 89, 101};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 47;
    int idx = -1;
    idx = RecursiveBinary(arr, n, key, 0, n - 1);
    if (idx == -1)
    {
        cout << idx << endl;
        cout << "Success nahi hai" << endl;
    }
    cout << idx << endl;
}