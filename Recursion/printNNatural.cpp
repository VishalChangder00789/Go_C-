#include <iostream>
using namespace std;

void printNNatural_Decreasing(int n)
{
    if (n <= 0)
    {
        cout << n << endl;
        return;
    }
    else
    {
        cout << n << endl;
    }

    printNNatural_Decreasing(n - 1);
}

void printNNatural_Increasing_Two(int n)
{

    if (n == 0)
    {
        return;
    }

    // Decrese the number to the very least and then print it at the end.
    printNNatural_Increasing_Two(n - 1);
    cout << n << " ";
}

// Increasing
void printNNatural_Increasing(int n)
{
    static int i = 0;

    if (i == n)
    {
        cout << i << endl;
        return;
    }
    else
    {

        cout << i << endl;
        i++;
    }

    printNNatural_Increasing(n);
}

int main()
{
    // printNNatural_Increasing(5);
    // printNNatural_Decreasing(5);
    printNNatural_Increasing_Two(5);
}