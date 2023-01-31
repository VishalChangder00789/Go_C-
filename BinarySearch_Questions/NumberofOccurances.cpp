/**
 * @file NumberofOccurances.cpp
 * @author changdervishal1999@gmail.com
 * @brief Find how many times a given number is occuring in the array.
 * @version 0.1
 * @date 2023-02-01
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
#include <vector>

using namespace std;

int firstOccurance(vector<int> &v, int k)
{

    int s = 0;
    int e = v.size() - 1;
    int ans = 0;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (v[m] == k)
        {
            ans = m;
            e = m - 1;
        }
        else if (v[m] < k)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    return ans;
}
int lastOccurance(vector<int> &v, int k)
{

    int s = 0;
    int e = v.size() - 1;
    int ans = 0;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (v[m] == k)
        {
            ans = m;
            s = m + 1;
        }
        else if (v[m] < k)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    return ans;
}
int main()
{
    pair<int, int> p;
    vector<int> v{1, 2, 3, 3, 3, 3, 5, 5, 5, 8, 8, 8};
    p.first = firstOccurance(v, 8);
    p.second = lastOccurance(v, 8);

    cout << p.first << endl
         << p.second << endl;
    cout << p.second - p.first + 1 << endl; // because 0 based indexing is there
}