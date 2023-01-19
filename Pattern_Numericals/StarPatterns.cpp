#include <iostream>
using namespace std;

void countTriangle()
{
    int count = 1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count;
        }
        cout << endl;
        count++;
    }
}

int main()
{
    /*
        *
        **
        ***
        ****
        *****

    */

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*\t";
        }
        cout << endl;
    }

    countTriangle();
}