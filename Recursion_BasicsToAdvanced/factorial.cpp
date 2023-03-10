#include <iostream>
using namespace std;

int getFactorial(int n)
{
    static int res = 1;

    if (n == 1)
    {
        return 1;
    }

    return n * getFactorial(n - 1);

    /*or*/

    // getFactorial(n - 1);
    // res = res * n;
    // return res;
}

int main()
{

    int n = 5;
    cout << getFactorial(n);
}