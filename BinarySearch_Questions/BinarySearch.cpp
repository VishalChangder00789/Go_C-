/**
 * @file BinarySearch.cpp
 * @author changdervishal1999@gmail.com
 * @brief
 *
 * Binary Search is a search algorithm which uses mid value indexing method to find the element
 * The function should be monotonic in nature i.e either increasing or decreasing.
 *
 * Binary Seach algorithm uses  O(log(n)) time complexity.
 *
 *
 *
 * Mid rule :
 * Since we use mid = s+e/2;
 * if we assume that the largest integer possible that is 2^31-1 is kept as both s and e then
 * adding these will casue out of range exception.
 *
 * To handle this problem we use
 * s + (e-s)/2
 *
 * @version 0.1
 * @date 2023-02-01
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <vector>

using namespace std;

int BinarySearch_op(vector<int> &v, int key)
{

    int s = 0;
    int e = v.size() - 1;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (v[m] == key)
        {
            return m;
        }
        else if (v[m] < key)
        {
            // search right
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    return -1;
}

int BinarySearch_normal(vector<int> &v, int key)
{
    int s = 0;
    int e = v.size() - 1;

    while (s <= e)
    {
        int m = (s + e) / 2; // Always put brackets

        if (v[m] == key)
        {
            return m;
        }
        else if (v[m] < key)
        {
            // search right
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
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int idx = BinarySearch_normal(v, 6);
    int idx2 = BinarySearch_op(v, 6);
    cout << idx << endl;
    cout << idx2 << endl;
}