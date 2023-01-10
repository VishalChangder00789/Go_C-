#include <iostream>
using namespace std;

int Power(int base, int pow)
{
    if (pow == 0)
    {
        return 1;
    }

    return base * Power(base, pow - 1);
}

int FastPower(int base, int pow)
{
    if (pow == 0)
        return 1;

    int smaller_prob = FastPower(base, pow / 2);
    smaller_prob *= smaller_prob;

    if (pow % 2 != 0)
    {
        // if odd
        return base * smaller_prob;
    }

    return smaller_prob;
}

int main()
{
    int base = 2;
    int pow = 3;

    cout << Power(base, pow) << endl;

    cout << FastPower(2, 9);
}