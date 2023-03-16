#include <iostream>
using namespace std;

// Find all the different ways to climb all the stairs

int ClimbingStairs(int n)
{
    if (n == 0)
        return 1;

    if (n < 0)
        return 0;

    cout << n << endl;

    int ans = ClimbingStairs(n - 1) + ClimbingStairs(n - 2);

    return ans;
}

int main()
{
    int n = 2;

    cout << ClimbingStairs(n);
}
