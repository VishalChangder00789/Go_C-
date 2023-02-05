#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> getMax_Min(vector<int> &stalls)
{
    int maxEl = INT16_MIN;
    int minEl = INT16_MAX;

    // Why not use std::sort and then get the last element
    // TODO :: Because the sort algorithm takes O[N*Log(N)] time complexity which is greater

    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] > maxEl)
        {
            maxEl = stalls[i];
        }
        if (stalls[i] < minEl)
        {
            minEl = stalls[i];
        }
    }

    return {maxEl, minEl};
}
bool isPossibleSolution(vector<int> &stalls, int k, int mid)
{
    int cows = 1;

    for (int i = 1; i < stalls.size(); i++)
    {
        cout << stalls[i] << " - " << stalls[i - 1] << " = " << stalls[i] - stalls[i - 1] << endl;

        if (stalls[i] - stalls[i - 1] >= mid)
        {
            cows++;
            if (cows > k)
            {
                break;
            }
        }
    }

    if (cows < k)
    {
        return false;
    }

    return true;
}

int AggresiveCows(vector<int> &stalls, int k, int maxEl, int minEl)
{
    // It will take a sorted array only always
    int s = 0;
    int e = maxEl - minEl;
    int ans = -1;
    while (s <= e)
    {

        int mid = s + (e - s) / 2;

        if (isPossibleSolution(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> stalls{0, 3, 4, 7, 9, 10};
    // vector<int> stalls{0, 3, 4, 7, 9, 10};

    pair<int, int> p = getMax_Min(stalls);
    // sort(stalls.begin(), stalls.end());
    cout << AggresiveCows(stalls, 4, p.first, p.second);

    // cout << isPossibleSolution(stalls, 3, 3);
}