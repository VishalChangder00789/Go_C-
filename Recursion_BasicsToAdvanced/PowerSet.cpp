#include <iostream>
#include <vector>
using namespace std;

void print2D(vector<vector<int>> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums[i].size(); j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}
void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{

    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // call for exclusion
    solve(nums, output, index + 1, ans);

    // call for inclusion
    int el = nums[index];
    output.push_back(el);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{

    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;

    solve(nums, output, index, ans);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = subsets(nums);
    print2D(ans);
}
