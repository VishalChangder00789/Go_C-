#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (arr[m] > arr[m + 1] && arr[m] > arr[m - 1])
        {
            // That means peak
            return m;
        }
        else if (arr[m] > arr[m + 1])
        {
            // right half
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }

    return -1;
}

int main()
{

    vector<int> v{0, 10, 15, 20, 14, 13, 12};
    int idx = peakIndexInMountainArray(v);
    cout << idx << endl;
}