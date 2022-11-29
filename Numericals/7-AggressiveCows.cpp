#include <iostream>
using namespace std;

bool canPlace(int st[], int n, int c, int min_sep)
{
    int lastCow = st[0];
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (st[i] - lastCow >= min_sep)
        {
            lastCow = st[i];
            cnt++;
            if (cnt == c)
            {
                return true;
            }
        }
    }

    return false;
}
int main()
{
    int st[] = {1, 2, 4, 8, 9};
    int n = 5;
    int c = 3;
    int ans = 0;

    int s = 0;
    int e = st[n - 1] - st[0];

    while (s <= e)
    {
        int m = (s + e) / 2;

        bool place = canPlace(st, n, c, m);

        if (place)
        {
            ans = m;
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    cout << ans;
    return 0;
}