#include <iostream>
using namespace std;

/*
    Why printing the value using modulo :

    Modulo is a concept which is mainly used to adjust answers which are bigger in size which cannot
    fit in int or long int or long long or unsigned long long so modulo concise the answer into a range
    of m(modulo value)

*/

int main()
{
    int n = 5;
    int fact = 1;
    int m = 47;

    for (int i = 2; i <= n; i++)
    {
        fact = (fact * i) % m;
    }

    cout << fact << endl;
}