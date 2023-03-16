#include <iostream>
#include <vector>
#include <string>
using namespace std;

int bin_rec(vector<int> v, int s, int e, int key)
{
    int mid = s + (e - s) / 2;

    if (v[mid] == key)
    {
        return mid;
    }
    else if (v[mid] < key)
    {
        return bin_rec(v, mid + 1, e, key);
    }
    else
    {
        return bin_rec(v, s, mid - 1, key);
    }

    return -1;
}

int bin_norm(vector<int> v, int key)
{

    int s = 0;
    int e = v.size() - 1;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (v[m] == key)
        {
            return m;
        }
        else if (v[m] < key)
        {
            // Find right hand side
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    // cout << bin_norm(v, 8);
    cout << bin_rec(v, 0, v.size() - 1, 8);
}