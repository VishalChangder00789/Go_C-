#include <iostream>
using namespace std;

int getPower(int base, int n)
{
    static int res = 1;

    if (n == 0)
    {
        return 1;
    }
    res = res * base;
    getPower(base, n - 1);

    return res;
}

int main()
{
    int base = 2;
    int n = 3;
    cout << getPower(base, n);
}