#include <iostream>
using namespace std;

int RecurisonPower(int base, int pow, int result)
{
    if (pow == 0)
    {
        return result;
    }

    result *= base;
    RecurisonPower(base, pow - 1, result);
}

int main()
{
    int base = 2;
    int pow = 7;

    cout << RecurisonPower(base, pow, 1);
}