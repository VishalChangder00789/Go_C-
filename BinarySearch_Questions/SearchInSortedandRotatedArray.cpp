#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &v, int s_p, int e_p, int k)
{

    int s = s_p;
    int e = e_p;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (v[m] == k)
        {
            return m;
        }
        else if (v[m] < k)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    return -1;
}

int getPivot(vector<int> &v)
{

    // find the pivot in a sorted and rotated array

    int s = 0;
    int e = v.size() - 1;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        // base case
        if (v[m] < v[m - 1] && v[m] < v[m + 1])
        {
            return m;
        }

        else if (v[m] < v[v.size() - 1])
        {
            e = m - 1;
        }

        else
        {
            s = m + 1;
        }
    }

    return -1;
}

int searchInaSortedandRotatedArray(vector<int> &v, int k, int pivot)
{

    if (k >= v[pivot] && k <= v[v.size() - 1])
    {
        return BinarySearch(v, pivot, v.size() - 1, k);
    }
    else
    {
        return BinarySearch(v, 0, pivot - 1, k);
    }
}

int main()
{
    vector<int> v{7, 8, 9, 1, 2, 3, 4, 5}; // 3
    int k = 8;

    int pivot = getPivot(v);
    int result = searchInaSortedandRotatedArray(v, k, pivot);
    cout << result << endl;
}