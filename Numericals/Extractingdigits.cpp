#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int differenceOfSum(vector<int> &nums)
{
    // find the digit sum
    int digitSum = 0;
    int elementSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        int _n = 0;
        int num = nums[i];
        while (num != 0)
        {
            _n += num % 10;
            num = num / 10;
        }
        digitSum += _n;
    }

    cout << "Digit Sum is : " << digitSum << endl;

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
        elementSum += nums[i];
    }

    cout << "Element Sum is : " << elementSum << endl;

    int result = elementSum - digitSum;
    if (result < 0)
    {
        result *= -1;
    }

    return result;
}

int main()
{

    vector<int> arr = {1, 15, 6, 3};
    cout << differenceOfSum(arr);
}