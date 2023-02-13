#include <iostream>
#include <vector>

using namespace std;

vector<int> FindSum(vector<int> &a, vector<int> &b)
{
    vector<int> sum_arr;
    int i = a.size() - 1;
    int j = b.size() - 1;

    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int sum = a[i] + b[j] + carry;
        cout << a[i] << " + " << b[j] << " = " << sum << endl;
        carry = sum / 10;
        sum = sum % 10;
        cout << sum << " , " << carry << endl;

        sum_arr.push_back(sum);

        i--;
        j--;
    }

    // copy the remaining
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        sum_arr.push_back(sum);
        i--;
    }

    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        sum_arr.push_back(sum);
        j--;
    }

    // carry remains
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        sum_arr.push_back(sum);
    }

    return sum_arr;
}

void printArray(vector<int> &v)
{
    int i = 0;
    while (i < v.size())
    {
        cout << v[i] << " ";
        i++;
    }
}

int main()
{
    vector<int> a{1, 2, 3, 4};
    vector<int> b{2, 9};

    vector<int> ans = FindSum(a, b);
    printArray(ans);
    // answer in reverse , reverse the array
}
