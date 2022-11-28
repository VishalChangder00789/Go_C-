#include <iostream>
#include <algorithm>

using namespace std;

// How many and what denominations are needed to make the money.
// Basic mathematics and implementation.

bool compare(int a, int b)
{
    return a <= b;
}
void MoneyChangeProblem(int arr[], int n, int money, bool (&cmp)(int a, int b))
{
    while (money > 0)
    {
        int lb = lower_bound(arr, arr + n, money, cmp) - arr - 1;
        int m = arr[lb];
        cout << m << " , ";
        money = money - m;
    }
}
int main()
{
    int arr[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int n = sizeof(arr) / sizeof(arr[0]);
    int money = 168;
    MoneyChangeProblem(arr, n, money, compare);
}