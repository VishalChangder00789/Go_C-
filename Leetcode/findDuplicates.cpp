#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Returns an array which contains multiple repeating elements from 1->n;
 * ! Elements should be from the range 1->n where n = size of the array
 * @param nums  : vector
 * @return vector<int>
 */
vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> v;

    for (int i = 0; i < nums.size(); i++)
    {

        int el = 0;
        if (nums[i] < 0)
        {
            el = abs(nums[i]);
        }
        else
        {
            el = nums[i];
        }

        int idx = el - 1;
        if (nums[idx] < 0)
        {
            v.push_back(el);
        }
        else
        {
            nums[idx] *= -1;
        }
    }

    return v;
}
int main()
{
    vector<int> v{10, 2, 5, 10, 9, 6, 1, 4, 3, 7};
    vector<int> result = findDuplicates(v);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}