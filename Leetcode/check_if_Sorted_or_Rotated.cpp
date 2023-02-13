#include <Iostream>
#include <vector>

using namespace std;

bool checkIfSortedRotated(vector<int> &nums)
{

    int count = 0;
    int n = nums.size();

    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            cout << "Comparing " << nums[i - 1] << " @ " << i - 1 << "th index , with " << nums[i] << " @ " << i << "th index" << endl;
            count++;
        }
    }

    // corner case
    if (nums[n - 1] > nums[0])
    {
        cout << "Comparing " << nums[n - 1] << " @ " << n - 1 << "th index , with " << nums[0] << " @ " << 0 << "th index" << endl;
        count++;
    }

    cout << count << endl;
    return count <= 1;
}

int main()
{

    vector<int> nums{1, 1, 1};
    bool res = checkIfSortedRotated(nums);
    cout << res << endl;
}