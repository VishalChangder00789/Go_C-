/**
 * @file findDuplicate_CodingBlocks.cpp
 * @author Bishal Changder  || changdervishal1999@gmail.com
 * @brief Given an array of integers having elements 1->n-1 single integer value present twice.
 *
 *   1,2,3,4,5,6,7,8,9,9
 * ^ 1,2,3,4,5,6,7,8,9         1-9 and 1-9 will cancel out which will give us an extra 9
 *
 * @version 0.1
 * @date 2023-01-25
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &v)
{

    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans = ans ^ v[i];
    }
    cout << "Ans = : " << ans << endl;

    // Xoring till n-1 to cancel out all the remaining elements.
    for (int i = 1; i < v.size(); i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    // test 1
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 11};
    // test 2
    vector<int> v2{8, 7, 2, 5, 4, 7, 1, 3, 6};
    // test 3
    vector<int> v3{4, 3, 2, 7, 8, 2, 3, 1};
    cout << findDuplicate(v3);
}