#include <iostream>
using namespace std;

bool ifCowsbePlaced(int stalls[], int n, int c, int sep)
{
    int lastCowPlaced = stalls[0];
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (stalls[i] - lastCowPlaced >= sep)
        {
            count++;
            lastCowPlaced = stalls[i];
            if (count == c)
            {
                return true;
            }
        }
    }
    return false;
}
int AggressiveCows(int stalls[], int n, int c)
{
    int s = 0;
    int e = (stalls[n - 1] - stalls[0]);
    int ans = 0;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        bool canPlace = ifCowsbePlaced(stalls, n, c, mid);
        if (canPlace)
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
    int stalls[] = {1, 2, 4, 8, 9};
    int n = 5;
    int c = 3;
    int res = AggressiveCows(stalls, n, c);
    cout << res << endl;

    return 0;
}