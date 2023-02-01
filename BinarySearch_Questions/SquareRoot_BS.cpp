#include <iostream>
using namespace std;

double getSquareRoot(int n, int p)
{
    int s = 0;
    int e = n;
    double ans = -1;

    while (s <= e)
    {

        long long int m = s + (e - s) / 2;
        long long int mul = m * m;

        if (mul == n)
        {
            return m;
        }
        else if (mul < n)
        {
            ans = m;
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    // floating point precision upto p
    double pad = 0.1;

    for (int i = 0; i <= p; i++)
    {
        while ((ans * ans) <= n)
        {
            ans = ans + pad;
        }
        ans = ans - pad;
        pad = pad / 10;
    }

    return ans;
}

int main()
{

    int n = 145;
    // Find sqaure root Integer part.
    double ans = getSquareRoot(n, 7);
    cout << ans;
}