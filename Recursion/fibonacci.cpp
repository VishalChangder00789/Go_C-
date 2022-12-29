#include <iostream>
using namespace std;

int fibonaccii(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return fibonaccii(n - 1) + fibonaccii(n - 2);
}

int main()
{
    int n = 7;
    cout << fibonaccii(n);
}