#include <iostream>
#include <algorithm>

using namespace std;

// How many and what denominations are needed to make the money.
// Basic mathematics and implementation.

void MoneyChangeProblem(int arr[], int n)
{
}
int main()
{
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int n = sizeof(coins) / sizeof(coins[0]);

    int money = 168;

    long int lb = lower_bound(coins, coins + n, money) - coins;
    cout << lb;
}