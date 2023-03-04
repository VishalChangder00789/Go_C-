#include <iostream>
using namespace std;

/*
Problem Statement

    You are given three integers x, n and m. Your task is to find the value of (x^n)%m .
    A^B is A raised to the power of B. A%C is the A modulo C : remainder when A is divided by C.

Detailed explanation ( Input/output format, Notes, Constraints, Images )
Sample Input 1 :
2
3 1 2
4 3 10
Sample Output 1 :
1
4
Explanation For Sample Output 1:
In test case 1,
X = 3, N = 1, and M = 2
X ^ N = 3 ^ 1 = 3
X ^ N % M = 3 % 2 = 1.
So the answer will be 1.

In test case 2,
X = 4, N = 3, and M = 10
X ^ N = 4 ^ 3 = 64
X ^ N % M = 64 % 10 = 4.
So the answer will be 4.

*/

/*
    Doubt  : How modulus can bring back the original answer
*/

int fastExponentiation_withModulo(int x, int n, int m)
{

    int res = 1;

    while (n > 0)
    {

        if (n & 1)
        {
            // res = ((res) * (x) % m) % m;
        }

        // x = ((x % m) * (x % m)) % m;
        x = 1LL * x * x;
        n = n >> 1;
    }

    res = res % m;

    return res;
}

// Only Power
int fastExponentiation_onlyPower(int x, int n)
{
    // x = base
    // n = power

    int res = 1;

    while (n > 0)
    {

        // if the power is odd
        if (n & 1)
        {
            // Keen observation :  Everytime the n will be one it will run and the next iteration
            // will always come to end
            res = res * x;
        }

        x = x * x;
        n = n >> 1; // n= n/2
    }

    return res;
}

int main()
{

    // int base = 4;
    // int pow = 3;
    // cout << fastExponentiation_onlyPower(base, pow);

    int base = 5;
    int pow = 125;
    int mod = 7;
    cout << fastExponentiation_onlyPower(base, pow) << endl;
    cout << fastExponentiation_withModulo(base, pow, mod);
}