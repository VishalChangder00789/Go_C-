#include <iostream>
#include <vector>
#include <algorithm>

// !! Works in the case of sorted array

using namespace std;

vector<int> pairSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<int> v;
    int i = 0;               // first
    int j = nums.size() - 1; // last

    while (i < j)
    {

        int ans = (nums[i] + nums[j]);
        cout << nums[i] << "," << nums[j] << endl;

        if (ans == target)
        {
            v.push_back(i);
            v.push_back(j);
            i++;
            j--;
        }
        else if (ans > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return v;
}

int main()
{
    vector<int> nums{3, 2, 4};
    int key = 6;
    vector<int> res = pairSum(nums, key);
    cout << "===========" << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    cout << endl;
}