/**
 * @file FirstandLastOccurance.cpp
 * @author  changdervishal1999@gmail.com
 * @brief Find the first most and last most occurance index of an element in an array
 * @version 0.1
 * @date 2023-02-01
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
#include <vector>

using namespace std;

int leftMostOccurance(vector<int> &v, int key)
{
    int s = 0;
    int e = v.size() - 1;
    int ans = 0;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (v[m] == key)
        {
            ans = m;
            // since this is the last most occurance
            e = m - 1;
        }
        else if (v[m] < key)
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

int rightMostOccurance(vector<int> &v, int key)
{

    int s = 0;
    int e = v.size() - 1;
    int ans = 0;
    while (s <= e)
    {

        int m = s + (e - s) / 2;

        if (v[m] == key)
        {
            ans = m;
            s = m + 1;
        }
        else if (v[m] < key)
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

// pair<int, int> findOccurance(vector<int> &v, int k)
// {
//     pair<int, int> p;

//     int s = 0;
//     int e = v.size() - 1;

//     while (s <= e)
//     {
//         int m = s + (e - s) / 2;

//         if (v[m] == k)
//         {
//             p.first = m;
//             s = m + 1;
//         }
//         else if (v[m] < k)
//         {
//             s = m + 1;
//         }
//         else
//         {
//             e = m - 1;
//         }
//     }

//     p.second = m;
// }

int main()
{
    vector<int> v{0, 0, 1, 1, 2, 2, 2, 2};
    int p = leftMostOccurance(v, 2);
    int r = rightMostOccurance(v, 2);
    cout << p << endl;
    cout << r << endl;
}