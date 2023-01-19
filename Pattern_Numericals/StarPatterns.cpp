#include <iostream>
using namespace std;

void countTriangle(int a)
{
    int count = 1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
        count++;
    }
}

void countTriangle(long int a)
{
    int cnt = 1;
    for (int i = 0; i < 5; i++)
    {
        cnt = i;
        for (int j = 0; j <= i; j++)
        {
            cout << cnt;
            cnt++;
        }
        cout << endl;
    }
}

void countTriangle(double a)
{

    int cnt = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << cnt << "\t";
            cnt++;
        }
        cout << endl;
    }
}

int main()
{

    long int n = 23;
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

    countTriangle(1);
    cout << "========" << endl;
    countTriangle(1.0);
    cout << "========" << endl;
    countTriangle(n);
}