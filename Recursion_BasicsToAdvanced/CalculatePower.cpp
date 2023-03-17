#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Power(int base, int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n == 1)
    {
        return base;
    }

    int ans = Power(base, n / 2);

    if (n & 1)
    {
        return base * ans * ans;
    }
    else
    {
        return ans * ans;
    }
}

int main()
{
    int base = 3;
    int n = 10;

    cout << Power(base, n);
}