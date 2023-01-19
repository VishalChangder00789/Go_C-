#include <iostream>
using namespace std;

void ReversePrinting()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 3; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void Pattern_2()
{
    int count = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << (j + 1) << " ";
        }
        cout << endl;
    }

    cout << endl;
    Pattern_2();
    cout << endl;

    ReversePrinting();
}