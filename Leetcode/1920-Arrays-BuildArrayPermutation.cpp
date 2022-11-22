#include <iostream>
#include <vector>
using namespace std;

// input : [0,2,1,5,3,4]
// output : [0,1,2,4,5,3]
// formula : ans[i] = nums[nums[i]] // for every element

vector<int> BuildArrayPermutation(vector<int> &nums)
{

    vector<int> ans;
    vector<int>::iterator it;
    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[nums[i]]);
    }

    return ans;
}

int main()
{
    vector<int> nums{0, 2, 1, 5, 3, 4};
    vector<int> result = BuildArrayPermutation(nums);
    // always use iterators with STL groups for iterating
    for (auto it = result.begin(); it != result.end(); it++)
    {
        cout << *it << ",";
    }
}