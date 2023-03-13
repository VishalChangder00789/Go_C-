#include <iostream>
using namespace std;

void getCount_Normal(int n)
{
    if (n == 0)
    {
        return;
    }

    getCount_Normal(n - 1);
    cout << n << " ";
}

void getCount_Reverse(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }

    cout << n << " ";
    getCount_Reverse(n - 1);
}

int main()
{
    int n = 10;
    getCount_Reverse(n);
    cout << endl;
    getCount_Normal(n);
}