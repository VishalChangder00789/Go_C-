#include <iostream>
using namespace std;

int RecursiveMultiply(int a, int b, int result)
{

    if (b == 0)
    {
        return result;
    }

    result += a;
    RecursiveMultiply(a, b - 1, result);
}

int main()
{
    int a = 1085;
    int b = 41;
    int result = 0;

    cout << RecursiveMultiply(a, b, result);
}