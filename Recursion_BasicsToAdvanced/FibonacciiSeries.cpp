#include <iostream>
using namespace std;

// returns the nth fibonaccii series element
int fibonaccii(int n)
{

    // when to stop
    if (n == 0)
        return 0;

    if (n == 1)
    {
        return 1;
    }

    int res = fibonaccii(n - 1) + fibonaccii(n - 2);
}

int main()
{

    int n = 8;
    cout << fibonaccii(n);
}