/**
 * @file FindPivot.cpp
 * @author changdevishal1999@gmail.com
 * @brief
 *
 *  Given is an array which is sorted and rotated
 *  We need to find the point from where the array is rotated.
 * That element index will be known as pivot index.
 *
 * @version 0.1
 * @date 2023-02-02
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <vector>
using namespace std;

int findPivotIndex(vector<int> &a)
{
    int s = 0;
    int e = a.size() - 1;

    // super base case
    if (a.size() == 1)
    {
        return 0;
    }

    while (s <= e)
    {

        int m = s + (e - s) / 2;

        // base case
        if (a[m] < a[m - 1] && a[m] < a[m + 1])
        {
            // pivot element
            return m;
        }
        else if (a[m] > a[0])
        {
            // mid lies on the left part
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> v{16, 18, 22, 25, 1, 3, 5, 6, 7, 10, 14};
    vector<int> v2{7, 8, 9, 10, 11, 1, 2, 3, 4, 5, 6, 7};
    cout << findPivotIndex(v2);
}