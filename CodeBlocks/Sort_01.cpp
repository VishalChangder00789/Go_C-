#include <iostream>
#include <vector>
using namespace std;
void print_vector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}
void sort_01(vector<int> &nums)
{
    int l = 0;
    int h = nums.size() - 1;

    while (l < h)
    {
        if (nums[l] == 0)
        {
            l++;
        }
        else if (nums[h] == 1)
        {
            h--;
        }
        else if (nums[l] == 1 && nums[h] == 0)
        {
            int temp = nums[l];
            nums[l] = nums[h];
            nums[h] = temp;
        }
    }
}
int main()
{
    vector<int> v{0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0};
    sort_01(v);
    print_vector(v);
}