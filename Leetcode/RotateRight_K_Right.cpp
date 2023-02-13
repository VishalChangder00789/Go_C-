#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &v)
{
    int i = 0;
    while (i < v.size())
    {
        cout << v[i] << " ";
        i++;
    }
}
void rotateRightOnce(vector<int> &nums)
{
    // Pick the last element
    int el = nums[nums.size() - 1];

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        nums[i] = nums[i - 1];
    }
    nums[0] = el;
}
void rotate(vector<int> &nums, int k)
{
    for (int i = 0; i < k; i++)
    {
        rotateRightOnce(nums);
    }
}

int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6, 7};
    rotate(nums, 3);
    printArray(nums);
}