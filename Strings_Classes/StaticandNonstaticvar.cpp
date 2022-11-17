// Difference between static and non static variables

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int count = 0; // reinitialises the variable as zero
        cout << count << endl;
        count++;
    }

    for (int i = 0; i < 5; i++)
    {
        static int count = 0; // acts as a global variable and preserves the previous call value
        cout << count << endl;
        count++;
    }
}
