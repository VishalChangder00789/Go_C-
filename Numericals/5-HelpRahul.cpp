#include <iostream>
using namespace std;

// Rahul is given a rotated array which was sorted before.
// Rahul needs to find the given element (key) in that array.
// return the index

// Simple : Find the key in a sorted and rotated array
// variaton of binary search

/**
 * @brief
 * Given an array : Sorted and Rotated.
 * The two parts are in such a way that it makes the array unsorted.
 * 4,5,6,1,2,3
 * part 1: 4,5,6
 * part 2 : 1,2,3
 *
 * If the mid lies in the first part for eg : 1st index is the mid,
 * then the elements on the left of it are sorted in a decreasing fashion.
 *
 * If the mid lies in the second part for eg : 4th index then the element on the right of it
 * are already sorted.
 *
 * We can directly check the key value and compare it to the region part1 and part2 sorted areas and
 * find the elements.
 *
 * We can apply binary search on the right and left unsorted areas left to find the element.
 *
 * @param a : Sorted and rotated array
 * @param n
 * @param key
 * @return int
 */

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