#include <iostream>
using namespace std;

// Rahul is given a rotated array which was sorted before.
// Rahul needs to find the given element (key) in that array.
// return the index

// Simple : Find the key in a sorted and rotated array
// variaton of binary search
int HelpRahul(int a[], int n, int key)
{

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[s] <= a[mid])
        {
            // left side sorted
            if (key >= a[s] && key <= a[mid])
            {
                e = mid - 1; // search in the left sorted part
            }
            else
            {
                s = mid + 1; // search in the non sorted part
            }
        }
        else
        {
            // Right side sorted   : a[mid]<=a[e]
            if (key >= a[mid] && key <= a[e])
            {
                s = mid + 1; // search in the right sorted part
            }
            else
            {
                e = mid - 1; // search in the non sorted part
            }
        }
    }

    return -1;
}
int main()
{
    int arr[] = {9, 10, 11, 12, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    int idx = HelpRahul(arr, n, key);
    cout << idx;
}